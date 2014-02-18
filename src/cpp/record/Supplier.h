#ifndef SUPPLIER_H_
#define SUPPLIER_H_

#include "record/base/BaseSupplier.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Supplier: public BaseSupplier
{
public:

    Supplier(const SupplierMeta& meta)
        : BaseSupplier(meta)
    {
    }

    virtual const String name() const
    {
        return format("Supplier#%09Lu", suppKey());
    }

    virtual const String phone() const
    {
        const vector<I16u>& components = phoneComponents();
        return format("%02Lu-%03hu-%03hu-%03hu", static_cast<I64u>(nationKey()+10), components[0], components[1], components[2]);
    }

};

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::Supplier>::serialize(std::ostream& out, const TPCHGen::Supplier& record)
{
//  AbstractOutputCollector<TPCHGen::BaseSupplier>::serialize(out, record);
    write(out, record.suppKey(), false);
    out << '|';
    write(out, record.name(), false);
    out << '|';
    write(out, record.address(), false);
    out << '|';
    write(out, record.nationKey(), false);
    out << '|';
    write(out, record.phone(), false);
    out << '|';
    write(out, NumberFormatter::format(record.acctBal(), 2), false);
    out << '|';
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* SUPPLIER_H_ */

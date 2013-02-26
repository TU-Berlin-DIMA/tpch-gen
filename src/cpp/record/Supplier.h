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
        return format("%02Lu-%03hu-%03hu-%03hu", static_cast<I64u>(nationKey()+10), phoneLocalNumber1(), phoneLocalNumber2(), phoneLocalNumber3());
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
    AbstractOutputCollector<TPCHGen::BaseSupplier>::serialize(out, record);
}

} // namespace Myriad

#endif /* SUPPLIER_H_ */

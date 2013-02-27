#ifndef LINEITEM_H_
#define LINEITEM_H_

#include "record/base/BaseLineitem.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Lineitem: public BaseLineitem
{
public:

    Lineitem(const LineitemMeta& meta)
        : BaseLineitem(meta)
    {
    }

    virtual const Decimal extendedPrice() const
    {
        return quantity() * part()->retailPrice();
    }

    virtual const Date shipDate() const
    {
        return order()->orderDate() + shipDateOffset();
    }

    virtual const Date commitDate() const
    {
        return order()->orderDate() + commitDateOffset();
    }

    virtual const Date receiptDate() const
    {
        return order()->orderDate() + receiptDateOffset();
    }

};

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::Lineitem>::serialize(std::ostream& out, const TPCHGen::Lineitem& record)
{
//  AbstractOutputCollector<TPCHGen::BaseLineitem>::serialize(out, record);
    write(out, record.orderKey(), false);
    out << '|';
    write(out, record.partKey(), false);
    out << '|';
    write(out, record.suppKey(), false);
    out << '|';
    write(out, record.lineNumber(), false);
    out << '|';
    write(out, record.quantity(), false);
    out << '|';
    write(out, NumberFormatter::format(record.extendedPrice(), 2), false);
    out << '|';
    write(out, NumberFormatter::format(record.discount(), 2), false);
    out << '|';
    write(out, NumberFormatter::format(record.tax(), 2), false);
    out << '|';
    write(out, record.returnFlag(), false);
    out << '|';
    write(out, record.lineStatus(), false);
    out << '|';
    write(out, record.shipDate(), false);
    out << '|';
    write(out, record.commitDate(), false);
    out << '|';
    write(out, record.receiptDate(), false);
    out << '|';
    write(out, record.shipInstructEnumValue(), false);
    out << '|';
    write(out, record.shipModeEnumValue(), false);
    out << '|';
    write(out, record.comment(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* LINEITEM_H_ */

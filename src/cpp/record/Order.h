#ifndef ORDER_H_
#define ORDER_H_

#include "record/base/BaseOrder.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Order: public BaseOrder
{
public:

    Order(const OrderMeta& meta)
        : BaseOrder(meta)
    {
    }

    virtual const String clerk() const
    {
        return format("Clerk#%09Lu", clerkKey());
    }

};

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::Order>::serialize(std::ostream& out, const TPCHGen::Order& record)
{
//  AbstractOutputCollector<TPCHGen::BaseOrder>::serialize(out, record);
    write(out, record.orderKey(), false);
    out << '|';
    write(out, record.custKey(), false);
    out << '|';
    write(out, record.orderStatusEnumValue(), false);
    out << '|';
    write(out, NumberFormatter::format(record.totalPrice(), 2), false);
    out << '|';
    write(out, record.orderDate(), false);
    out << '|';
    write(out, record.orderPriorityEnumValue(), false);
    out << '|';
    write(out, record.clerk(), false);
    out << '|';
    write(out, record.shipPriority(), false);
    out << '|';
    write(out, record.comment(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* ORDER_H_ */

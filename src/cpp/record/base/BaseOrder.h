// auto-generatad C++ file for `order`

#ifndef BASEORDER_H_
#define BASEORDER_H_

#include "record/AbstractRecord.h"
#include "record/OrderMeta.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// forward declarations
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Order;
class OrderConfig;
class OrderGenerator;
class OrderSetterChain;

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// base record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseOrder: public Myriad::AbstractRecord
{
public:

    BaseOrder(const OrderMeta& meta) : 
        _meta(meta)
    {
    }

    const OrderMeta& meta() const
    {
        return _meta;
    }

    void orderKey(const I64u& v);
    const I64u& orderKey() const;

    void custKey(const I64u& v);
    const I64u& custKey() const;

    void orderStatus(const Enum& v);
    const Enum& orderStatus() const;
    const String& orderStatusEnumValue() const;

    void totalPrice(const Decimal& v);
    const Decimal& totalPrice() const;

    void orderDate(const Date& v);
    const Date& orderDate() const;

    void orderPriority(const Enum& v);
    const Enum& orderPriority() const;
    const String& orderPriorityEnumValue() const;

    void clerkKey(const I64u& v);
    const I64u& clerkKey() const;

    virtual const String clerk() const = 0;

    void shipPriority(const I16u& v);
    const I16u& shipPriority() const;

    void lineitemsCount(const I32u& v);
    const I32u& lineitemsCount() const;

protected:

    // fields
    I64u _order_key;
    I64u _cust_key;
    Enum _order_status;
    Decimal _total_price;
    Date _order_date;
    Enum _order_priority;
    I64u _clerk_key;
    I16u _ship_priority;
    I32u _lineitems_count;

    // meta
    const OrderMeta& _meta;
};

inline void BaseOrder::orderKey(const I64u& v)
{
    _order_key = v;
}

inline const I64u& BaseOrder::orderKey() const
{
    return _order_key;
}

inline void BaseOrder::custKey(const I64u& v)
{
    _cust_key = v;
}

inline const I64u& BaseOrder::custKey() const
{
    return _cust_key;
}

inline void BaseOrder::orderStatus(const Enum& v)
{
    _order_status = v;
}

inline const Enum& BaseOrder::orderStatus() const
{
    return _order_status;
}

inline const String& BaseOrder::orderStatusEnumValue() const
{
    if (_order_status == Myriad::nullValue<Enum>())
    {
        return Myriad::nullValue<String>();
    }
    else
    {
        return _meta.order_status[_order_status];
    }
}

inline void BaseOrder::totalPrice(const Decimal& v)
{
    _total_price = v;
}

inline const Decimal& BaseOrder::totalPrice() const
{
    return _total_price;
}

inline void BaseOrder::orderDate(const Date& v)
{
    _order_date = v;
}

inline const Date& BaseOrder::orderDate() const
{
    return _order_date;
}

inline void BaseOrder::orderPriority(const Enum& v)
{
    _order_priority = v;
}

inline const Enum& BaseOrder::orderPriority() const
{
    return _order_priority;
}

inline const String& BaseOrder::orderPriorityEnumValue() const
{
    if (_order_priority == Myriad::nullValue<Enum>())
    {
        return Myriad::nullValue<String>();
    }
    else
    {
        return _meta.order_priority[_order_priority];
    }
}

inline void BaseOrder::clerkKey(const I64u& v)
{
    _clerk_key = v;
}

inline const I64u& BaseOrder::clerkKey() const
{
    return _clerk_key;
}

inline void BaseOrder::shipPriority(const I16u& v)
{
    _ship_priority = v;
}

inline const I16u& BaseOrder::shipPriority() const
{
    return _ship_priority;
}

inline void BaseOrder::lineitemsCount(const I32u& v)
{
    _lineitems_count = v;
}

inline const I32u& BaseOrder::lineitemsCount() const
{
    return _lineitems_count;
}

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record traits specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
struct RecordTraits<TPCHGen::Order>
{
    typedef TPCHGen::OrderMeta MetaType;
    typedef TPCHGen::OrderGenerator GeneratorType;
    typedef TPCHGen::OrderSetterChain SetterChainType;
    typedef RecordFactory<TPCHGen::Order> FactoryType;

    enum Field { UNKNOWN, GEN_ID, ORDER_KEY, CUST_KEY, ORDER_STATUS, TOTAL_PRICE, ORDER_DATE, ORDER_PRIORITY, CLERK_KEY, CLERK, SHIP_PRIORITY, LINEITEMS_COUNT };
};

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::BaseOrder>::serialize(std::ostream& out, const TPCHGen::BaseOrder& record)
{
    write(out, record.orderKey(), false);
    out << '|';
    write(out, record.custKey(), false);
    out << '|';
    write(out, record.orderStatusEnumValue(), false);
    out << '|';
    write(out, record.totalPrice(), false);
    out << '|';
    write(out, record.orderDate(), false);
    out << '|';
    write(out, record.orderPriorityEnumValue(), false);
    out << '|';
    write(out, record.clerk(), false);
    out << '|';
    write(out, record.shipPriority(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* BASEORDER_H_ */

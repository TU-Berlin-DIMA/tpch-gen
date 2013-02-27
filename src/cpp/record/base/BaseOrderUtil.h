// auto-generatad C++ file for `order`

#ifndef BASEORDERUTIL_H_
#define BASEORDERUTIL_H_

#include "record/Order.h"

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record field inspection structures
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

// order_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::ORDER_KEY, TPCHGen::Order>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::orderKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::orderKey);
    }
};

// cust_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::CUST_KEY, TPCHGen::Order>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::custKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::custKey);
    }
};

// order_status
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::ORDER_STATUS, TPCHGen::Order>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::orderStatus);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::orderStatus);
    }
};

// total_price
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::TOTAL_PRICE, TPCHGen::Order>
{
    typedef Decimal FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::totalPrice);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::totalPrice);
    }
};

// order_date
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::ORDER_DATE, TPCHGen::Order>
{
    typedef Date FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::orderDate);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::orderDate);
    }
};

// order_priority
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::ORDER_PRIORITY, TPCHGen::Order>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::orderPriority);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::orderPriority);
    }
};

// clerk_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::CLERK_KEY, TPCHGen::Order>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::clerkKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::clerkKey);
    }
};

// clerk
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::CLERK, TPCHGen::Order>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `clerk` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::clerk);
    }
};

// ship_priority
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::SHIP_PRIORITY, TPCHGen::Order>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::shipPriority);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::shipPriority);
    }
};

// comment
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::COMMENT, TPCHGen::Order>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::comment);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::comment);
    }
};

// lineitems_count
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Order>::LINEITEMS_COUNT, TPCHGen::Order>
{
    typedef I32u FieldType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Order, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Order::lineitemsCount);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Order::lineitemsCount);
    }
};

} // namespace Myriad

#endif /* BASEORDERUTIL_H_ */

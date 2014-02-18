// auto-generatad C++ file for `lineitem`

#ifndef BASELINEITEMUTIL_H_
#define BASELINEITEMUTIL_H_

#include "record/Lineitem.h"

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record field inspection structures
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

// order_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::ORDER_KEY, TPCHGen::Lineitem>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::orderKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::orderKey);
    }
};

// part_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::PART_KEY, TPCHGen::Lineitem>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::partKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::partKey);
    }
};

// supp_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::SUPP_KEY, TPCHGen::Lineitem>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::suppKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::suppKey);
    }
};

// line_number
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::LINE_NUMBER, TPCHGen::Lineitem>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::lineNumber);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::lineNumber);
    }
};

// quantity
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::QUANTITY, TPCHGen::Lineitem>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::quantity);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::quantity);
    }
};

// extended_price
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::EXTENDED_PRICE, TPCHGen::Lineitem>
{
    typedef Decimal FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `extendedPrice` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::extendedPrice);
    }
};

// discount
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::DISCOUNT, TPCHGen::Lineitem>
{
    typedef Decimal FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::discount);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::discount);
    }
};

// tax
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::TAX, TPCHGen::Lineitem>
{
    typedef Decimal FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::tax);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::tax);
    }
};

// ship_date_offset
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::SHIP_DATE_OFFSET, TPCHGen::Lineitem>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::shipDateOffset);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::shipDateOffset);
    }
};

// ship_date
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::SHIP_DATE, TPCHGen::Lineitem>
{
    typedef Date FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `shipDate` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::shipDate);
    }
};

// commit_date_offset
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::COMMIT_DATE_OFFSET, TPCHGen::Lineitem>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::commitDateOffset);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::commitDateOffset);
    }
};

// commit_date
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::COMMIT_DATE, TPCHGen::Lineitem>
{
    typedef Date FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `commitDate` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::commitDate);
    }
};

// receipt_date_offset
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::RECEIPT_DATE_OFFSET, TPCHGen::Lineitem>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::receiptDateOffset);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::receiptDateOffset);
    }
};

// receipt_date
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::RECEIPT_DATE, TPCHGen::Lineitem>
{
    typedef Date FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `receiptDate` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::receiptDate);
    }
};

// return_flag
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::RETURN_FLAG, TPCHGen::Lineitem>
{
    typedef Char FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::returnFlag);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::returnFlag);
    }
};

// line_status
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::LINE_STATUS, TPCHGen::Lineitem>
{
    typedef Char FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::lineStatus);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::lineStatus);
    }
};

// ship_instruct
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::SHIP_INSTRUCT, TPCHGen::Lineitem>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::shipInstruct);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::shipInstruct);
    }
};

// ship_mode
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::SHIP_MODE, TPCHGen::Lineitem>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::shipMode);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::shipMode);
    }
};

// order
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::ORDER, TPCHGen::Lineitem>
{
    typedef TPCHGen::Order FieldType;
    // record field getter / setter types
    typedef MethodTraits<TPCHGen::Lineitem, AutoPtr<FieldType> >::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, AutoPtr<FieldType> >::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::order);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::order);
    }
};

// part_supp
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::PART_SUPP, TPCHGen::Lineitem>
{
    typedef TPCHGen::PartSupp FieldType;
    // record field getter / setter types
    typedef MethodTraits<TPCHGen::Lineitem, AutoPtr<FieldType> >::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, AutoPtr<FieldType> >::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::partSupp);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::partSupp);
    }
};

// part
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Lineitem>::PART, TPCHGen::Lineitem>
{
    typedef TPCHGen::Part FieldType;
    // record field getter / setter types
    typedef MethodTraits<TPCHGen::Lineitem, AutoPtr<FieldType> >::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Lineitem, AutoPtr<FieldType> >::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Lineitem::part);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Lineitem::part);
    }
};

} // namespace Myriad

#endif /* BASELINEITEMUTIL_H_ */

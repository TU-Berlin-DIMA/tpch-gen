// auto-generatad C++ file for `customer`

#ifndef BASECUSTOMERUTIL_H_
#define BASECUSTOMERUTIL_H_

#include "record/Customer.h"

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record field inspection structures
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

// cust_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Customer>::CUST_KEY, TPCHGen::Customer>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Customer::custKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Customer::custKey);
    }
};

// name
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Customer>::NAME, TPCHGen::Customer>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `name` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Customer::name);
    }
};

// address
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Customer>::ADDRESS, TPCHGen::Customer>
{
    typedef vector<Char> FieldType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Customer::address);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Customer::address);
    }
};

// nation_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Customer>::NATION_KEY, TPCHGen::Customer>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Customer::nationKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Customer::nationKey);
    }
};

// phone_components
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Customer>::PHONE_COMPONENTS, TPCHGen::Customer>
{
    typedef vector<I16u> FieldType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Customer::phoneComponents);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Customer::phoneComponents);
    }
};

// phone
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Customer>::PHONE, TPCHGen::Customer>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `phone` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Customer::phone);
    }
};

// acct_bal
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Customer>::ACCT_BAL, TPCHGen::Customer>
{
    typedef Decimal FieldType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Customer::acctBal);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Customer::acctBal);
    }
};

// mkt_segment
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Customer>::MKT_SEGMENT, TPCHGen::Customer>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Customer::mktSegment);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Customer::mktSegment);
    }
};

// comment
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Customer>::COMMENT, TPCHGen::Customer>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Customer, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Customer::comment);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Customer::comment);
    }
};

} // namespace Myriad

#endif /* BASECUSTOMERUTIL_H_ */

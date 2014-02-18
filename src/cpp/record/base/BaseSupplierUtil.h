// auto-generatad C++ file for `supplier`

#ifndef BASESUPPLIERUTIL_H_
#define BASESUPPLIERUTIL_H_

#include "record/Supplier.h"

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record field inspection structures
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

// supp_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Supplier>::SUPP_KEY, TPCHGen::Supplier>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Supplier::suppKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Supplier::suppKey);
    }
};

// name
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Supplier>::NAME, TPCHGen::Supplier>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `name` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Supplier::name);
    }
};

// address
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Supplier>::ADDRESS, TPCHGen::Supplier>
{
    typedef vector<Char> FieldType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Supplier::address);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Supplier::address);
    }
};

// nation_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Supplier>::NATION_KEY, TPCHGen::Supplier>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Supplier::nationKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Supplier::nationKey);
    }
};

// phone_components
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Supplier>::PHONE_COMPONENTS, TPCHGen::Supplier>
{
    typedef vector<I16u> FieldType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Supplier::phoneComponents);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Supplier::phoneComponents);
    }
};

// phone
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Supplier>::PHONE, TPCHGen::Supplier>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `phone` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Supplier::phone);
    }
};

// acct_bal
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Supplier>::ACCT_BAL, TPCHGen::Supplier>
{
    typedef Decimal FieldType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Supplier, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Supplier::acctBal);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Supplier::acctBal);
    }
};

} // namespace Myriad

#endif /* BASESUPPLIERUTIL_H_ */

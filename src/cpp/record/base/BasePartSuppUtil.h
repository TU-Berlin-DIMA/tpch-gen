// auto-generatad C++ file for `part_supp`

#ifndef BASEPARTSUPPUTIL_H_
#define BASEPARTSUPPUTIL_H_

#include "record/PartSupp.h"

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record field inspection structures
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

// part_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::PartSupp>::PART_KEY, TPCHGen::PartSupp>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::PartSupp::partKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::PartSupp::partKey);
    }
};

// supp_cardinality
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::PartSupp>::SUPP_CARDINALITY, TPCHGen::PartSupp>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::PartSupp::suppCardinality);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::PartSupp::suppCardinality);
    }
};

// supp_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::PartSupp>::SUPP_KEY, TPCHGen::PartSupp>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `suppKey` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::PartSupp::suppKey);
    }
};

// avail_qty
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::PartSupp>::AVAIL_QTY, TPCHGen::PartSupp>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::PartSupp::availQty);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::PartSupp::availQty);
    }
};

// supply_cost
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::PartSupp>::SUPPLY_COST, TPCHGen::PartSupp>
{
    typedef Decimal FieldType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::PartSupp::supplyCost);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::PartSupp::supplyCost);
    }
};

// comment
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::PartSupp>::COMMENT, TPCHGen::PartSupp>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::PartSupp, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::PartSupp::comment);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::PartSupp::comment);
    }
};

} // namespace Myriad

#endif /* BASEPARTSUPPUTIL_H_ */

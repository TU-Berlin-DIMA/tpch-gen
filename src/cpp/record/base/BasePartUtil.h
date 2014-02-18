// auto-generatad C++ file for `part`

#ifndef BASEPARTUTIL_H_
#define BASEPARTUTIL_H_

#include "record/Part.h"

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record field inspection structures
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

// part_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::PART_KEY, TPCHGen::Part>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Part::partKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::partKey);
    }
};

// param_M
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::PARAM_M, TPCHGen::Part>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Part::paramM);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::paramM);
    }
};

// param_N
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::PARAM_N, TPCHGen::Part>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Part::paramN);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::paramN);
    }
};

// name_components
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::NAME_COMPONENTS, TPCHGen::Part>
{
    typedef vector<Enum> FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Part::nameComponents);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::nameComponents);
    }
};

// name
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::NAME, TPCHGen::Part>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `name` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::name);
    }
};

// mfgr
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::MFGR, TPCHGen::Part>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `mfgr` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::mfgr);
    }
};

// brand
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::BRAND, TPCHGen::Part>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `brand` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::brand);
    }
};

// type
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::TYPE, TPCHGen::Part>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Part::type);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::type);
    }
};

// size
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::SIZE, TPCHGen::Part>
{
    typedef I16u FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Part::size);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::size);
    }
};

// container
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::CONTAINER, TPCHGen::Part>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Part::container);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::container);
    }
};

// retail_price
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Part>::RETAIL_PRICE, TPCHGen::Part>
{
    typedef Decimal FieldType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::ValSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Part, FieldType>::ValGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        throw RuntimeException("Derived field `retailPrice` does not have a setter.");
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Part::retailPrice);
    }
};

} // namespace Myriad

#endif /* BASEPARTUTIL_H_ */

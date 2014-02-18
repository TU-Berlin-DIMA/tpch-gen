// auto-generatad C++ file for `nation`

#ifndef BASENATIONUTIL_H_
#define BASENATIONUTIL_H_

#include "record/Nation.h"

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record field inspection structures
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

// nation_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Nation>::NATION_KEY, TPCHGen::Nation>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Nation, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Nation, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Nation::nationKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Nation::nationKey);
    }
};

// name
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Nation>::NAME, TPCHGen::Nation>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Nation, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Nation, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Nation::name);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Nation::name);
    }
};

// region_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Nation>::REGION_KEY, TPCHGen::Nation>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Nation, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Nation, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Nation::regionKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Nation::regionKey);
    }
};

} // namespace Myriad

#endif /* BASENATIONUTIL_H_ */

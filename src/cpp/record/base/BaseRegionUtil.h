// auto-generatad C++ file for `region`

#ifndef BASEREGIONUTIL_H_
#define BASEREGIONUTIL_H_

#include "record/Region.h"

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record field inspection structures
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

// region_key
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Region>::REGION_KEY, TPCHGen::Region>
{
    typedef I64u FieldType;
    typedef MethodTraits<TPCHGen::Region, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Region, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Region::regionKey);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Region::regionKey);
    }
};

// name
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Region>::NAME, TPCHGen::Region>
{
    typedef Enum FieldType;
    typedef MethodTraits<TPCHGen::Region, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Region, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Region::name);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Region::name);
    }
};

// comment
template<>
struct RecordFieldTraits<RecordTraits<TPCHGen::Region>::COMMENT, TPCHGen::Region>
{
    typedef String FieldType;
    typedef MethodTraits<TPCHGen::Region, FieldType>::RefSetter FieldSetterType;
    typedef MethodTraits<TPCHGen::Region, FieldType>::RefGetter FieldGetterType;

    static inline FieldSetterType setter()
    {
        return static_cast<FieldSetterType>(&TPCHGen::Region::comment);
    }

    static inline FieldGetterType getter()
    {
        return static_cast<FieldGetterType>(&TPCHGen::Region::comment);
    }
};

} // namespace Myriad

#endif /* BASEREGIONUTIL_H_ */

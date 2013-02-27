// auto-generatad C++ file for `region`

#ifndef BASEREGION_H_
#define BASEREGION_H_

#include "record/AbstractRecord.h"
#include "record/RegionMeta.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// forward declarations
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Region;
class RegionConfig;
class RegionGenerator;
class RegionSetterChain;

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// base record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseRegion: public Myriad::AbstractRecord
{
public:

    BaseRegion(const RegionMeta& meta) : 
        _meta(meta)
    {
    }

    const RegionMeta& meta() const
    {
        return _meta;
    }

    void regionKey(const I64u& v);
    const I64u& regionKey() const;

    void name(const Enum& v);
    const Enum& name() const;
    const String& nameEnumValue() const;

    void comment(const String& v);
    const String& comment() const;

protected:

    // fields
    I64u _region_key;
    Enum _name;
    String _comment;

    // meta
    const RegionMeta& _meta;
};

inline void BaseRegion::regionKey(const I64u& v)
{
    _region_key = v;
}

inline const I64u& BaseRegion::regionKey() const
{
    return _region_key;
}

inline void BaseRegion::name(const Enum& v)
{
    _name = v;
}

inline const Enum& BaseRegion::name() const
{
    return _name;
}

inline const String& BaseRegion::nameEnumValue() const
{
    return _meta.name[_name];
}

inline void BaseRegion::comment(const String& v)
{
    _comment = v;
}

inline const String& BaseRegion::comment() const
{
    return _comment;
}

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record traits specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
struct RecordTraits<TPCHGen::Region>
{
    typedef TPCHGen::RegionMeta MetaType;
    typedef TPCHGen::RegionGenerator GeneratorType;
    typedef TPCHGen::RegionSetterChain SetterChainType;
    typedef RecordFactory<TPCHGen::Region> FactoryType;

    enum Field { UNKNOWN, GEN_ID, REGION_KEY, NAME, COMMENT };
};

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::BaseRegion>::serialize(std::ostream& out, const TPCHGen::BaseRegion& record)
{
    write(out, record.regionKey(), false);
    out << '|';
    write(out, record.nameEnumValue(), false);
    out << '|';
    write(out, record.comment(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* BASEREGION_H_ */

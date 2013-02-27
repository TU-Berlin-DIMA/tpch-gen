// auto-generatad C++ file for `nation`

#ifndef BASENATION_H_
#define BASENATION_H_

#include "record/AbstractRecord.h"
#include "record/NationMeta.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// forward declarations
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Nation;
class NationConfig;
class NationGenerator;
class NationSetterChain;

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// base record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseNation: public Myriad::AbstractRecord
{
public:

    BaseNation(const NationMeta& meta) : 
        _meta(meta)
    {
    }

    const NationMeta& meta() const
    {
        return _meta;
    }

    void nationKey(const I64u& v);
    const I64u& nationKey() const;

    void name(const Enum& v);
    const Enum& name() const;
    const String& nameEnumValue() const;

    void regionKey(const Enum& v);
    const Enum& regionKey() const;
    const String& regionKeyEnumValue() const;

    void comment(const String& v);
    const String& comment() const;

protected:

    // fields
    I64u _nation_key;
    Enum _name;
    Enum _region_key;
    String _comment;

    // meta
    const NationMeta& _meta;
};

inline void BaseNation::nationKey(const I64u& v)
{
    _nation_key = v;
}

inline const I64u& BaseNation::nationKey() const
{
    return _nation_key;
}

inline void BaseNation::name(const Enum& v)
{
    _name = v;
}

inline const Enum& BaseNation::name() const
{
    return _name;
}

inline const String& BaseNation::nameEnumValue() const
{
    return _meta.name[_name];
}

inline void BaseNation::regionKey(const Enum& v)
{
    _region_key = v;
}

inline const Enum& BaseNation::regionKey() const
{
    return _region_key;
}

inline const String& BaseNation::regionKeyEnumValue() const
{
    return _meta.region_key[_region_key];
}

inline void BaseNation::comment(const String& v)
{
    _comment = v;
}

inline const String& BaseNation::comment() const
{
    return _comment;
}

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record traits specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
struct RecordTraits<TPCHGen::Nation>
{
    typedef TPCHGen::NationMeta MetaType;
    typedef TPCHGen::NationGenerator GeneratorType;
    typedef TPCHGen::NationSetterChain SetterChainType;
    typedef RecordFactory<TPCHGen::Nation> FactoryType;

    enum Field { UNKNOWN, GEN_ID, NATION_KEY, NAME, REGION_KEY, COMMENT };
};

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::BaseNation>::serialize(std::ostream& out, const TPCHGen::BaseNation& record)
{
    write(out, record.nationKey(), false);
    out << '|';
    write(out, record.nameEnumValue(), false);
    out << '|';
    write(out, record.regionKeyEnumValue(), false);
    out << '|';
    write(out, record.comment(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* BASENATION_H_ */

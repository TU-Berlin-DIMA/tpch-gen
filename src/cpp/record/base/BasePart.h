// auto-generatad C++ file for `part`

#ifndef BASEPART_H_
#define BASEPART_H_

#include "record/AbstractRecord.h"
#include "record/PartMeta.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// forward declarations
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Part;
class PartConfig;
class PartGenerator;
class PartSetterChain;

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// base record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BasePart: public Myriad::AbstractRecord
{
public:

    BasePart(const PartMeta& meta) : 
        _name_components(5),
        _meta(meta)
    {
    }

    const PartMeta& meta() const
    {
        return _meta;
    }

    void partKey(const I64u& v);
    const I64u& partKey() const;

    void paramM(const I16u& v);
    const I16u& paramM() const;

    void paramN(const I16u& v);
    const I16u& paramN() const;

    void nameComponents(const vector<Enum>& v);
    const vector<Enum>& nameComponents() const;
    const String& nameComponentsEnumValue(size_t i) const;

    virtual const String name() const = 0;

    virtual const String mfgr() const = 0;

    virtual const String brand() const = 0;

    void type(const Enum& v);
    const Enum& type() const;
    const String& typeEnumValue() const;

    void size(const I16u& v);
    const I16u& size() const;

    void container(const Enum& v);
    const Enum& container() const;
    const String& containerEnumValue() const;

    virtual const Decimal retailPrice() const = 0;

protected:

    // fields
    I64u _part_key;
    I16u _param_M;
    I16u _param_N;
    vector<Enum> _name_components;
    Enum _type;
    I16u _size;
    Enum _container;

    // meta
    const PartMeta& _meta;
};

inline void BasePart::partKey(const I64u& v)
{
    _part_key = v;
}

inline const I64u& BasePart::partKey() const
{
    return _part_key;
}

inline void BasePart::paramM(const I16u& v)
{
    _param_M = v;
}

inline const I16u& BasePart::paramM() const
{
    return _param_M;
}

inline void BasePart::paramN(const I16u& v)
{
    _param_N = v;
}

inline const I16u& BasePart::paramN() const
{
    return _param_N;
}

inline void BasePart::nameComponents(const vector<Enum>& v)
{
    _name_components = v;
    _name_components.resize(v.size());
}

inline const vector<Enum>& BasePart::nameComponents() const
{
    return _name_components;
}

inline const String& BasePart::nameComponentsEnumValue(size_t i) const
{
    if (_name_components[i] == Myriad::nullValue<Enum>())
    {
        return Myriad::nullValue<String>();
    }
    else
    {
        return _meta.name_components[_name_components[i]];
    }
}

inline void BasePart::type(const Enum& v)
{
    _type = v;
}

inline const Enum& BasePart::type() const
{
    return _type;
}

inline const String& BasePart::typeEnumValue() const
{
    if (_type == Myriad::nullValue<Enum>())
    {
        return Myriad::nullValue<String>();
    }
    else
    {
        return _meta.type[_type];
    }
}

inline void BasePart::size(const I16u& v)
{
    _size = v;
}

inline const I16u& BasePart::size() const
{
    return _size;
}

inline void BasePart::container(const Enum& v)
{
    _container = v;
}

inline const Enum& BasePart::container() const
{
    return _container;
}

inline const String& BasePart::containerEnumValue() const
{
    if (_container == Myriad::nullValue<Enum>())
    {
        return Myriad::nullValue<String>();
    }
    else
    {
        return _meta.container[_container];
    }
}

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record traits specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
struct RecordTraits<TPCHGen::Part>
{
    typedef TPCHGen::PartMeta MetaType;
    typedef TPCHGen::PartGenerator GeneratorType;
    typedef TPCHGen::PartSetterChain SetterChainType;
    typedef RecordFactory<TPCHGen::Part> FactoryType;

    enum Field { UNKNOWN, GEN_ID, PART_KEY, PARAM_M, PARAM_N, NAME_COMPONENTS, NAME, MFGR, BRAND, TYPE, SIZE, CONTAINER, RETAIL_PRICE };
};

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::BasePart>::serialize(std::ostream& out, const TPCHGen::BasePart& record)
{
    write(out, record.partKey(), false);
    out << '|';
    write(out, record.name(), false);
    out << '|';
    write(out, record.mfgr(), false);
    out << '|';
    write(out, record.brand(), false);
    out << '|';
    write(out, record.typeEnumValue(), false);
    out << '|';
    write(out, record.size(), false);
    out << '|';
    write(out, record.containerEnumValue(), false);
    out << '|';
    write(out, record.retailPrice(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* BASEPART_H_ */

// auto-generatad C++ file for `part_supp`

#ifndef BASEPARTSUPP_H_
#define BASEPARTSUPP_H_

#include "record/AbstractRecord.h"
#include "record/PartSuppMeta.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// forward declarations
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class PartSupp;
class PartSuppConfig;
class PartSuppGenerator;
class PartSuppSetterChain;

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// base record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BasePartSupp: public Myriad::AbstractRecord
{
public:

    BasePartSupp(const PartSuppMeta& meta) : 
        _meta(meta)
    {
    }

    const PartSuppMeta& meta() const
    {
        return _meta;
    }

    void partKey(const I64u& v);
    const I64u& partKey() const;

    void suppCardinality(const I64u& v);
    const I64u& suppCardinality() const;

    virtual const I64u suppKey() const = 0;

    void availQty(const I16u& v);
    const I16u& availQty() const;

    void supplyCost(const Decimal& v);
    const Decimal& supplyCost() const;

protected:

    // fields
    I64u _part_key;
    I64u _supp_cardinality;
    I16u _avail_qty;
    Decimal _supply_cost;

    // meta
    const PartSuppMeta& _meta;
};

inline void BasePartSupp::partKey(const I64u& v)
{
    _part_key = v;
}

inline const I64u& BasePartSupp::partKey() const
{
    return _part_key;
}

inline void BasePartSupp::suppCardinality(const I64u& v)
{
    _supp_cardinality = v;
}

inline const I64u& BasePartSupp::suppCardinality() const
{
    return _supp_cardinality;
}

inline void BasePartSupp::availQty(const I16u& v)
{
    _avail_qty = v;
}

inline const I16u& BasePartSupp::availQty() const
{
    return _avail_qty;
}

inline void BasePartSupp::supplyCost(const Decimal& v)
{
    _supply_cost = v;
}

inline const Decimal& BasePartSupp::supplyCost() const
{
    return _supply_cost;
}

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record traits specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
struct RecordTraits<TPCHGen::PartSupp>
{
    typedef TPCHGen::PartSuppMeta MetaType;
    typedef TPCHGen::PartSuppGenerator GeneratorType;
    typedef TPCHGen::PartSuppSetterChain SetterChainType;
    typedef RecordFactory<TPCHGen::PartSupp> FactoryType;

    enum Field { UNKNOWN, GEN_ID, PART_KEY, SUPP_CARDINALITY, SUPP_KEY, AVAIL_QTY, SUPPLY_COST };
};

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::BasePartSupp>::serialize(std::ostream& out, const TPCHGen::BasePartSupp& record)
{
    write(out, record.partKey(), false);
    out << '|';
    write(out, record.suppKey(), false);
    out << '|';
    write(out, record.availQty(), false);
    out << '|';
    write(out, record.supplyCost(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* BASEPARTSUPP_H_ */

#ifndef PARTSUPP_H_
#define PARTSUPP_H_

#include "record/base/BasePartSupp.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class PartSupp: public BasePartSupp
{
public:

    PartSupp(const PartSuppMeta& meta)
        : BasePartSupp(meta)
    {
    }

    virtual const I64u suppKey() const
    {
        I64u S = suppCardinality();
        I16u i = genID() % 4;
        return (partKey() + (i * (S/4 + static_cast<I64u>((partKey() - 1)/S)))) % S + 1;
    }

};

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::PartSupp>::serialize(std::ostream& out, const TPCHGen::PartSupp& record)
{
//  AbstractOutputCollector<TPCHGen::BasePartSupp>::serialize(out, record);
    write(out, record.partKey(), false);
    out << '|';
    write(out, record.suppKey(), false);
    out << '|';
    write(out, record.availQty(), false);
    out << '|';
    write(out, NumberFormatter::format(record.supplyCost(),2), false);
    out << '|';
    write(out, record.comment(), false);
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* PARTSUPP_H_ */

#ifndef PART_H_
#define PART_H_

#include "record/base/BasePart.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Part: public BasePart
{
public:

    Part(const PartMeta& meta)
        : BasePart(meta)
    {
    }

    virtual const String name() const
    {
        return format("%s %s %s %s %s", nameComponentsEnumValue(0), nameComponentsEnumValue(1), nameComponentsEnumValue(2), nameComponentsEnumValue(3), nameComponentsEnumValue(4));
    }

    virtual const String mfgr() const
    {
        return format("Manufacturer#%hu", paramM());
    }

    virtual const String brand() const
    {
        return format("Brand#%hu%hu", paramM(), paramN());
    }

    virtual const Decimal retailPrice() const
    {
        I64u price = 90000, p = partKey();
        price += (p / 10) % 20001;
        price += (p % 1000) * 100;

        return price/100.0;
    }

};

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::Part>::serialize(std::ostream& out, const TPCHGen::Part& record)
{
//  AbstractOutputCollector<TPCHGen::BasePart>::serialize(out, record);
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
    write(out, NumberFormatter::format(record.retailPrice(), 2), false);
    out << '|';
    out << '|';
    out << '\n';
}

} // namespace Myriad

#endif /* PART_H_ */

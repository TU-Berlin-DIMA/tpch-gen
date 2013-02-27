// auto-generatad C++ file for `lineitem`

#ifndef BASELINEITEMMETA_H_
#define BASELINEITEMMETA_H_

#include "record/AbstractRecord.h"

namespace TPCHGen {

// forward declarations
class Lineitem;

class BaseLineitemMeta : public Myriad::RecordMeta<Lineitem>
{
public:

    BaseLineitemMeta(const Myriad::EnumSetPool& enumSets) : 
        ship_mode(enumSets.get("lineitem.ship_mode").values()), ship_instruct(enumSets.get("lineitem.ship_instruction").values())
    {
    }

    // enum set refecences
    const vector<String>& ship_mode;
    const vector<String>& ship_instruct;
};

} // namespace TPCHGen

#endif /* BASELINEITEMMETA_H_ */

// auto-generatad C++ file for `nation`

#ifndef BASENATIONMETA_H_
#define BASENATIONMETA_H_

#include "record/AbstractRecord.h"

namespace TPCHGen {

// forward declarations
class Nation;

class BaseNationMeta : public Myriad::RecordMeta<Nation>
{
public:

    BaseNationMeta(const Myriad::EnumSetPool& enumSets) : 
        region_key(enumSets.get("nation.region_key").values()), name(enumSets.get("nation.name").values())
    {
    }

    // enum set refecences
    const vector<String>& region_key;
    const vector<String>& name;
};

} // namespace TPCHGen

#endif /* BASENATIONMETA_H_ */

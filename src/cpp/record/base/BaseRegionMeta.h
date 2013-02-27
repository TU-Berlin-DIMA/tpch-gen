// auto-generatad C++ file for `region`

#ifndef BASEREGIONMETA_H_
#define BASEREGIONMETA_H_

#include "record/AbstractRecord.h"

namespace TPCHGen {

// forward declarations
class Region;

class BaseRegionMeta : public Myriad::RecordMeta<Region>
{
public:

    BaseRegionMeta(const Myriad::EnumSetPool& enumSets) : 
        name(enumSets.get("region.name").values())
    {
    }

    // enum set refecences
    const vector<String>& name;
};

} // namespace TPCHGen

#endif /* BASEREGIONMETA_H_ */

// auto-generatad C++ file for `part`

#ifndef BASEPARTMETA_H_
#define BASEPARTMETA_H_

#include "record/AbstractRecord.h"

namespace TPCHGen {

// forward declarations
class Part;

class BasePartMeta : public Myriad::RecordMeta<Part>
{
public:

    BasePartMeta(const Myriad::EnumSetPool& enumSets) : 
        container(enumSets.get("part.container").values()), type(enumSets.get("part.type").values()), name_components(enumSets.get("part.name_component").values())
    {
    }

    // enum set refecences
    const vector<String>& container;
    const vector<String>& type;
    const vector<String>& name_components;
};

} // namespace TPCHGen

#endif /* BASEPARTMETA_H_ */

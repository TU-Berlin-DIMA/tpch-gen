#ifndef REGIONGENERATOR_H_
#define REGIONGENERATOR_H_

#include "generator/base/BaseRegionGenerator.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class RegionGenerator: public BaseRegionGenerator
{
public:

    typedef Myriad::RecordTraits<Region>::SetterChainType SetterChainType;

    RegionGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        BaseRegionGenerator(name, config, notificationCenter)
    {
    }
};

} // namespace TPCHGen

#endif /* BASEREGIONGENERATOR_H_ */

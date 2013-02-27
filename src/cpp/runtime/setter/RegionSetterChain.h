#ifndef REGIONSETTERCHAIN_H_
#define REGIONSETTERCHAIN_H_

#include "runtime/setter/base/BaseRegionSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class RegionSetterChain : public BaseRegionSetterChain
{
public:

    RegionSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        BaseRegionSetterChain(opMode, random, config)
    {
    }

    virtual ~RegionSetterChain()
    {
    }
};

} // namespace TPCHGen

#endif /* BASEREGIONGENERATOR_H_ */

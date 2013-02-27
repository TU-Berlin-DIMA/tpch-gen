#ifndef PARTSUPPSETTERCHAIN_H_
#define PARTSUPPSETTERCHAIN_H_

#include "runtime/setter/base/BasePartSuppSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class PartSuppSetterChain : public BasePartSuppSetterChain
{
public:

    PartSuppSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        BasePartSuppSetterChain(opMode, random, config)
    {
    }

    virtual ~PartSuppSetterChain()
    {
    }
};

} // namespace TPCHGen

#endif /* BASEPARTSUPPGENERATOR_H_ */

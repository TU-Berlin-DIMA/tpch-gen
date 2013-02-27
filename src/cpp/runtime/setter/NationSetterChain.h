#ifndef NATIONSETTERCHAIN_H_
#define NATIONSETTERCHAIN_H_

#include "runtime/setter/base/BaseNationSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class NationSetterChain : public BaseNationSetterChain
{
public:

    NationSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        BaseNationSetterChain(opMode, random, config)
    {
    }

    virtual ~NationSetterChain()
    {
    }
};

} // namespace TPCHGen

#endif /* BASENATIONGENERATOR_H_ */

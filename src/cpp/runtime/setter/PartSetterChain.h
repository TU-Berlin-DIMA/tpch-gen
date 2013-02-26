#ifndef PARTSETTERCHAIN_H_
#define PARTSETTERCHAIN_H_

#include "runtime/setter/base/BasePartSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class PartSetterChain : public BasePartSetterChain
{
public:

    PartSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        BasePartSetterChain(opMode, random, config)
    {
    }

    virtual ~PartSetterChain()
    {
    }
};

} // namespace TPCHGen

#endif /* BASEPARTGENERATOR_H_ */

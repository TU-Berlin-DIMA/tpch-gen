#ifndef LINEITEMSETTERCHAIN_H_
#define LINEITEMSETTERCHAIN_H_

#include "runtime/setter/base/BaseLineitemSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class LineitemSetterChain : public BaseLineitemSetterChain
{
public:

    LineitemSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        BaseLineitemSetterChain(opMode, random, config)
    {
    }

    virtual ~LineitemSetterChain()
    {
    }
};

} // namespace TPCHGen

#endif /* BASELINEITEMGENERATOR_H_ */

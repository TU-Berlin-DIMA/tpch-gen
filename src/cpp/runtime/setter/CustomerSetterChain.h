#ifndef CUSTOMERSETTERCHAIN_H_
#define CUSTOMERSETTERCHAIN_H_

#include "runtime/setter/base/BaseCustomerSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class CustomerSetterChain : public BaseCustomerSetterChain
{
public:

    CustomerSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        BaseCustomerSetterChain(opMode, random, config)
    {
    }

    virtual ~CustomerSetterChain()
    {
    }
};

} // namespace TPCHGen

#endif /* BASECUSTOMERGENERATOR_H_ */

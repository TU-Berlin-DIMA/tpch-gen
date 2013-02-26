#ifndef SUPPLIERSETTERCHAIN_H_
#define SUPPLIERSETTERCHAIN_H_

#include "runtime/setter/base/BaseSupplierSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class SupplierSetterChain : public BaseSupplierSetterChain
{
public:

    SupplierSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        BaseSupplierSetterChain(opMode, random, config)
    {
    }

    virtual ~SupplierSetterChain()
    {
    }
};

} // namespace TPCHGen

#endif /* BASESUPPLIERGENERATOR_H_ */

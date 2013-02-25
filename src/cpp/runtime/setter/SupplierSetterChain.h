#ifndef SUPPLIERSETTERCHAIN_H_
#define SUPPLIERSETTERCHAIN_H_

#include "runtime/setter/base/BaseSupplierSetterChain.h"

using namespace Myriad;

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class SupplierSetterChain : public BaseSupplierSetterChain
{
public:

    SupplierSetterChain(OperationMode& opMode, RandomStream& random, GeneratorConfig& config) :
        BaseSupplierSetterChain(opMode, random, config)
    {
    }

    virtual ~SupplierSetterChain()
    {
    }
};

} // namespace TPCHGen

#endif /* BASESUPPLIERGENERATOR_H_ */

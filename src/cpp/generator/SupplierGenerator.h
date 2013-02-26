#ifndef SUPPLIERGENERATOR_H_
#define SUPPLIERGENERATOR_H_

#include "generator/base/BaseSupplierGenerator.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class SupplierGenerator: public BaseSupplierGenerator
{
public:

    typedef Myriad::RecordTraits<Supplier>::SetterChainType SetterChainType;

    SupplierGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        BaseSupplierGenerator(name, config, notificationCenter)
    {
    }
};

} // namespace TPCHGen

#endif /* BASESUPPLIERGENERATOR_H_ */

// auto-generatad C++ generator for `supplier`

#ifndef BASESUPPLIERGENERATOR_H_
#define BASESUPPLIERGENERATOR_H_

#include "generator/RandomSequenceGenerator.h"
#include "runtime/setter/SupplierSetterChain.h"

using namespace Myriad;

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseSupplierGenerator: public RandomSequenceGenerator<Supplier>
{
public:

    BaseSupplierGenerator(const string& name, GeneratorConfig& config, NotificationCenter& notificationCenter) :
        RandomSequenceGenerator<Supplier>(name, config, notificationCenter)
    {
    }

    void prepare(Stage stage, const GeneratorPool& pool)
    {
        // call generator implementation
        RandomSequenceGenerator<Supplier>::prepare(stage, pool);

        if (stage.name() == name())
        {
            registerTask(new PartitionedSequenceIteratorTask< Supplier > (*this, _config));
        }
    }

    SupplierSetterChain setterChain(BaseSetterChain::OperationMode opMode, RandomStream& random)
    {
        return SupplierSetterChain(opMode, random, _config);
    }
};

} // namespace TPCHGen

#endif /* BASESUPPLIERGENERATOR_H_ */

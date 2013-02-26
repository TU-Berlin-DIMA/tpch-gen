// auto-generatad C++ generator for `supplier`

#ifndef BASESUPPLIERGENERATOR_H_
#define BASESUPPLIERGENERATOR_H_

#include "generator/RandomSequenceGenerator.h"
#include "runtime/setter/SupplierSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseSupplierGenerator: public Myriad::RandomSequenceGenerator<Supplier>
{
public:

    BaseSupplierGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        Myriad::RandomSequenceGenerator<Supplier>(name, config, notificationCenter)
    {
    }

    void prepare(Stage stage, const Myriad::GeneratorPool& pool)
    {
        // call generator implementation
        Myriad::RandomSequenceGenerator<Supplier>::prepare(stage, pool);

        if (stage.name() == name())
        {
            registerTask(new Myriad::PartitionedSequenceIteratorTask< Supplier > (*this, _config));
        }
    }

    SupplierSetterChain setterChain(Myriad::BaseSetterChain::OperationMode opMode, Myriad::RandomStream& random)
    {
        return SupplierSetterChain(opMode, random, _config);
    }
};

} // namespace TPCHGen

#endif /* BASESUPPLIERGENERATOR_H_ */

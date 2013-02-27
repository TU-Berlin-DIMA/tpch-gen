// auto-generatad C++ generator for `customer`

#ifndef BASECUSTOMERGENERATOR_H_
#define BASECUSTOMERGENERATOR_H_

#include "generator/RandomSequenceGenerator.h"
#include "runtime/setter/CustomerSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseCustomerGenerator: public Myriad::RandomSequenceGenerator<Customer>
{
public:

    BaseCustomerGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        Myriad::RandomSequenceGenerator<Customer>(name, config, notificationCenter)
    {
    }

    void prepare(Stage stage, const Myriad::GeneratorPool& pool)
    {
        // call generator implementation
        Myriad::RandomSequenceGenerator<Customer>::prepare(stage, pool);

        if (stage.name() == name())
        {
            registerTask(new Myriad::PartitionedSequenceIteratorTask< Customer > (*this, _config));
        }
    }

    CustomerSetterChain setterChain(Myriad::BaseSetterChain::OperationMode opMode, Myriad::RandomStream& random)
    {
        return CustomerSetterChain(opMode, random, _config);
    }
};

} // namespace TPCHGen

#endif /* BASECUSTOMERGENERATOR_H_ */

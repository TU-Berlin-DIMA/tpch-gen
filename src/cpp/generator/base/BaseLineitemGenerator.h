// auto-generatad C++ generator for `lineitem`

#ifndef BASELINEITEMGENERATOR_H_
#define BASELINEITEMGENERATOR_H_

#include "generator/RandomSequenceGenerator.h"
#include "runtime/setter/LineitemSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BaseLineitemGenerator: public Myriad::RandomSequenceGenerator<Lineitem>
{
public:

    BaseLineitemGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        Myriad::RandomSequenceGenerator<Lineitem>(name, config, notificationCenter)
    {
    }

    void prepare(Stage stage, const Myriad::GeneratorPool& pool)
    {
        // call generator implementation
        Myriad::RandomSequenceGenerator<Lineitem>::prepare(stage, pool);

        if (stage.name() == name())
        {
            registerTask(new Myriad::PartitionedSequenceIteratorTask< Lineitem > (*this, _config));
        }
    }

    LineitemSetterChain setterChain(Myriad::BaseSetterChain::OperationMode opMode, Myriad::RandomStream& random)
    {
        return LineitemSetterChain(opMode, random, _config);
    }
};

} // namespace TPCHGen

#endif /* BASELINEITEMGENERATOR_H_ */

// auto-generatad C++ generator for `part`

#ifndef BASEPARTGENERATOR_H_
#define BASEPARTGENERATOR_H_

#include "generator/RandomSequenceGenerator.h"
#include "runtime/setter/PartSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BasePartGenerator: public Myriad::RandomSequenceGenerator<Part>
{
public:

    BasePartGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        Myriad::RandomSequenceGenerator<Part>(name, config, notificationCenter)
    {
    }

    void prepare(Stage stage, const Myriad::GeneratorPool& pool)
    {
        // call generator implementation
        Myriad::RandomSequenceGenerator<Part>::prepare(stage, pool);

        if (stage.name() == name())
        {
            registerTask(new Myriad::PartitionedSequenceIteratorTask< Part > (*this, _config));
        }
    }

    PartSetterChain setterChain(Myriad::BaseSetterChain::OperationMode opMode, Myriad::RandomStream& random)
    {
        return PartSetterChain(opMode, random, _config);
    }
};

} // namespace TPCHGen

#endif /* BASEPARTGENERATOR_H_ */

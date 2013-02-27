// auto-generatad C++ generator for `part_supp`

#ifndef BASEPARTSUPPGENERATOR_H_
#define BASEPARTSUPPGENERATOR_H_

#include "generator/RandomSequenceGenerator.h"
#include "runtime/setter/PartSuppSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class BasePartSuppGenerator: public Myriad::RandomSequenceGenerator<PartSupp>
{
public:

    BasePartSuppGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        Myriad::RandomSequenceGenerator<PartSupp>(name, config, notificationCenter)
    {
    }

    void prepare(Stage stage, const Myriad::GeneratorPool& pool)
    {
        // call generator implementation
        Myriad::RandomSequenceGenerator<PartSupp>::prepare(stage, pool);

        if (stage.name() == name())
        {
            registerTask(new Myriad::PartitionedSequenceIteratorTask< PartSupp > (*this, _config));
        }
    }

    PartSuppSetterChain setterChain(Myriad::BaseSetterChain::OperationMode opMode, Myriad::RandomStream& random)
    {
        return PartSuppSetterChain(opMode, random, _config);
    }
};

} // namespace TPCHGen

#endif /* BASEPARTSUPPGENERATOR_H_ */

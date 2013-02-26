#ifndef PARTGENERATOR_H_
#define PARTGENERATOR_H_

#include "generator/base/BasePartGenerator.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class PartGenerator: public BasePartGenerator
{
public:

    typedef Myriad::RecordTraits<Part>::SetterChainType SetterChainType;

    PartGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        BasePartGenerator(name, config, notificationCenter)
    {
    }
};

} // namespace TPCHGen

#endif /* BASEPARTGENERATOR_H_ */

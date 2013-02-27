#ifndef PARTSUPPGENERATOR_H_
#define PARTSUPPGENERATOR_H_

#include "generator/base/BasePartSuppGenerator.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class PartSuppGenerator: public BasePartSuppGenerator
{
public:

    typedef Myriad::RecordTraits<PartSupp>::SetterChainType SetterChainType;

    PartSuppGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        BasePartSuppGenerator(name, config, notificationCenter)
    {
    }
};

} // namespace TPCHGen

#endif /* BASEPARTSUPPGENERATOR_H_ */

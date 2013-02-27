#ifndef NATIONGENERATOR_H_
#define NATIONGENERATOR_H_

#include "generator/base/BaseNationGenerator.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class NationGenerator: public BaseNationGenerator
{
public:

    typedef Myriad::RecordTraits<Nation>::SetterChainType SetterChainType;

    NationGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        BaseNationGenerator(name, config, notificationCenter)
    {
    }
};

} // namespace TPCHGen

#endif /* BASENATIONGENERATOR_H_ */

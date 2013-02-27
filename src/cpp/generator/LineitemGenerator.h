#ifndef LINEITEMGENERATOR_H_
#define LINEITEMGENERATOR_H_

#include "generator/base/BaseLineitemGenerator.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class LineitemGenerator: public BaseLineitemGenerator
{
public:

    typedef Myriad::RecordTraits<Lineitem>::SetterChainType SetterChainType;

    LineitemGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        BaseLineitemGenerator(name, config, notificationCenter)
    {
    }
};

} // namespace TPCHGen

#endif /* BASELINEITEMGENERATOR_H_ */

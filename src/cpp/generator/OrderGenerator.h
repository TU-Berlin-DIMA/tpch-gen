#ifndef ORDERGENERATOR_H_
#define ORDERGENERATOR_H_

#include "generator/base/BaseOrderGenerator.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class OrderGenerator: public BaseOrderGenerator
{
public:

    typedef Myriad::RecordTraits<Order>::SetterChainType SetterChainType;

    OrderGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        BaseOrderGenerator(name, config, notificationCenter)
    {
    }
};

} // namespace TPCHGen

#endif /* BASEORDERGENERATOR_H_ */

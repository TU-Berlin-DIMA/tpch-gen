#ifndef CUSTOMERGENERATOR_H_
#define CUSTOMERGENERATOR_H_

#include "generator/base/BaseCustomerGenerator.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// AbstractSequenceGenerator specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class CustomerGenerator: public BaseCustomerGenerator
{
public:

    typedef Myriad::RecordTraits<Customer>::SetterChainType SetterChainType;

    CustomerGenerator(const string& name, Myriad::GeneratorConfig& config, NotificationCenter& notificationCenter) :
        BaseCustomerGenerator(name, config, notificationCenter)
    {
    }
};

} // namespace TPCHGen

#endif /* BASECUSTOMERGENERATOR_H_ */

#ifndef ORDERSETTERCHAIN_H_
#define ORDERSETTERCHAIN_H_

#include "runtime/setter/base/BaseOrderSetterChain.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class OrderSetterChain : public BaseOrderSetterChain
{
public:

    OrderSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        BaseOrderSetterChain(opMode, random, config),
        _custKeyPr(config.function< Myriad::UniformPrFunction<I64u> >("Pr[customer.cust_key]")),
        _custKeyMax(_custKeyPr.xMax()-1),
        _custMortality(config.parameter<I16u>("customer.order-mortality"))
    {
    }

    virtual ~OrderSetterChain()
    {
    }

    virtual I64u setOrderKey(const AutoPtr<Order>& recordPtr, Myriad::RandomStream& random)
    {
        I16u sparseBits = 2, sparseKeep = 3;
        I64u orderKey, lowBits, i = recordPtr->genID()+1;

        orderKey = i;
        lowBits = static_cast<I64u>(i & ((1 << sparseKeep) - 1));
        orderKey = orderKey >> sparseKeep;
        orderKey = orderKey << sparseBits;
        orderKey = orderKey << sparseKeep;
        orderKey += lowBits;

        return orderKey;
    }

    virtual I64u setCustKey(const AutoPtr<Order>& recordPtr, Myriad::RandomStream& random)
    {
        I16 delta = 1;
        I64u custKey = _custKeyPr.sample(random.next());

        while (custKey % _custMortality == 0)
        {
            custKey += delta;
            custKey = (custKey < _custKeyMax) ? custKey : _custKeyMax;
            delta *= -1;
        }

        return custKey;
    }

private:

    Myriad::UniformPrFunction<I64u>& _custKeyPr;

    I64u _custKeyMax;

    I16u _custMortality;
};

} // namespace TPCHGen

#endif /* BASEORDERGENERATOR_H_ */

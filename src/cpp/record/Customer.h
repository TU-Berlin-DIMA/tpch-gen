#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include "record/base/BaseCustomer.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record type
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

class Customer: public BaseCustomer
{
public:

    Customer(const CustomerMeta& meta)
        : BaseCustomer(meta)
    {
    }

    virtual const String name() const
    {
        return format("Customer#%09Lu", custKey());
    }

    virtual const String phone() const
    {
        const vector<I16u>& components = phoneComponents();
        return format("%02Lu-%03hu-%03hu-%03hu", static_cast<I64u>(nationKey()+10), components[0], components[1], components[2]);
    }

};

} // namespace TPCHGen

namespace Myriad {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// record serialize method specialization
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

template<>
inline void AbstractOutputCollector<TPCHGen::Customer>::serialize(std::ostream& out, const TPCHGen::Customer& record)
{
    AbstractOutputCollector<TPCHGen::BaseCustomer>::serialize(out, record);
}

} // namespace Myriad

#endif /* CUSTOMER_H_ */

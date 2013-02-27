// auto-generatad C++ file for `customer`

#ifndef BASECUSTOMERMETA_H_
#define BASECUSTOMERMETA_H_

#include "record/AbstractRecord.h"

namespace TPCHGen {

// forward declarations
class Customer;

class BaseCustomerMeta : public Myriad::RecordMeta<Customer>
{
public:

    BaseCustomerMeta(const Myriad::EnumSetPool& enumSets) : 
        mkt_segment(enumSets.get("customer.mkt_segment").values())
    {
    }

    // enum set refecences
    const vector<String>& mkt_segment;
};

} // namespace TPCHGen

#endif /* BASECUSTOMERMETA_H_ */

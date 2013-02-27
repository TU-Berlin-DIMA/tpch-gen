// auto-generatad C++ file for `order`

#ifndef BASEORDERMETA_H_
#define BASEORDERMETA_H_

#include "record/AbstractRecord.h"

namespace TPCHGen {

// forward declarations
class Order;

class BaseOrderMeta : public Myriad::RecordMeta<Order>
{
public:

    BaseOrderMeta(const Myriad::EnumSetPool& enumSets) : 
        order_status(enumSets.get("order.status").values()), order_priority(enumSets.get("order.priority").values())
    {
    }

    // enum set refecences
    const vector<String>& order_status;
    const vector<String>& order_priority;
};

} // namespace TPCHGen

#endif /* BASEORDERMETA_H_ */

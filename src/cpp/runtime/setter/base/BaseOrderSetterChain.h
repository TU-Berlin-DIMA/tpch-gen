// auto-generatad C++ setter chain for `order`

#ifndef BASEORDERSETTERCHAIN_H_
#define BASEORDERSETTERCHAIN_H_

#include "config/GeneratorConfig.h"
#include "runtime/setter/SetterChain.h"
#include "record/Order.h"
#include "record/OrderUtil.h"
#include "runtime/provider/value/CallbackValueProvider.h"
#include "runtime/provider/value/ConstValueProvider.h"
#include "runtime/provider/value/RandomValueProvider.h"
#include "runtime/setter/FieldSetter.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

/**
 * SetterChain specialization for User.
 */
class BaseOrderSetterChain : public Myriad::SetterChain<Order>
{
public:

    // runtime component typedefs
    // runtime components for setter `set_order_key`
    typedef Myriad::CallbackValueProvider< I64u, Order, BaseOrderSetterChain > ValueProvider01Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::ORDER_KEY, ValueProvider01Type > SetOrderKeyType;
    // runtime components for setter `set_cust_key`
    typedef Myriad::CallbackValueProvider< I64u, Order, BaseOrderSetterChain > ValueProvider02Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::CUST_KEY, ValueProvider02Type > SetCustKeyType;
    // runtime components for setter `set_order_status`
    typedef Myriad::ConstValueProvider< Enum, Order > ValueProvider03Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::ORDER_STATUS, ValueProvider03Type > SetOrderStatusType;
    // runtime components for setter `set_total_price`
    typedef Myriad::ConstValueProvider< Decimal, Order > ValueProvider04Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::TOTAL_PRICE, ValueProvider04Type > SetTotalPriceType;
    // runtime components for setter `set_order_date`
    typedef Myriad::RandomValueProvider< Date, Order, Myriad::UniformPrFunction<Date>, 0 > ValueProvider05Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::ORDER_DATE, ValueProvider05Type > SetOrderDateType;
    // runtime components for setter `set_order_priority`
    typedef Myriad::RandomValueProvider< Enum, Order, Myriad::UniformPrFunction<Enum>, 0 > ValueProvider06Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::ORDER_PRIORITY, ValueProvider06Type > SetOrderPriorityType;
    // runtime components for setter `set_clerk_key`
    typedef Myriad::RandomValueProvider< I64u, Order, Myriad::UniformPrFunction<Enum>, 0 > ValueProvider07Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::CLERK_KEY, ValueProvider07Type > SetClerkKeyType;
    // runtime components for setter `set_ship_priority`
    typedef Myriad::ConstValueProvider< I16u, Order > ValueProvider08Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::SHIP_PRIORITY, ValueProvider08Type > SetShipPriorityType;
    // runtime components for setter `set_comment`
    typedef Myriad::ConstValueProvider< String, Order > ValueProvider09Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::COMMENT, ValueProvider09Type > SetCommentType;
    // runtime components for setter `set_lineitems_count`
    typedef Myriad::RandomValueProvider< I32u, Order, Myriad::UniformPrFunction<I32u>, 0 > ValueProvider10Type;
    typedef Myriad::FieldSetter< Order, Myriad::RecordTraits<Order>::LINEITEMS_COUNT, ValueProvider10Type > SetLineitemsCountType;

    BaseOrderSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        Myriad::SetterChain<Order>(opMode, random),
        _sequenceCardinality(config.cardinality("order")),
        _valueProvider01(*this, &BaseOrderSetterChain::setOrderKey, 0),
        _setOrderKey(_valueProvider01),
        _valueProvider02(*this, &BaseOrderSetterChain::setCustKey, 1),
        _setCustKey(_valueProvider02),
        _valueProvider03(0),
        _setOrderStatus(_valueProvider03),
        _valueProvider04(42.99),
        _setTotalPrice(_valueProvider04),
        _valueProvider05(config.function< Myriad::UniformPrFunction<Date> >("Pr[order.date]")),
        _setOrderDate(_valueProvider05),
        _valueProvider06(config.function< Myriad::UniformPrFunction<Enum> >("Pr[order.priority]")),
        _setOrderPriority(_valueProvider06),
        _valueProvider07(config.function< Myriad::UniformPrFunction<Enum> >("Pr[order.clerk_key]")),
        _setClerkKey(_valueProvider07),
        _valueProvider08(0),
        _setShipPriority(_valueProvider08),
        _valueProvider09("pholder for a random comment"),
        _setComment(_valueProvider09),
        _valueProvider10(config.function< Myriad::UniformPrFunction<I32u> >("Pr[order.lineitems_count]")),
        _setLineitemsCount(_valueProvider10),
        _logger(Logger::get("order.setter.chain"))
    {
    }

    virtual ~BaseOrderSetterChain()
    {
    }

    /**
     * Applies the setter chain to the given record instance.
     */
    void operator()(AutoPtr<Order> recordPtr) const
    {
        ensurePosition(recordPtr->genID());

        BaseOrderSetterChain* me = const_cast<BaseOrderSetterChain*>(this);

        // apply setter chain
        me->_setOrderKey(recordPtr, me->_random);
        me->_setCustKey(recordPtr, me->_random);
        me->_setOrderStatus(recordPtr, me->_random);
        me->_setTotalPrice(recordPtr, me->_random);
        me->_setOrderDate(recordPtr, me->_random);
        me->_setOrderPriority(recordPtr, me->_random);
        me->_setClerkKey(recordPtr, me->_random);
        me->_setShipPriority(recordPtr, me->_random);
        me->_setComment(recordPtr, me->_random);
        me->_setLineitemsCount(recordPtr, me->_random);
    }

    /**
     * Predicate filter function.
     */
    virtual Myriad::Interval<I64u> filter(const Myriad::EqualityPredicate<Order>& predicate)
    {
        Myriad::Interval<I64u> result(0, _sequenceCardinality);

        // apply inverse setter chain
        _setOrderKey.filterRange(predicate, result);
        _setCustKey.filterRange(predicate, result);
        _setOrderStatus.filterRange(predicate, result);
        _setTotalPrice.filterRange(predicate, result);
        _setOrderDate.filterRange(predicate, result);
        _setOrderPriority.filterRange(predicate, result);
        _setClerkKey.filterRange(predicate, result);
        _setShipPriority.filterRange(predicate, result);
        _setComment.filterRange(predicate, result);
        _setLineitemsCount.filterRange(predicate, result);

        return result;
    }

    virtual I64u setOrderKey(const AutoPtr<Order>& recordPtr, Myriad::RandomStream& random) = 0;

    virtual I64u setCustKey(const AutoPtr<Order>& recordPtr, Myriad::RandomStream& random) = 0;

protected:

    // cardinality
    I64u _sequenceCardinality;

    // runtime components for setter `set_order_key`
    ValueProvider01Type _valueProvider01;
    SetOrderKeyType _setOrderKey;

    // runtime components for setter `set_cust_key`
    ValueProvider02Type _valueProvider02;
    SetCustKeyType _setCustKey;

    // runtime components for setter `set_order_status`
    ValueProvider03Type _valueProvider03;
    SetOrderStatusType _setOrderStatus;

    // runtime components for setter `set_total_price`
    ValueProvider04Type _valueProvider04;
    SetTotalPriceType _setTotalPrice;

    // runtime components for setter `set_order_date`
    ValueProvider05Type _valueProvider05;
    SetOrderDateType _setOrderDate;

    // runtime components for setter `set_order_priority`
    ValueProvider06Type _valueProvider06;
    SetOrderPriorityType _setOrderPriority;

    // runtime components for setter `set_clerk_key`
    ValueProvider07Type _valueProvider07;
    SetClerkKeyType _setClerkKey;

    // runtime components for setter `set_ship_priority`
    ValueProvider08Type _valueProvider08;
    SetShipPriorityType _setShipPriority;

    // runtime components for setter `set_comment`
    ValueProvider09Type _valueProvider09;
    SetCommentType _setComment;

    // runtime components for setter `set_lineitems_count`
    ValueProvider10Type _valueProvider10;
    SetLineitemsCountType _setLineitemsCount;

    // Logger instance.
    Logger& _logger;
};

} // namespace TPCHGen

#endif /* BASEORDERSETTERCHAIN_H_ */

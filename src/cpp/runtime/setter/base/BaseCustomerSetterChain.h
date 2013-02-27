// auto-generatad C++ setter chain for `customer`

#ifndef BASECUSTOMERSETTERCHAIN_H_
#define BASECUSTOMERSETTERCHAIN_H_

#include "config/GeneratorConfig.h"
#include "runtime/setter/SetterChain.h"
#include "record/Customer.h"
#include "record/CustomerUtil.h"
#include "runtime/provider/range/ConstRangeProvider.h"
#include "runtime/provider/value/ClusteredValueProvider.h"
#include "runtime/provider/value/ConstValueProvider.h"
#include "runtime/provider/value/ElementWiseValueProvider.h"
#include "runtime/provider/value/RandomValueProvider.h"
#include "runtime/setter/FieldSetter.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

/**
 * SetterChain specialization for User.
 */
class BaseCustomerSetterChain : public Myriad::SetterChain<Customer>
{
public:

    // runtime component typedefs
    // runtime components for setter `set_cust_key`
    typedef Myriad::ConstRangeProvider< I64u, Customer > RangeProvider01Type;
    typedef Myriad::ClusteredValueProvider< I64u, Customer, Myriad::UniformPrFunction<I64u>, RangeProvider01Type > ValueProvider01Type;
    typedef Myriad::FieldSetter< Customer, Myriad::RecordTraits<Customer>::CUST_KEY, ValueProvider01Type > SetCustKeyType;
    // runtime components for setter `set_address`
    typedef Myriad::RandomValueProvider< Char, Customer, Myriad::CombinedPrFunction<Char>, 0 > ValueProvider02Type;
    typedef Myriad::RandomValueProvider< I16u, Customer, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider03Type;
    typedef Myriad::ElementWiseValueProvider< Char, Customer, 40 > ValueProvider04Type;
    typedef Myriad::FieldSetter< Customer, Myriad::RecordTraits<Customer>::ADDRESS, ValueProvider04Type > SetAddressType;
    // runtime components for setter `set_nation_key`
    typedef Myriad::RandomValueProvider< I64u, Customer, Myriad::UniformPrFunction<I64u>, 0 > ValueProvider05Type;
    typedef Myriad::FieldSetter< Customer, Myriad::RecordTraits<Customer>::NATION_KEY, ValueProvider05Type > SetNationKeyType;
    // runtime components for setter `set_phone_components`
    typedef Myriad::RandomValueProvider< I16u, Customer, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider06Type;
    typedef Myriad::ConstValueProvider< I16u, Customer > ValueProvider07Type;
    typedef Myriad::ElementWiseValueProvider< I16u, Customer, 3 > ValueProvider08Type;
    typedef Myriad::FieldSetter< Customer, Myriad::RecordTraits<Customer>::PHONE_COMPONENTS, ValueProvider08Type > SetPhoneComponentsType;
    // runtime components for setter `set_acct_bal`
    typedef Myriad::RandomValueProvider< Decimal, Customer, Myriad::UniformPrFunction<Decimal>, 0 > ValueProvider09Type;
    typedef Myriad::FieldSetter< Customer, Myriad::RecordTraits<Customer>::ACCT_BAL, ValueProvider09Type > SetAcctBalType;
    // runtime components for setter `set_mkt_segment`
    typedef Myriad::RandomValueProvider< Enum, Customer, Myriad::UniformPrFunction<Enum>, 0 > ValueProvider10Type;
    typedef Myriad::FieldSetter< Customer, Myriad::RecordTraits<Customer>::MKT_SEGMENT, ValueProvider10Type > SetMktSegmentType;
    // runtime components for setter `set_comment`
    typedef Myriad::ConstValueProvider< String, Customer > ValueProvider11Type;
    typedef Myriad::FieldSetter< Customer, Myriad::RecordTraits<Customer>::COMMENT, ValueProvider11Type > SetCommentType;

    BaseCustomerSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        Myriad::SetterChain<Customer>(opMode, random),
        _sequenceCardinality(config.cardinality("customer")),
        _rangeProvider01(0, config.parameter<I64u>("customer.sequence.cardinality")),
        _valueProvider01(config.function< Myriad::UniformPrFunction<I64u> >("Pr[customer.cust_key]"), _rangeProvider01),
        _setCustKey(_valueProvider01),
        _valueProvider02(config.function< Myriad::CombinedPrFunction<Char> >("Pr[common.address_char]")),
        _valueProvider03(config.function< Myriad::UniformPrFunction<I16u> >("Pr[common.address_length]")),
        _valueProvider04(_valueProvider02, _valueProvider03),
        _setAddress(_valueProvider04),
        _valueProvider05(config.function< Myriad::UniformPrFunction<I64u> >("Pr[customer.nation_key]")),
        _setNationKey(_valueProvider05),
        _valueProvider06(config.function< Myriad::UniformPrFunction<I16u> >("Pr[common.phone_component]")),
        _valueProvider07(3),
        _valueProvider08(_valueProvider06, _valueProvider07),
        _setPhoneComponents(_valueProvider08),
        _valueProvider09(config.function< Myriad::UniformPrFunction<Decimal> >("Pr[supplier.acct_bal]")),
        _setAcctBal(_valueProvider09),
        _valueProvider10(config.function< Myriad::UniformPrFunction<Enum> >("Pr[customer.mkt_segment]")),
        _setMktSegment(_valueProvider10),
        _valueProvider11("temporary placeholder for a random comment"),
        _setComment(_valueProvider11),
        _logger(Logger::get("customer.setter.chain"))
    {
    }

    virtual ~BaseCustomerSetterChain()
    {
    }

    /**
     * Applies the setter chain to the given record instance.
     */
    void operator()(AutoPtr<Customer> recordPtr) const
    {
        ensurePosition(recordPtr->genID());

        BaseCustomerSetterChain* me = const_cast<BaseCustomerSetterChain*>(this);

        // apply setter chain
        me->_setCustKey(recordPtr, me->_random);
        me->_setAddress(recordPtr, me->_random);
        me->_setNationKey(recordPtr, me->_random);
        me->_setPhoneComponents(recordPtr, me->_random);
        me->_setAcctBal(recordPtr, me->_random);
        me->_setMktSegment(recordPtr, me->_random);
        me->_setComment(recordPtr, me->_random);
    }

    /**
     * Predicate filter function.
     */
    virtual Myriad::Interval<I64u> filter(const Myriad::EqualityPredicate<Customer>& predicate)
    {
        Myriad::Interval<I64u> result(0, _sequenceCardinality);

        // apply inverse setter chain
        _setCustKey.filterRange(predicate, result);
        _setAddress.filterRange(predicate, result);
        _setNationKey.filterRange(predicate, result);
        _setPhoneComponents.filterRange(predicate, result);
        _setAcctBal.filterRange(predicate, result);
        _setMktSegment.filterRange(predicate, result);
        _setComment.filterRange(predicate, result);

        return result;
    }

protected:

    // cardinality
    I64u _sequenceCardinality;

    // runtime components for setter `set_cust_key`
    RangeProvider01Type _rangeProvider01;
    ValueProvider01Type _valueProvider01;
    SetCustKeyType _setCustKey;

    // runtime components for setter `set_address`
    ValueProvider02Type _valueProvider02;
    ValueProvider03Type _valueProvider03;
    ValueProvider04Type _valueProvider04;
    SetAddressType _setAddress;

    // runtime components for setter `set_nation_key`
    ValueProvider05Type _valueProvider05;
    SetNationKeyType _setNationKey;

    // runtime components for setter `set_phone_components`
    ValueProvider06Type _valueProvider06;
    ValueProvider07Type _valueProvider07;
    ValueProvider08Type _valueProvider08;
    SetPhoneComponentsType _setPhoneComponents;

    // runtime components for setter `set_acct_bal`
    ValueProvider09Type _valueProvider09;
    SetAcctBalType _setAcctBal;

    // runtime components for setter `set_mkt_segment`
    ValueProvider10Type _valueProvider10;
    SetMktSegmentType _setMktSegment;

    // runtime components for setter `set_comment`
    ValueProvider11Type _valueProvider11;
    SetCommentType _setComment;

    // Logger instance.
    Logger& _logger;
};

} // namespace TPCHGen

#endif /* BASECUSTOMERSETTERCHAIN_H_ */

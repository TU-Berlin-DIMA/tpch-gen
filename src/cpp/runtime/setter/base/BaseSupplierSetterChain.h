// auto-generatad C++ setter chain for `supplier`

#ifndef BASESUPPLIERSETTERCHAIN_H_
#define BASESUPPLIERSETTERCHAIN_H_

#include "config/GeneratorConfig.h"
#include "runtime/setter/SetterChain.h"
#include "record/Supplier.h"
#include "record/SupplierUtil.h"
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
class BaseSupplierSetterChain : public Myriad::SetterChain<Supplier>
{
public:

    // runtime component typedefs
    // runtime components for setter `set_supp_key`
    typedef Myriad::ConstRangeProvider< I64u, Supplier > RangeProvider01Type;
    typedef Myriad::ClusteredValueProvider< I64u, Supplier, Myriad::UniformPrFunction<I64u>, RangeProvider01Type > ValueProvider01Type;
    typedef Myriad::FieldSetter< Supplier, Myriad::RecordTraits<Supplier>::SUPP_KEY, ValueProvider01Type > SetSuppKeyType;
    // runtime components for setter `set_address`
    typedef Myriad::RandomValueProvider< Char, Supplier, Myriad::CombinedPrFunction<Char>, 0 > ValueProvider02Type;
    typedef Myriad::RandomValueProvider< I16u, Supplier, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider03Type;
    typedef Myriad::ElementWiseValueProvider< Char, Supplier, 40 > ValueProvider04Type;
    typedef Myriad::FieldSetter< Supplier, Myriad::RecordTraits<Supplier>::ADDRESS, ValueProvider04Type > SetAddressType;
    // runtime components for setter `set_nation_key`
    typedef Myriad::RandomValueProvider< I64u, Supplier, Myriad::UniformPrFunction<I64u>, 0 > ValueProvider05Type;
    typedef Myriad::FieldSetter< Supplier, Myriad::RecordTraits<Supplier>::NATION_KEY, ValueProvider05Type > SetNationKeyType;
    // runtime components for setter `set_phone_components`
    typedef Myriad::RandomValueProvider< I16u, Supplier, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider06Type;
    typedef Myriad::ConstValueProvider< I16u, Supplier > ValueProvider07Type;
    typedef Myriad::ElementWiseValueProvider< I16u, Supplier, 3 > ValueProvider08Type;
    typedef Myriad::FieldSetter< Supplier, Myriad::RecordTraits<Supplier>::PHONE_COMPONENTS, ValueProvider08Type > SetPhoneComponentsType;
    // runtime components for setter `set_acct_bal`
    typedef Myriad::RandomValueProvider< Decimal, Supplier, Myriad::UniformPrFunction<Decimal>, 0 > ValueProvider09Type;
    typedef Myriad::FieldSetter< Supplier, Myriad::RecordTraits<Supplier>::ACCT_BAL, ValueProvider09Type > SetAcctBalType;
    // runtime components for setter `set_comment`
    typedef Myriad::ConstValueProvider< String, Supplier > ValueProvider10Type;
    typedef Myriad::FieldSetter< Supplier, Myriad::RecordTraits<Supplier>::COMMENT, ValueProvider10Type > SetCommentType;

    BaseSupplierSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        Myriad::SetterChain<Supplier>(opMode, random),
        _sequenceCardinality(config.cardinality("supplier")),
        _rangeProvider01(0, config.parameter<I64u>("supplier.sequence.cardinality")),
        _valueProvider01(config.function< Myriad::UniformPrFunction<I64u> >("Pr[supplier.supp_key]"), _rangeProvider01),
        _setSuppKey(_valueProvider01),
        _valueProvider02(config.function< Myriad::CombinedPrFunction<Char> >("Pr[common.address_char]")),
        _valueProvider03(config.function< Myriad::UniformPrFunction<I16u> >("Pr[common.address_length]")),
        _valueProvider04(_valueProvider02, _valueProvider03),
        _setAddress(_valueProvider04),
        _valueProvider05(config.function< Myriad::UniformPrFunction<I64u> >("Pr[nation.nation_key]")),
        _setNationKey(_valueProvider05),
        _valueProvider06(config.function< Myriad::UniformPrFunction<I16u> >("Pr[common.phone_component]")),
        _valueProvider07(3),
        _valueProvider08(_valueProvider06, _valueProvider07),
        _setPhoneComponents(_valueProvider08),
        _valueProvider09(config.function< Myriad::UniformPrFunction<Decimal> >("Pr[supplier.acct_bal]")),
        _setAcctBal(_valueProvider09),
        _valueProvider10("temporary placeholder for a random comment, and some more extra text to until 87 chars!"),
        _setComment(_valueProvider10),
        _logger(Logger::get("supplier.setter.chain"))
    {
    }

    virtual ~BaseSupplierSetterChain()
    {
    }

    /**
     * Applies the setter chain to the given record instance.
     */
    void operator()(AutoPtr<Supplier> recordPtr) const
    {
        ensurePosition(recordPtr->genID());

        BaseSupplierSetterChain* me = const_cast<BaseSupplierSetterChain*>(this);

        // apply setter chain
        me->_setSuppKey(recordPtr, me->_random);
        me->_setAddress(recordPtr, me->_random);
        me->_setNationKey(recordPtr, me->_random);
        me->_setPhoneComponents(recordPtr, me->_random);
        me->_setAcctBal(recordPtr, me->_random);
        me->_setComment(recordPtr, me->_random);
    }

    /**
     * Predicate filter function.
     */
    virtual Myriad::Interval<I64u> filter(const Myriad::EqualityPredicate<Supplier>& predicate)
    {
        Myriad::Interval<I64u> result(0, _sequenceCardinality);

        // apply inverse setter chain
        _setSuppKey.filterRange(predicate, result);
        _setAddress.filterRange(predicate, result);
        _setNationKey.filterRange(predicate, result);
        _setPhoneComponents.filterRange(predicate, result);
        _setAcctBal.filterRange(predicate, result);
        _setComment.filterRange(predicate, result);

        return result;
    }

protected:

    // cardinality
    I64u _sequenceCardinality;

    // runtime components for setter `set_supp_key`
    RangeProvider01Type _rangeProvider01;
    ValueProvider01Type _valueProvider01;
    SetSuppKeyType _setSuppKey;

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

    // runtime components for setter `set_comment`
    ValueProvider10Type _valueProvider10;
    SetCommentType _setComment;

    // Logger instance.
    Logger& _logger;
};

} // namespace TPCHGen

#endif /* BASESUPPLIERSETTERCHAIN_H_ */

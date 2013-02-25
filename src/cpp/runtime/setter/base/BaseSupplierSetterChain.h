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

using namespace Myriad;

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

/**
 * SetterChain specialization for User.
 */
class BaseSupplierSetterChain : public SetterChain<Supplier>
{
public:

    // runtime component typedefs
    // runtime components for setter `set_supp_key`
    typedef ConstRangeProvider< I64u, Supplier > RangeProvider01Type;
    typedef ClusteredValueProvider< I64u, Supplier, UniformPrFunction<I64u>, RangeProvider01Type > ValueProvider01Type;
    typedef FieldSetter< Supplier, RecordTraits<Supplier>::SUPP_KEY, ValueProvider01Type > SetSuppKeyType;
    // runtime components for setter `set_address`
    typedef RandomValueProvider< Char, Supplier, UniformPrFunction<Char>, 0 > ValueProvider02Type;
    typedef RandomValueProvider< I16u, Supplier, UniformPrFunction<I16u>, 0 > ValueProvider03Type;
    typedef ElementWiseValueProvider< Char, Supplier, 40 > ValueProvider04Type;
    typedef FieldSetter< Supplier, RecordTraits<Supplier>::ADDRESS, ValueProvider04Type > SetAddressType;
    // runtime components for setter `set_nation_key`
    typedef RandomValueProvider< I64u, Supplier, UniformPrFunction<I64u>, 0 > ValueProvider05Type;
    typedef FieldSetter< Supplier, RecordTraits<Supplier>::NATION_KEY, ValueProvider05Type > SetNationKeyType;
    // runtime components for setter `set_phone_local_number1`
    typedef RandomValueProvider< I16u, Supplier, UniformPrFunction<I16u>, 0 > ValueProvider06Type;
    typedef FieldSetter< Supplier, RecordTraits<Supplier>::PHONE_LOCAL_NUMBER1, ValueProvider06Type > SetPhoneLocalNumber1Type;
    // runtime components for setter `set_phone_local_number2`
    typedef RandomValueProvider< I16u, Supplier, UniformPrFunction<I16u>, 0 > ValueProvider07Type;
    typedef FieldSetter< Supplier, RecordTraits<Supplier>::PHONE_LOCAL_NUMBER2, ValueProvider07Type > SetPhoneLocalNumber2Type;
    // runtime components for setter `set_phone_local_number3`
    typedef RandomValueProvider< I16u, Supplier, UniformPrFunction<I16u>, 0 > ValueProvider08Type;
    typedef FieldSetter< Supplier, RecordTraits<Supplier>::PHONE_LOCAL_NUMBER3, ValueProvider08Type > SetPhoneLocalNumber3Type;
    // runtime components for setter `set_acct_bal`
    typedef RandomValueProvider< Decimal, Supplier, UniformPrFunction<Decimal>, 0 > ValueProvider09Type;
    typedef FieldSetter< Supplier, RecordTraits<Supplier>::ACCT_BAL, ValueProvider09Type > SetAcctBalType;
    // runtime components for setter `set_comment`
    typedef ConstValueProvider< String, Supplier > ValueProvider10Type;
    typedef FieldSetter< Supplier, RecordTraits<Supplier>::COMMENT, ValueProvider10Type > SetCommentType;

    BaseSupplierSetterChain(OperationMode& opMode, RandomStream& random, GeneratorConfig& config) :
        SetterChain<Supplier>(opMode, random),
        _sequenceCardinality(config.cardinality("supplier")),
        _rangeProvider01(0, config.parameter<I64u>("supplier.sequence.cardinality")),
        _valueProvider01(config.function< UniformPrFunction<I64u> >("Pr[supplier.supp_key]"), _rangeProvider01),
        _setSuppKey(_valueProvider01),
        _valueProvider02(config.function< UniformPrFunction<Char> >("Pr[common.ascii_char]")),
        _valueProvider03(config.function< UniformPrFunction<I16u> >("Pr[supplier.address_length]")),
        _valueProvider04(_valueProvider02, _valueProvider03),
        _setAddress(_valueProvider04),
        _valueProvider05(config.function< UniformPrFunction<I64u> >("Pr[supplier.nation_key]")),
        _setNationKey(_valueProvider05),
        _valueProvider06(config.function< UniformPrFunction<I16u> >("Pr[supplier.phone_local_number]")),
        _setPhoneLocalNumber1(_valueProvider06),
        _valueProvider07(config.function< UniformPrFunction<I16u> >("Pr[supplier.phone_local_number]")),
        _setPhoneLocalNumber2(_valueProvider07),
        _valueProvider08(config.function< UniformPrFunction<I16u> >("Pr[supplier.phone_local_number]")),
        _setPhoneLocalNumber3(_valueProvider08),
        _valueProvider09(config.function< UniformPrFunction<Decimal> >("Pr[supplier.acct_bal]")),
        _setAcctBal(_valueProvider09),
        _valueProvider10("placeholder comment"),
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
        me->_setPhoneLocalNumber1(recordPtr, me->_random);
        me->_setPhoneLocalNumber2(recordPtr, me->_random);
        me->_setPhoneLocalNumber3(recordPtr, me->_random);
        me->_setAcctBal(recordPtr, me->_random);
        me->_setComment(recordPtr, me->_random);
    }

    /**
     * Predicate filter function.
     */
    virtual Interval<I64u> filter(const EqualityPredicate<Supplier>& predicate)
    {
        Interval<I64u> result(0, _sequenceCardinality);

        // apply inverse setter chain
        _setSuppKey.filterRange(predicate, result);
        _setAddress.filterRange(predicate, result);
        _setNationKey.filterRange(predicate, result);
        _setPhoneLocalNumber1.filterRange(predicate, result);
        _setPhoneLocalNumber2.filterRange(predicate, result);
        _setPhoneLocalNumber3.filterRange(predicate, result);
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

    // runtime components for setter `set_phone_local_number1`
    ValueProvider06Type _valueProvider06;
    SetPhoneLocalNumber1Type _setPhoneLocalNumber1;

    // runtime components for setter `set_phone_local_number2`
    ValueProvider07Type _valueProvider07;
    SetPhoneLocalNumber2Type _setPhoneLocalNumber2;

    // runtime components for setter `set_phone_local_number3`
    ValueProvider08Type _valueProvider08;
    SetPhoneLocalNumber3Type _setPhoneLocalNumber3;

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

// auto-generatad C++ setter chain for `lineitem`

#ifndef BASELINEITEMSETTERCHAIN_H_
#define BASELINEITEMSETTERCHAIN_H_

#include "config/GeneratorConfig.h"
#include "runtime/setter/SetterChain.h"
#include "generator/OrderGenerator.h"
#include "generator/PartGenerator.h"
#include "generator/PartSuppGenerator.h"
#include "record/Lineitem.h"
#include "record/LineitemUtil.h"
#include "runtime/provider/predicate/EqualityPredicateFieldBinder.h"
#include "runtime/provider/predicate/EqualityPredicateProvider.h"
#include "runtime/provider/reference/ClusteredReferenceProvider.h"
#include "runtime/provider/reference/RandomReferenceProvider.h"
#include "runtime/provider/value/ConstValueProvider.h"
#include "runtime/provider/value/ContextFieldValueProvider.h"
#include "runtime/provider/value/RandomValueProvider.h"
#include "runtime/setter/FieldSetter.h"
#include "runtime/setter/ReferenceSetter.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

/**
 * SetterChain specialization for User.
 */
class BaseLineitemSetterChain : public Myriad::SetterChain<Lineitem>
{
public:

    // runtime component typedefs
    // runtime components for setter `set_order`
    typedef Myriad::ContextFieldValueProvider< I32u, Order, Myriad::RecordTraits<Order>::LINEITEMS_COUNT, 0, 0 > ValueProvider01Type;
    typedef Myriad::ConstValueProvider< I32u, Lineitem > ValueProvider02Type;
    typedef Myriad::ClusteredReferenceProvider< Order, Lineitem, ValueProvider01Type, Myriad::RecordTraits<Lineitem>::LINE_NUMBER > ReferenceProvider01Type;
    typedef Myriad::ReferenceSetter< Lineitem, Myriad::RecordTraits<Lineitem>::ORDER, ReferenceProvider01Type > SetOrderType;
    // runtime components for setter `set_part_supp`
    typedef Myriad::RandomValueProvider< I64u, Lineitem, Myriad::UniformPrFunction<I64u>, 0 > ValueProvider03Type;
    typedef Myriad::EqualityPredicateFieldBinder< PartSupp, Myriad::RecordTraits<PartSupp>::GEN_ID, Lineitem, ValueProvider03Type > PredicateBinder01Type;
    typedef Myriad::EqualityPredicateProvider< PartSupp, Lineitem > PredicateProvider01Type;
    typedef Myriad::RandomReferenceProvider< PartSupp, Lineitem > ReferenceProvider02Type;
    typedef Myriad::ReferenceSetter< Lineitem, Myriad::RecordTraits<Lineitem>::PART_SUPP, ReferenceProvider02Type > SetPartSuppType;
    // runtime components for setter `set_part`
    typedef Myriad::ContextFieldValueProvider< I32u, Lineitem, Myriad::RecordTraits<Lineitem>::PART_SUPP, Myriad::RecordTraits<PartSupp>::PART_KEY, 0 > ValueProvider04Type;
    typedef Myriad::EqualityPredicateFieldBinder< Part, Myriad::RecordTraits<Part>::PART_KEY, Lineitem, ValueProvider04Type > PredicateBinder02Type;
    typedef Myriad::EqualityPredicateProvider< Part, Lineitem > PredicateProvider02Type;
    typedef Myriad::RandomReferenceProvider< Part, Lineitem > ReferenceProvider03Type;
    typedef Myriad::ReferenceSetter< Lineitem, Myriad::RecordTraits<Lineitem>::PART, ReferenceProvider03Type > SetPartType;
    // runtime components for setter `set_order_key`
    typedef Myriad::ContextFieldValueProvider< I64u, Lineitem, Myriad::RecordTraits<Lineitem>::ORDER, Myriad::RecordTraits<Order>::ORDER_KEY, 0 > ValueProvider05Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::ORDER_KEY, ValueProvider05Type > SetOrderKeyType;
    // runtime components for setter `set_part_key`
    typedef Myriad::ContextFieldValueProvider< I64u, Lineitem, Myriad::RecordTraits<Lineitem>::PART_SUPP, Myriad::RecordTraits<PartSupp>::PART_KEY, 0 > ValueProvider06Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::PART_KEY, ValueProvider06Type > SetPartKeyType;
    // runtime components for setter `set_supp_key`
    typedef Myriad::ContextFieldValueProvider< I64u, Lineitem, Myriad::RecordTraits<Lineitem>::PART_SUPP, Myriad::RecordTraits<PartSupp>::SUPP_KEY, 0 > ValueProvider07Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::SUPP_KEY, ValueProvider07Type > SetSuppKeyType;
    // runtime components for setter `set_quantity`
    typedef Myriad::RandomValueProvider< I16u, Lineitem, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider08Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::QUANTITY, ValueProvider08Type > SetQuantityType;
    // runtime components for setter `set_discount`
    typedef Myriad::RandomValueProvider< Decimal, Lineitem, Myriad::UniformPrFunction<Decimal>, 0 > ValueProvider09Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::DISCOUNT, ValueProvider09Type > SetDiscountType;
    // runtime components for setter `set_tax`
    typedef Myriad::RandomValueProvider< Decimal, Lineitem, Myriad::UniformPrFunction<Decimal>, 0 > ValueProvider10Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::TAX, ValueProvider10Type > SetTaxType;
    // runtime components for setter `set_ship_date_offset`
    typedef Myriad::RandomValueProvider< I16u, Lineitem, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider11Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::SHIP_DATE_OFFSET, ValueProvider11Type > SetShipDateOffsetType;
    // runtime components for setter `set_commit_date_offset`
    typedef Myriad::RandomValueProvider< I16u, Lineitem, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider12Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::COMMIT_DATE_OFFSET, ValueProvider12Type > SetCommitDateOffsetType;
    // runtime components for setter `set_receipt_date_offset`
    typedef Myriad::RandomValueProvider< I16u, Lineitem, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider13Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::RECEIPT_DATE_OFFSET, ValueProvider13Type > SetReceiptDateOffsetType;
    // runtime components for setter `set_return_flag`
    typedef Myriad::RandomValueProvider< Char, Lineitem, Myriad::ConditionalCombinedPrFunction<Char, Date>, Myriad::RecordTraits<Lineitem>::RECEIPT_DATE > ValueProvider14Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::RETURN_FLAG, ValueProvider14Type > SetReturnFlagType;
    // runtime components for setter `set_line_status`
    typedef Myriad::RandomValueProvider< Char, Lineitem, Myriad::ConditionalCombinedPrFunction<Char, Date>, Myriad::RecordTraits<Lineitem>::SHIP_DATE > ValueProvider15Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::LINE_STATUS, ValueProvider15Type > SetLineStatusType;
    // runtime components for setter `set_ship_instruct`
    typedef Myriad::RandomValueProvider< Enum, Lineitem, Myriad::UniformPrFunction<Enum>, 0 > ValueProvider16Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::SHIP_INSTRUCT, ValueProvider16Type > SetShipInstructType;
    // runtime components for setter `set_ship_mode`
    typedef Myriad::RandomValueProvider< Enum, Lineitem, Myriad::UniformPrFunction<Enum>, 0 > ValueProvider17Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::SHIP_MODE, ValueProvider17Type > SetShipModeType;
    // runtime components for setter `set_comment`
    typedef Myriad::ConstValueProvider< String, Lineitem > ValueProvider18Type;
    typedef Myriad::FieldSetter< Lineitem, Myriad::RecordTraits<Lineitem>::COMMENT, ValueProvider18Type > SetCommentType;

    BaseLineitemSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        Myriad::SetterChain<Lineitem>(opMode, random),
        _sequenceCardinality(config.cardinality("lineitem")),
        _valueProvider01(),
        _valueProvider02(config.parameter<I32u>("lineitem.sequence.max_lineitems_per_order")),
        _referenceProvider01(_valueProvider02, _valueProvider01, config.generatorPool().get<OrderGenerator>().inspector()),
        _setOrder(_referenceProvider01),
        _valueProvider03(config.function< Myriad::UniformPrFunction<I64u> >("Pr[lineitem.part_supp_gen_id]")),
        _predicateBinder01(_valueProvider03),
        _predicateProvider01(config.generatorPool().get<PartSuppGenerator>().recordFactory(), _predicateBinder01),
        _referenceProvider02(_predicateProvider01, config.generatorPool().get<PartSuppGenerator>().inspector()),
        _setPartSupp(_referenceProvider02),
        _valueProvider04(),
        _predicateBinder02(_valueProvider04),
        _predicateProvider02(config.generatorPool().get<PartGenerator>().recordFactory(), _predicateBinder02),
        _referenceProvider03(_predicateProvider02, config.generatorPool().get<PartGenerator>().inspector()),
        _setPart(_referenceProvider03),
        _valueProvider05(),
        _setOrderKey(_valueProvider05),
        _valueProvider06(),
        _setPartKey(_valueProvider06),
        _valueProvider07(),
        _setSuppKey(_valueProvider07),
        _valueProvider08(config.function< Myriad::UniformPrFunction<I16u> >("Pr[lineitem.quantity]")),
        _setQuantity(_valueProvider08),
        _valueProvider09(config.function< Myriad::UniformPrFunction<Decimal> >("Pr[lineitem.discount]")),
        _setDiscount(_valueProvider09),
        _valueProvider10(config.function< Myriad::UniformPrFunction<Decimal> >("Pr[lineitem.tax]")),
        _setTax(_valueProvider10),
        _valueProvider11(config.function< Myriad::UniformPrFunction<I16u> >("Pr[lineitem.ship_date_offset]")),
        _setShipDateOffset(_valueProvider11),
        _valueProvider12(config.function< Myriad::UniformPrFunction<I16u> >("Pr[lineitem.commit_date_offset]")),
        _setCommitDateOffset(_valueProvider12),
        _valueProvider13(config.function< Myriad::UniformPrFunction<I16u> >("Pr[lineitem.receipt_date_offset]")),
        _setReceiptDateOffset(_valueProvider13),
        _valueProvider14(config.function< Myriad::ConditionalCombinedPrFunction<Char, Date> >("Pr[lineitem.return_flag]")),
        _setReturnFlag(_valueProvider14),
        _valueProvider15(config.function< Myriad::ConditionalCombinedPrFunction<Char, Date> >("Pr[lineitem.line_status]")),
        _setLineStatus(_valueProvider15),
        _valueProvider16(config.function< Myriad::UniformPrFunction<Enum> >("Pr[lineitem.ship_instruct]")),
        _setShipInstruct(_valueProvider16),
        _valueProvider17(config.function< Myriad::UniformPrFunction<Enum> >("Pr[lineitem.ship_mode]")),
        _setShipMode(_valueProvider17),
        _valueProvider18("comment pholder"),
        _setComment(_valueProvider18),
        _logger(Logger::get("lineitem.setter.chain"))
    {
    }

    virtual ~BaseLineitemSetterChain()
    {
    }

    /**
     * Applies the setter chain to the given record instance.
     */
    void operator()(AutoPtr<Lineitem> recordPtr) const
    {
        ensurePosition(recordPtr->genID());

        BaseLineitemSetterChain* me = const_cast<BaseLineitemSetterChain*>(this);

        // apply setter chain
        me->_setOrder(recordPtr, me->_random);
        me->_setPartSupp(recordPtr, me->_random);
        me->_setPart(recordPtr, me->_random);
        me->_setOrderKey(recordPtr, me->_random);
        me->_setPartKey(recordPtr, me->_random);
        me->_setSuppKey(recordPtr, me->_random);
        me->_setQuantity(recordPtr, me->_random);
        me->_setDiscount(recordPtr, me->_random);
        me->_setTax(recordPtr, me->_random);
        me->_setShipDateOffset(recordPtr, me->_random);
        me->_setCommitDateOffset(recordPtr, me->_random);
        me->_setReceiptDateOffset(recordPtr, me->_random);
        me->_setReturnFlag(recordPtr, me->_random);
        me->_setLineStatus(recordPtr, me->_random);
        me->_setShipInstruct(recordPtr, me->_random);
        me->_setShipMode(recordPtr, me->_random);
        me->_setComment(recordPtr, me->_random);
    }

    /**
     * Predicate filter function.
     */
    virtual Myriad::Interval<I64u> filter(const Myriad::EqualityPredicate<Lineitem>& predicate)
    {
        Myriad::Interval<I64u> result(0, _sequenceCardinality);

        // explicitly mimic inverse setter logic for gen_id
        if (predicate.bound(Myriad::RecordTraits<Lineitem>::GEN_ID))
        {
            const AutoPtr<Lineitem>& valueHolder = predicate.valueHolder();
            result.intersect(Myriad::Interval<I64u>(valueHolder->genID(), valueHolder->genID()+1));
        }

        // apply inverse setter chain, setters are applied in the same order
        _setOrderKey.filterRange(predicate, result);
        _setPartKey.filterRange(predicate, result);
        _setSuppKey.filterRange(predicate, result);
        _setQuantity.filterRange(predicate, result);
        _setDiscount.filterRange(predicate, result);
        _setTax.filterRange(predicate, result);
        _setShipDateOffset.filterRange(predicate, result);
        _setCommitDateOffset.filterRange(predicate, result);
        _setReceiptDateOffset.filterRange(predicate, result);
        _setReturnFlag.filterRange(predicate, result);
        _setLineStatus.filterRange(predicate, result);
        _setShipInstruct.filterRange(predicate, result);
        _setShipMode.filterRange(predicate, result);
        _setComment.filterRange(predicate, result);

        return result;
    }

protected:

    // cardinality
    I64u _sequenceCardinality;

    // runtime components for setter `set_order`
    ValueProvider01Type _valueProvider01;
    ValueProvider02Type _valueProvider02;
    ReferenceProvider01Type _referenceProvider01;
    SetOrderType _setOrder;

    // runtime components for setter `set_part_supp`
    ValueProvider03Type _valueProvider03;
    PredicateBinder01Type _predicateBinder01;
    PredicateProvider01Type _predicateProvider01;
    ReferenceProvider02Type _referenceProvider02;
    SetPartSuppType _setPartSupp;

    // runtime components for setter `set_part`
    ValueProvider04Type _valueProvider04;
    PredicateBinder02Type _predicateBinder02;
    PredicateProvider02Type _predicateProvider02;
    ReferenceProvider03Type _referenceProvider03;
    SetPartType _setPart;

    // runtime components for setter `set_order_key`
    ValueProvider05Type _valueProvider05;
    SetOrderKeyType _setOrderKey;

    // runtime components for setter `set_part_key`
    ValueProvider06Type _valueProvider06;
    SetPartKeyType _setPartKey;

    // runtime components for setter `set_supp_key`
    ValueProvider07Type _valueProvider07;
    SetSuppKeyType _setSuppKey;

    // runtime components for setter `set_quantity`
    ValueProvider08Type _valueProvider08;
    SetQuantityType _setQuantity;

    // runtime components for setter `set_discount`
    ValueProvider09Type _valueProvider09;
    SetDiscountType _setDiscount;

    // runtime components for setter `set_tax`
    ValueProvider10Type _valueProvider10;
    SetTaxType _setTax;

    // runtime components for setter `set_ship_date_offset`
    ValueProvider11Type _valueProvider11;
    SetShipDateOffsetType _setShipDateOffset;

    // runtime components for setter `set_commit_date_offset`
    ValueProvider12Type _valueProvider12;
    SetCommitDateOffsetType _setCommitDateOffset;

    // runtime components for setter `set_receipt_date_offset`
    ValueProvider13Type _valueProvider13;
    SetReceiptDateOffsetType _setReceiptDateOffset;

    // runtime components for setter `set_return_flag`
    ValueProvider14Type _valueProvider14;
    SetReturnFlagType _setReturnFlag;

    // runtime components for setter `set_line_status`
    ValueProvider15Type _valueProvider15;
    SetLineStatusType _setLineStatus;

    // runtime components for setter `set_ship_instruct`
    ValueProvider16Type _valueProvider16;
    SetShipInstructType _setShipInstruct;

    // runtime components for setter `set_ship_mode`
    ValueProvider17Type _valueProvider17;
    SetShipModeType _setShipMode;

    // runtime components for setter `set_comment`
    ValueProvider18Type _valueProvider18;
    SetCommentType _setComment;

    // Logger instance.
    Logger& _logger;
};

} // namespace TPCHGen

#endif /* BASELINEITEMSETTERCHAIN_H_ */

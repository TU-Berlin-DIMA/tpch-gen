// auto-generatad C++ setter chain for `part_supp`

#ifndef BASEPARTSUPPSETTERCHAIN_H_
#define BASEPARTSUPPSETTERCHAIN_H_

#include "config/GeneratorConfig.h"
#include "runtime/setter/SetterChain.h"
#include "record/PartSupp.h"
#include "record/PartSuppUtil.h"
#include "runtime/provider/range/ConstRangeProvider.h"
#include "runtime/provider/value/ClusteredValueProvider.h"
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
class BasePartSuppSetterChain : public Myriad::SetterChain<PartSupp>
{
public:

    // runtime component typedefs
    // runtime components for setter `set_part_key`
    typedef Myriad::ConstRangeProvider< I64u, PartSupp > RangeProvider01Type;
    typedef Myriad::ClusteredValueProvider< I64u, PartSupp, Myriad::UniformPrFunction<I64u>, RangeProvider01Type > ValueProvider01Type;
    typedef Myriad::FieldSetter< PartSupp, Myriad::RecordTraits<PartSupp>::PART_KEY, ValueProvider01Type > SetPartKeyType;
    // runtime components for setter `set_supp_cardinality`
    typedef Myriad::ConstValueProvider< I64u, PartSupp > ValueProvider02Type;
    typedef Myriad::FieldSetter< PartSupp, Myriad::RecordTraits<PartSupp>::SUPP_CARDINALITY, ValueProvider02Type > SetSuppCardinalityType;
    // runtime components for setter `set_avail_qty`
    typedef Myriad::RandomValueProvider< I16u, PartSupp, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider03Type;
    typedef Myriad::FieldSetter< PartSupp, Myriad::RecordTraits<PartSupp>::AVAIL_QTY, ValueProvider03Type > SetAvailQtyType;
    // runtime components for setter `set_supply_cost`
    typedef Myriad::RandomValueProvider< Decimal, PartSupp, Myriad::UniformPrFunction<Decimal>, 0 > ValueProvider04Type;
    typedef Myriad::FieldSetter< PartSupp, Myriad::RecordTraits<PartSupp>::SUPPLY_COST, ValueProvider04Type > SetSupplyCostType;

    BasePartSuppSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        Myriad::SetterChain<PartSupp>(opMode, random),
        _sequenceCardinality(config.cardinality("part_supp")),
        _rangeProvider01(0, config.parameter<I64u>("part_supp.sequence.cardinality")),
        _valueProvider01(config.function< Myriad::UniformPrFunction<I64u> >("Pr[part.part_key]"), _rangeProvider01),
        _setPartKey(_valueProvider01),
        _valueProvider02(config.parameter<I64u>("supplier.sequence.cardinality")),
        _setSuppCardinality(_valueProvider02),
        _valueProvider03(config.function< Myriad::UniformPrFunction<I16u> >("Pr[part_supp.avail_qty]")),
        _setAvailQty(_valueProvider03),
        _valueProvider04(config.function< Myriad::UniformPrFunction<Decimal> >("Pr[part_supp.supply_cost]")),
        _setSupplyCost(_valueProvider04),
        _logger(Logger::get("part_supp.setter.chain"))
    {
    }

    virtual ~BasePartSuppSetterChain()
    {
    }

    /**
     * Applies the setter chain to the given record instance.
     */
    void operator()(AutoPtr<PartSupp> recordPtr) const
    {
        ensurePosition(recordPtr->genID());

        BasePartSuppSetterChain* me = const_cast<BasePartSuppSetterChain*>(this);

        // apply setter chain
        me->_setPartKey(recordPtr, me->_random);
        me->_setSuppCardinality(recordPtr, me->_random);
        me->_setAvailQty(recordPtr, me->_random);
        me->_setSupplyCost(recordPtr, me->_random);
    }

    /**
     * Predicate filter function.
     */
    virtual Myriad::Interval<I64u> filter(const Myriad::EqualityPredicate<PartSupp>& predicate)
    {
        Myriad::Interval<I64u> result(0, _sequenceCardinality);

        // explicitly mimic inverse setter logic for gen_id
        if (predicate.bound(Myriad::RecordTraits<PartSupp>::GEN_ID))
        {
            const AutoPtr<PartSupp>& valueHolder = predicate.valueHolder();
            result.intersect(Myriad::Interval<I64u>(valueHolder->genID(), valueHolder->genID()+1));
        }

        // apply inverse setter chain, setters are applied in the same order
        _setPartKey.filterRange(predicate, result);
        _setSuppCardinality.filterRange(predicate, result);
        _setAvailQty.filterRange(predicate, result);
        _setSupplyCost.filterRange(predicate, result);

        return result;
    }

protected:

    // cardinality
    I64u _sequenceCardinality;

    // runtime components for setter `set_part_key`
    RangeProvider01Type _rangeProvider01;
    ValueProvider01Type _valueProvider01;
    SetPartKeyType _setPartKey;

    // runtime components for setter `set_supp_cardinality`
    ValueProvider02Type _valueProvider02;
    SetSuppCardinalityType _setSuppCardinality;

    // runtime components for setter `set_avail_qty`
    ValueProvider03Type _valueProvider03;
    SetAvailQtyType _setAvailQty;

    // runtime components for setter `set_supply_cost`
    ValueProvider04Type _valueProvider04;
    SetSupplyCostType _setSupplyCost;

    // Logger instance.
    Logger& _logger;
};

} // namespace TPCHGen

#endif /* BASEPARTSUPPSETTERCHAIN_H_ */

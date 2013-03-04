// auto-generatad C++ setter chain for `region`

#ifndef BASEREGIONSETTERCHAIN_H_
#define BASEREGIONSETTERCHAIN_H_

#include "config/GeneratorConfig.h"
#include "runtime/setter/SetterChain.h"
#include "record/Region.h"
#include "record/RegionUtil.h"
#include "runtime/provider/range/ConstRangeProvider.h"
#include "runtime/provider/value/ClusteredValueProvider.h"
#include "runtime/provider/value/ConstValueProvider.h"
#include "runtime/setter/FieldSetter.h"

namespace TPCHGen {

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
// SetterChain specialization (base class)
// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~

/**
 * SetterChain specialization for User.
 */
class BaseRegionSetterChain : public Myriad::SetterChain<Region>
{
public:

    // runtime component typedefs
    // runtime components for setter `set_region_key`
    typedef Myriad::ConstRangeProvider< I64u, Region > RangeProvider01Type;
    typedef Myriad::ClusteredValueProvider< I64u, Region, Myriad::UniformPrFunction<I64u>, RangeProvider01Type > ValueProvider01Type;
    typedef Myriad::FieldSetter< Region, Myriad::RecordTraits<Region>::REGION_KEY, ValueProvider01Type > SetRegionKeyType;
    // runtime components for setter `set_name`
    typedef Myriad::ConstRangeProvider< Enum, Region > RangeProvider02Type;
    typedef Myriad::ClusteredValueProvider< Enum, Region, Myriad::UniformPrFunction<I64u>, RangeProvider02Type > ValueProvider02Type;
    typedef Myriad::FieldSetter< Region, Myriad::RecordTraits<Region>::NAME, ValueProvider02Type > SetNameType;
    // runtime components for setter `set_comment`
    typedef Myriad::ConstValueProvider< String, Region > ValueProvider03Type;
    typedef Myriad::FieldSetter< Region, Myriad::RecordTraits<Region>::COMMENT, ValueProvider03Type > SetCommentType;

    BaseRegionSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        Myriad::SetterChain<Region>(opMode, random),
        _sequenceCardinality(config.cardinality("region")),
        _rangeProvider01(0, config.parameter<I64u>("region.sequence.cardinality")),
        _valueProvider01(config.function< Myriad::UniformPrFunction<I64u> >("Pr[region.region_key]"), _rangeProvider01),
        _setRegionKey(_valueProvider01),
        _rangeProvider02(0, config.parameter<Enum>("region.sequence.cardinality")),
        _valueProvider02(config.function< Myriad::UniformPrFunction<I64u> >("Pr[region.region_key]"), _rangeProvider02),
        _setName(_valueProvider02),
        _valueProvider03("temporary placeholder for a random comment"),
        _setComment(_valueProvider03),
        _logger(Logger::get("region.setter.chain"))
    {
    }

    virtual ~BaseRegionSetterChain()
    {
    }

    /**
     * Applies the setter chain to the given record instance.
     */
    void operator()(AutoPtr<Region> recordPtr) const
    {
        ensurePosition(recordPtr->genID());

        BaseRegionSetterChain* me = const_cast<BaseRegionSetterChain*>(this);

        // apply setter chain
        me->_setRegionKey(recordPtr, me->_random);
        me->_setName(recordPtr, me->_random);
        me->_setComment(recordPtr, me->_random);
    }

    /**
     * Predicate filter function.
     */
    virtual Myriad::Interval<I64u> filter(const Myriad::EqualityPredicate<Region>& predicate)
    {
        Myriad::Interval<I64u> result(0, _sequenceCardinality);

        // explicitly mimic inverse setter logic for gen_id
        if (predicate.bound(Myriad::RecordTraits<Region>::GEN_ID))
        {
            const AutoPtr<Region>& valueHolder = predicate.valueHolder();
            result.intersect(Myriad::Interval<I64u>(valueHolder->genID(), valueHolder->genID()+1));
        }

        // apply inverse setter chain, setters are applied in the same order
        _setRegionKey.filterRange(predicate, result);
        _setName.filterRange(predicate, result);
        _setComment.filterRange(predicate, result);

        return result;
    }

protected:

    // cardinality
    I64u _sequenceCardinality;

    // runtime components for setter `set_region_key`
    RangeProvider01Type _rangeProvider01;
    ValueProvider01Type _valueProvider01;
    SetRegionKeyType _setRegionKey;

    // runtime components for setter `set_name`
    RangeProvider02Type _rangeProvider02;
    ValueProvider02Type _valueProvider02;
    SetNameType _setName;

    // runtime components for setter `set_comment`
    ValueProvider03Type _valueProvider03;
    SetCommentType _setComment;

    // Logger instance.
    Logger& _logger;
};

} // namespace TPCHGen

#endif /* BASEREGIONSETTERCHAIN_H_ */

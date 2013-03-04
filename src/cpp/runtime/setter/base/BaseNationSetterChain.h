// auto-generatad C++ setter chain for `nation`

#ifndef BASENATIONSETTERCHAIN_H_
#define BASENATIONSETTERCHAIN_H_

#include "config/GeneratorConfig.h"
#include "runtime/setter/SetterChain.h"
#include "record/Nation.h"
#include "record/NationUtil.h"
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
class BaseNationSetterChain : public Myriad::SetterChain<Nation>
{
public:

    // runtime component typedefs
    // runtime components for setter `set_nation_key`
    typedef Myriad::ConstRangeProvider< I64u, Nation > RangeProvider01Type;
    typedef Myriad::ClusteredValueProvider< I64u, Nation, Myriad::UniformPrFunction<I64u>, RangeProvider01Type > ValueProvider01Type;
    typedef Myriad::FieldSetter< Nation, Myriad::RecordTraits<Nation>::NATION_KEY, ValueProvider01Type > SetNationKeyType;
    // runtime components for setter `set_name`
    typedef Myriad::ConstRangeProvider< Enum, Nation > RangeProvider02Type;
    typedef Myriad::ClusteredValueProvider< Enum, Nation, Myriad::UniformPrFunction<I64u>, RangeProvider02Type > ValueProvider02Type;
    typedef Myriad::FieldSetter< Nation, Myriad::RecordTraits<Nation>::NAME, ValueProvider02Type > SetNameType;
    // runtime components for setter `set_region_key`
    typedef Myriad::ConstRangeProvider< Enum, Nation > RangeProvider03Type;
    typedef Myriad::ClusteredValueProvider< Enum, Nation, Myriad::UniformPrFunction<I64u>, RangeProvider03Type > ValueProvider03Type;
    typedef Myriad::FieldSetter< Nation, Myriad::RecordTraits<Nation>::REGION_KEY, ValueProvider03Type > SetRegionKeyType;
    // runtime components for setter `set_comment`
    typedef Myriad::ConstValueProvider< String, Nation > ValueProvider04Type;
    typedef Myriad::FieldSetter< Nation, Myriad::RecordTraits<Nation>::COMMENT, ValueProvider04Type > SetCommentType;

    BaseNationSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        Myriad::SetterChain<Nation>(opMode, random),
        _sequenceCardinality(config.cardinality("nation")),
        _rangeProvider01(0, config.parameter<I64u>("nation.sequence.cardinality")),
        _valueProvider01(config.function< Myriad::UniformPrFunction<I64u> >("Pr[nation.nation_key]"), _rangeProvider01),
        _setNationKey(_valueProvider01),
        _rangeProvider02(0, config.parameter<Enum>("nation.sequence.cardinality")),
        _valueProvider02(config.function< Myriad::UniformPrFunction<I64u> >("Pr[nation.nation_key]"), _rangeProvider02),
        _setName(_valueProvider02),
        _rangeProvider03(0, config.parameter<Enum>("nation.sequence.cardinality")),
        _valueProvider03(config.function< Myriad::UniformPrFunction<I64u> >("Pr[nation.nation_key]"), _rangeProvider03),
        _setRegionKey(_valueProvider03),
        _valueProvider04("temp. p-holder."),
        _setComment(_valueProvider04),
        _logger(Logger::get("nation.setter.chain"))
    {
    }

    virtual ~BaseNationSetterChain()
    {
    }

    /**
     * Applies the setter chain to the given record instance.
     */
    void operator()(AutoPtr<Nation> recordPtr) const
    {
        ensurePosition(recordPtr->genID());

        BaseNationSetterChain* me = const_cast<BaseNationSetterChain*>(this);

        // apply setter chain
        me->_setNationKey(recordPtr, me->_random);
        me->_setName(recordPtr, me->_random);
        me->_setRegionKey(recordPtr, me->_random);
        me->_setComment(recordPtr, me->_random);
    }

    /**
     * Predicate filter function.
     */
    virtual Myriad::Interval<I64u> filter(const Myriad::EqualityPredicate<Nation>& predicate)
    {
        Myriad::Interval<I64u> result(0, _sequenceCardinality);

        // explicitly mimic inverse setter logic for gen_id
        if (predicate.bound(Myriad::RecordTraits<Nation>::GEN_ID))
        {
            const AutoPtr<Nation>& valueHolder = predicate.valueHolder();
            result.intersect(Myriad::Interval<I64u>(valueHolder->genID(), valueHolder->genID()+1));
        }

        // apply inverse setter chain, setters are applied in the same order
        _setNationKey.filterRange(predicate, result);
        _setName.filterRange(predicate, result);
        _setRegionKey.filterRange(predicate, result);
        _setComment.filterRange(predicate, result);

        return result;
    }

protected:

    // cardinality
    I64u _sequenceCardinality;

    // runtime components for setter `set_nation_key`
    RangeProvider01Type _rangeProvider01;
    ValueProvider01Type _valueProvider01;
    SetNationKeyType _setNationKey;

    // runtime components for setter `set_name`
    RangeProvider02Type _rangeProvider02;
    ValueProvider02Type _valueProvider02;
    SetNameType _setName;

    // runtime components for setter `set_region_key`
    RangeProvider03Type _rangeProvider03;
    ValueProvider03Type _valueProvider03;
    SetRegionKeyType _setRegionKey;

    // runtime components for setter `set_comment`
    ValueProvider04Type _valueProvider04;
    SetCommentType _setComment;

    // Logger instance.
    Logger& _logger;
};

} // namespace TPCHGen

#endif /* BASENATIONSETTERCHAIN_H_ */

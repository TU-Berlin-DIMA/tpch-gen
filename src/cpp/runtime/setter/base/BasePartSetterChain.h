// auto-generatad C++ setter chain for `part`

#ifndef BASEPARTSETTERCHAIN_H_
#define BASEPARTSETTERCHAIN_H_

#include "config/GeneratorConfig.h"
#include "runtime/setter/SetterChain.h"
#include "record/Part.h"
#include "record/PartUtil.h"
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
class BasePartSetterChain : public Myriad::SetterChain<Part>
{
public:

    // runtime component typedefs
    // runtime components for setter `set_part_key`
    typedef Myriad::ConstRangeProvider< I64u, Part > RangeProvider01Type;
    typedef Myriad::ClusteredValueProvider< I64u, Part, Myriad::UniformPrFunction<I64u>, RangeProvider01Type > ValueProvider01Type;
    typedef Myriad::FieldSetter< Part, Myriad::RecordTraits<Part>::PART_KEY, ValueProvider01Type > SetPartKeyType;
    // runtime components for setter `set_param_M`
    typedef Myriad::RandomValueProvider< I16u, Part, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider02Type;
    typedef Myriad::FieldSetter< Part, Myriad::RecordTraits<Part>::PARAM_M, ValueProvider02Type > SetParamMType;
    // runtime components for setter `set_param_N`
    typedef Myriad::RandomValueProvider< I16u, Part, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider03Type;
    typedef Myriad::FieldSetter< Part, Myriad::RecordTraits<Part>::PARAM_N, ValueProvider03Type > SetParamNType;
    // runtime components for setter `set_name_components`
    typedef Myriad::RandomValueProvider< Enum, Part, Myriad::UniformPrFunction<Enum>, 0 > ValueProvider04Type;
    typedef Myriad::ConstValueProvider< I16u, Part > ValueProvider05Type;
    typedef Myriad::ElementWiseValueProvider< Enum, Part, 5 > ValueProvider06Type;
    typedef Myriad::FieldSetter< Part, Myriad::RecordTraits<Part>::NAME_COMPONENTS, ValueProvider06Type > SetNameComponentsType;
    // runtime components for setter `set_type`
    typedef Myriad::RandomValueProvider< Enum, Part, Myriad::UniformPrFunction<Enum>, 0 > ValueProvider07Type;
    typedef Myriad::FieldSetter< Part, Myriad::RecordTraits<Part>::TYPE, ValueProvider07Type > SetTypeType;
    // runtime components for setter `set_size`
    typedef Myriad::RandomValueProvider< I16u, Part, Myriad::UniformPrFunction<I16u>, 0 > ValueProvider08Type;
    typedef Myriad::FieldSetter< Part, Myriad::RecordTraits<Part>::SIZE, ValueProvider08Type > SetSizeType;
    // runtime components for setter `set_container`
    typedef Myriad::RandomValueProvider< Enum, Part, Myriad::UniformPrFunction<Enum>, 0 > ValueProvider09Type;
    typedef Myriad::FieldSetter< Part, Myriad::RecordTraits<Part>::CONTAINER, ValueProvider09Type > SetContainerType;
    // runtime components for setter `set_comment`
    typedef Myriad::ConstValueProvider< String, Part > ValueProvider10Type;
    typedef Myriad::FieldSetter< Part, Myriad::RecordTraits<Part>::COMMENT, ValueProvider10Type > SetCommentType;

    BasePartSetterChain(Myriad::BaseSetterChain::OperationMode& opMode, Myriad::RandomStream& random, Myriad::GeneratorConfig& config) :
        Myriad::SetterChain<Part>(opMode, random),
        _sequenceCardinality(config.cardinality("part")),
        _rangeProvider01(0, config.parameter<I64u>("part.sequence.cardinality")),
        _valueProvider01(config.function< Myriad::UniformPrFunction<I64u> >("Pr[part.part_key]"), _rangeProvider01),
        _setPartKey(_valueProvider01),
        _valueProvider02(config.function< Myriad::UniformPrFunction<I16u> >("Pr[part.param]")),
        _setParamM(_valueProvider02),
        _valueProvider03(config.function< Myriad::UniformPrFunction<I16u> >("Pr[part.param]")),
        _setParamN(_valueProvider03),
        _valueProvider04(config.function< Myriad::UniformPrFunction<Enum> >("Pr[part.name_component]")),
        _valueProvider05(5),
        _valueProvider06(_valueProvider04, _valueProvider05),
        _setNameComponents(_valueProvider06),
        _valueProvider07(config.function< Myriad::UniformPrFunction<Enum> >("Pr[part.type]")),
        _setType(_valueProvider07),
        _valueProvider08(config.function< Myriad::UniformPrFunction<I16u> >("Pr[part.size]")),
        _setSize(_valueProvider08),
        _valueProvider09(config.function< Myriad::UniformPrFunction<Enum> >("Pr[part.container]")),
        _setContainer(_valueProvider09),
        _valueProvider10("temporary placeholder for a random comment"),
        _setComment(_valueProvider10),
        _logger(Logger::get("part.setter.chain"))
    {
    }

    virtual ~BasePartSetterChain()
    {
    }

    /**
     * Applies the setter chain to the given record instance.
     */
    void operator()(AutoPtr<Part> recordPtr) const
    {
        ensurePosition(recordPtr->genID());

        BasePartSetterChain* me = const_cast<BasePartSetterChain*>(this);

        // apply setter chain
        me->_setPartKey(recordPtr, me->_random);
        me->_setParamM(recordPtr, me->_random);
        me->_setParamN(recordPtr, me->_random);
        me->_setNameComponents(recordPtr, me->_random);
        me->_setType(recordPtr, me->_random);
        me->_setSize(recordPtr, me->_random);
        me->_setContainer(recordPtr, me->_random);
        me->_setComment(recordPtr, me->_random);
    }

    /**
     * Predicate filter function.
     */
    virtual Myriad::Interval<I64u> filter(const Myriad::EqualityPredicate<Part>& predicate)
    {
        Myriad::Interval<I64u> result(0, _sequenceCardinality);

        // apply inverse setter chain
        _setPartKey.filterRange(predicate, result);
        _setParamM.filterRange(predicate, result);
        _setParamN.filterRange(predicate, result);
        _setNameComponents.filterRange(predicate, result);
        _setType.filterRange(predicate, result);
        _setSize.filterRange(predicate, result);
        _setContainer.filterRange(predicate, result);
        _setComment.filterRange(predicate, result);

        return result;
    }

protected:

    // cardinality
    I64u _sequenceCardinality;

    // runtime components for setter `set_part_key`
    RangeProvider01Type _rangeProvider01;
    ValueProvider01Type _valueProvider01;
    SetPartKeyType _setPartKey;

    // runtime components for setter `set_param_M`
    ValueProvider02Type _valueProvider02;
    SetParamMType _setParamM;

    // runtime components for setter `set_param_N`
    ValueProvider03Type _valueProvider03;
    SetParamNType _setParamN;

    // runtime components for setter `set_name_components`
    ValueProvider04Type _valueProvider04;
    ValueProvider05Type _valueProvider05;
    ValueProvider06Type _valueProvider06;
    SetNameComponentsType _setNameComponents;

    // runtime components for setter `set_type`
    ValueProvider07Type _valueProvider07;
    SetTypeType _setType;

    // runtime components for setter `set_size`
    ValueProvider08Type _valueProvider08;
    SetSizeType _setSize;

    // runtime components for setter `set_container`
    ValueProvider09Type _valueProvider09;
    SetContainerType _setContainer;

    // runtime components for setter `set_comment`
    ValueProvider10Type _valueProvider10;
    SetCommentType _setComment;

    // Logger instance.
    Logger& _logger;
};

} // namespace TPCHGen

#endif /* BASEPARTSETTERCHAIN_H_ */

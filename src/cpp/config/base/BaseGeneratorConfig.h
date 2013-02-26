// auto-generatad base generator config C++ file

#ifndef BASEGENERATORCONFIG_H_
#define BASEGENERATORCONFIG_H_

#include "config/AbstractGeneratorConfig.h"

namespace Myriad {

class BaseGeneratorConfig: public AbstractGeneratorConfig
{
public:

    BaseGeneratorConfig(GeneratorPool& generatorPool) : AbstractGeneratorConfig(generatorPool)
    {
    }

protected:

    virtual void configurePartitioning()
    {
        // TODO: this piece of auto-generating code / Config API needs to be rewritten

        // setup linear scale estimator for supplier
        setString("partitioning.supplier.base-cardinality", toString<I64u>(parameter<I64u>("supplier.sequence.base_cardinality")));
        computeLinearScalePartitioning("supplier");
        // setup linear scale estimator for part
        setString("partitioning.part.base-cardinality", toString<I64u>(parameter<I64u>("part.sequence.base_cardinality")));
        computeLinearScalePartitioning("part");
    }

    virtual void configureFunctions()
    {
        // register prototype functions
        function(new Myriad::CombinedPrFunction<Char>("Pr[common.ascii_char]", static_cast<String>(parameter<String>("ENV.config-dir") + "/distributions/ascii_char.distribution")));
        function(new Myriad::UniformPrFunction<Enum>("Pr[part.container]", 0, 40));
        function(new Myriad::UniformPrFunction<Enum>("Pr[part.name_component]", 0, 92));
        function(new Myriad::UniformPrFunction<I16u>("Pr[part.param]", 1, 6));
        function(new Myriad::UniformPrFunction<I64u>("Pr[part.part_key]", 1, static_cast<I64u>(parameter<I64u>("part.sequence.cardinality") + 1)));
        function(new Myriad::UniformPrFunction<I16u>("Pr[part.size]", 1, 51));
        function(new Myriad::UniformPrFunction<Enum>("Pr[part.type]", 0, 150));
        function(new Myriad::UniformPrFunction<Decimal>("Pr[supplier.acct_bal]", -999.99, 9999.999));
        function(new Myriad::UniformPrFunction<I16u>("Pr[supplier.address_length]", 10, 41));
        function(new Myriad::UniformPrFunction<I64u>("Pr[supplier.nation_key]", 0, 26));
        function(new Myriad::UniformPrFunction<I16u>("Pr[supplier.phone_local_number]", 100, 1000));
        function(new Myriad::UniformPrFunction<I64u>("Pr[supplier.supp_key]", 1, static_cast<I64u>(parameter<I64u>("supplier.sequence.cardinality") + 1)));
    }

    virtual void configureSets()
    {
        // bind string sets to config members with the bindStringSet method
        enumSet(new MyriadEnumSet("part.type", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/part/type.domain")));
        enumSet(new MyriadEnumSet("part.name_component", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/part/name_component.domain")));
        enumSet(new MyriadEnumSet("part.container", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/part/container.domain")));
    }
};

} // namespace Myriad

#endif /* BASEGENERATORCONFIG_H_ */

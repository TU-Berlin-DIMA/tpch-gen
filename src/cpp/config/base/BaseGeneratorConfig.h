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
        // setup linear scale estimator for part_supp
        setString("partitioning.part_supp.base-cardinality", toString<I64u>(parameter<I64u>("part_supp.sequence.base_cardinality")));
        computeLinearScalePartitioning("part_supp");
        // setup linear scale estimator for customer
        setString("partitioning.customer.base-cardinality", toString<I64u>(parameter<I64u>("customer.sequence.base_cardinality")));
        computeLinearScalePartitioning("customer");
        // setup constant estimator for nation
        setString("partitioning.nation.cardinality", toString<I64u>(parameter<I64u>("nation.sequence.cardinality")));
        computeFixedPartitioning("nation");
        // setup constant estimator for region
        setString("partitioning.region.cardinality", toString<I64u>(parameter<I64u>("region.sequence.cardinality")));
        computeFixedPartitioning("region");
    }

    virtual void configureFunctions()
    {
        // register prototype functions
        function(new Myriad::CombinedPrFunction<Char>("Pr[common.address_char]", static_cast<String>(parameter<String>("ENV.config-dir") + "/distributions/address_char.distribution")));
        function(new Myriad::UniformPrFunction<I16u>("Pr[common.address_length]", 10, 41));
        function(new Myriad::UniformPrFunction<I16u>("Pr[common.phone_component]", 100, 1000));
        function(new Myriad::UniformPrFunction<I64u>("Pr[customer.cust_key]", 1, static_cast<I64u>(parameter<I64u>("customer.sequence.cardinality") + 1)));
        function(new Myriad::UniformPrFunction<Enum>("Pr[customer.mkt_segment]", 0, 5));
        function(new Myriad::UniformPrFunction<I64u>("Pr[nation.nation_key]", 0, parameter<I64u>("nation.sequence.cardinality")));
        function(new Myriad::UniformPrFunction<Enum>("Pr[part.container]", 0, 40));
        function(new Myriad::UniformPrFunction<Enum>("Pr[part.name_component]", 0, 92));
        function(new Myriad::UniformPrFunction<I16u>("Pr[part.param]", 1, 6));
        function(new Myriad::UniformPrFunction<I64u>("Pr[part.part_key]", 1, static_cast<I64u>(parameter<I64u>("part.sequence.cardinality") + 1)));
        function(new Myriad::UniformPrFunction<I16u>("Pr[part.size]", 1, 51));
        function(new Myriad::UniformPrFunction<Enum>("Pr[part.type]", 0, 150));
        function(new Myriad::UniformPrFunction<I16u>("Pr[part_supp.avail_qty]", 1, 10000));
        function(new Myriad::UniformPrFunction<Decimal>("Pr[part_supp.supply_cost]", 0, 1000));
        function(new Myriad::UniformPrFunction<I64u>("Pr[region.region_key]", 0, parameter<I64u>("region.sequence.cardinality")));
        function(new Myriad::UniformPrFunction<Decimal>("Pr[supplier.acct_bal]", -999.99, 9999.999));
        function(new Myriad::UniformPrFunction<I64u>("Pr[supplier.supp_key]", 1, static_cast<I64u>(parameter<I64u>("supplier.sequence.cardinality") + 1)));
    }

    virtual void configureSets()
    {
        // bind string sets to config members with the bindStringSet method
        enumSet(new MyriadEnumSet("customer.mkt_segment", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/customer/mkt_segment.domain")));
        enumSet(new MyriadEnumSet("part.type", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/part/type.domain")));
        enumSet(new MyriadEnumSet("part.name_component", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/part/name_component.domain")));
        enumSet(new MyriadEnumSet("part.container", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/part/container.domain")));
        enumSet(new MyriadEnumSet("region.name", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/region/name.domain")));
        enumSet(new MyriadEnumSet("nation.region_key", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/nation/region_key.domain")));
        enumSet(new MyriadEnumSet("nation.name", static_cast<String>(parameter<String>("ENV.config-dir") + "/domains/nation/name.domain")));
    }
};

} // namespace Myriad

#endif /* BASEGENERATORCONFIG_H_ */

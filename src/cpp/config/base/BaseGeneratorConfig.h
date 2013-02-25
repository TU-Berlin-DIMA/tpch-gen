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
    }

    virtual void configureFunctions()
    {
        // register prototype functions
        function(new UniformPrFunction<Char>("Pr[common.ascii_char]", (Char)97, (Char)123));
        function(new UniformPrFunction<Decimal>("Pr[supplier.acct_bal]", -999.99, 9999.999));
        function(new UniformPrFunction<I16u>("Pr[supplier.address_length]", 10, 41));
        function(new UniformPrFunction<I64u>("Pr[supplier.nation_key]", 0, 26));
        function(new UniformPrFunction<I16u>("Pr[supplier.phone_local_number]", 100, 1000));
        function(new UniformPrFunction<I64u>("Pr[supplier.supp_key]", 1, static_cast<I64u>(parameter<I64u>("supplier.sequence.cardinality") + 1)));
    }

    virtual void configureSets()
    {
        // bind string sets to config members with the bindStringSet method
    }
};

} // namespace Myriad

#endif /* BASEGENERATORCONFIG_H_ */

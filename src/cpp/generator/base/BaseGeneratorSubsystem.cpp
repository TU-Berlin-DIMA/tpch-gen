// auto-generatad base generator config C++ file

#include "generator/base/BaseGeneratorSubsystem.h"
#include "generator/SupplierGenerator.h"
#include "generator/PartGenerator.h"
#include "generator/PartSuppGenerator.h"
#include "generator/CustomerGenerator.h"

using namespace std;
using namespace Poco;

namespace Myriad {

// the initial stage ID should always be zero
I32u AbstractSequenceGenerator::Stage::NEXT_STAGE_ID = 0;

// register the valid stages for the Myriad generator extension
AbstractSequenceGenerator::StageList initList()
{
    AbstractSequenceGenerator::StageList tmp;

    tmp.push_back(AbstractSequenceGenerator::Stage("supplier"));
    tmp.push_back(AbstractSequenceGenerator::Stage("part"));
    tmp.push_back(AbstractSequenceGenerator::Stage("part_supp"));
    tmp.push_back(AbstractSequenceGenerator::Stage("customer"));

    return tmp;
}

const AbstractSequenceGenerator::StageList AbstractSequenceGenerator::STAGES(initList());

// register the record sequence generators
void BaseGeneratorSubsystem::registerGenerators()
{
    registerGenerator<TPCHGen::SupplierGenerator>("supplier");
    registerGenerator<TPCHGen::PartGenerator>("part");
    registerGenerator<TPCHGen::PartSuppGenerator>("part_supp");
    registerGenerator<TPCHGen::CustomerGenerator>("customer");
}

} // namespace Myriad

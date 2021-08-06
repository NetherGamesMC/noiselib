#ifndef EXT_NOISELIB_LIB_GENERATOR_GROUND_SNOWYGROUNDGENERATOR_H_
#define EXT_NOISELIB_LIB_GENERATOR_GROUND_SNOWYGROUNDGENERATOR_H_

#include "GroundGenerator.h"

class SnowyGroundGenerator : public GroundGenerator {
 public:
  SnowyGroundGenerator() {
    topMaterial = SNOW;
  }
};

#endif //EXT_NOISELIB_LIB_GENERATOR_GROUND_SNOWYGROUNDGENERATOR_H_

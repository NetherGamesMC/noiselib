#ifndef EXT_NOISELIB_LIB_GENERATOR_GROUND_MYCELGROUNDGENERATOR_H_
#define EXT_NOISELIB_LIB_GENERATOR_GROUND_MYCELGROUNDGENERATOR_H_

#include "GroundGenerator.h"

class MycelGroundGenerator : public GroundGenerator {
 public:
  MycelGroundGenerator() {
    topMaterial = MYCELIUM;
  }
};

#endif //EXT_NOISELIB_LIB_GENERATOR_GROUND_MYCELGROUNDGENERATOR_H_

#ifndef EXT_NOISELIB_LIB_GENERATOR_DECORATORS_TREEDECORATOR_H_
#define EXT_NOISELIB_LIB_GENERATOR_DECORATORS_TREEDECORATOR_H_

#include <lib/generator/objects/GenericTree.h>
#include "Decorator.h"

class TreeDecorator : public Decorator {
 public:
  void SetTrees(std::vector<TreeDecoration> decorations);

  void Populate(ChunkManager &world, Random &random, int_fast32_t chunkX, int_fast32_t chunkZ) override;

  void Decorate(ChunkManager &world, Random &random, int_fast32_t chunkX, int_fast32_t chunkZ) override;
 private:
  /**
   * Returns a callback to Generate a GenericTree.
   */
  TreeObject GetRandomTree(Random random);

  std::vector<TreeDecoration> decorations_;
};

#endif //EXT_NOISELIB_LIB_GENERATOR_DECORATORS_TREEDECORATOR_H_

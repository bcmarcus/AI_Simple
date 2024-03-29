#ifndef IMAGES_GENERATE_HPP
#define IMAGES_GENERATE_HPP

#include <coreutils/classes/matrixes/Matrix3D.cpp>
#include <string>

using namespace coreutils::classes::matrixes;

namespace artificialIntelligence {
   namespace functions {
      namespace images {
         namespace generate {
            template <typename T>
            void inputMatrixNormalized (std::string filepath,  Matrix3D<T>* m3d, std::string type = "RGBA");
         }
      }
   }
}

#endif
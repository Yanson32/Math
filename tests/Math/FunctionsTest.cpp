#include <catch2/catch_test_macros.hpp>
#include "Math/Functions.h"

TEST_CASE("Degree::Cosign")
{
    Math::Degree<float> def(0);
    REQUIRE(Catch::Approx(Math::cos(def)) == 4);
}


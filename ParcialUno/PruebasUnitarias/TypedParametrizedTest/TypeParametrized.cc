#include "gtest/gtest.h"
#include "TypeParametrized.h"

typedef testing::Types<Child1, Child2> implementations;

INSTANTIATE_TYPED_TEST_CASE_P(MiTest, TypeParametrized, implementations);
#include "gtest/gtest.h"
#include "TypedParamTestFix.h"

typedef testing::Types<BubbleSort, Selection, Insertion, MergeSort, QuickSort> implementations;

INSTANTIATE_TYPED_TEST_CASE_P(SortingAlgorithms, TypedParamTestFix, implementations);

/*
LINEA DE COMPILACION
g++ -o pruebaTPT -isystem ../../../googletest/googletest/include/ TypedParamTestFix.cc ../../PruebasUnitarias/gtest_main.a -pthread -std=c++11
*/
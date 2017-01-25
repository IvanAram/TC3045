#include "gtest/gtest.h"
#include "Selection.h"
#include "Insertion.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

template<class instanceType>
class TypedTestFix: public testing::Test{
public:
	TypedTestFix(){
		srand(time(NULL));
		instance2Test = new instanceType;
	}
protected:
	Ordenamiento* instance2Test;
};

typedef testing::Types<Selection, Insertion, BubbleSort, MergeSort, QuickSort> implementations;

TYPED_TEST_CASE(TypedTestFix, implementations);

TYPED_TEST(TypedTestFix, SortingAlgorithms){
	int tmp = 5;
	this->instance2Test->ordenarMayorMenor();
	for(int i = 0; i < 5; i++) EXPECT_EQ(tmp--, this->instance2Test->getData()[i]);

	this->instance2Test->ordenarMenorMayor();
	for(int i = 0; i < 5; i++) EXPECT_EQ(i+1, this->instance2Test->getData()[i]);
}

/*
LINEA DE COMPILACION
g++ -o pruebaTT -isystem ../../../googletest/googletest/include/ TypedTestFix.cc ../../PruebasUnitarias/gtest_main.a -pthread -std=c++11
*/
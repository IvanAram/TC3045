#include "gtest/gtest.h"
#include "Selection.h"
#include "Insertion.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

template<class instanceType>
class TypedParamTestFix : public testing::Test{
public:
    TypedParamTestFix(){
        instance2Test = new instanceType;
    }
    ~TypedParamTestFix()
    { 
        delete instance2Test;
        instance2Test = NULL;
    }
protected:
    Ordenamiento* instance2Test;
};

TYPED_TEST_CASE_P(TypedParamTestFix);

TYPED_TEST_P(TypedParamTestFix, SortingAlgorithmsMayorMenor){
	int tmp = 5;
	this->instance2Test->ordenarMayorMenor();
	for(int i = 0; i < 5; i++) EXPECT_EQ(tmp--, this->instance2Test->getData()[i]);
}

TYPED_TEST_P(TypedParamTestFix, SortingAlgorithmsMenorMayor){
	this->instance2Test->ordenarMenorMayor();
	for(int i = 0; i < 5; i++) EXPECT_EQ(i+1, this->instance2Test->getData()[i]);
}

REGISTER_TYPED_TEST_CASE_P(TypedParamTestFix, SortingAlgorithmsMayorMenor, SortingAlgorithmsMenorMayor);
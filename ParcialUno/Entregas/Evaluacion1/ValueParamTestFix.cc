#include "gtest/gtest.h"
#include "Selection.h"
#include "Insertion.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

class ValueParamTestFix : public testing::TestWithParam<int>{
public:
	virtual void SetUp(){}
	virtual void TearDown(){
		delete instance2test;
		instance2test = nullptr;
	}
protected:
	Ordenamiento* instance2test;
};

TEST_P(ValueParamTestFix, SortingAlgorithmsMayorMenor){
	int cnt = GetParam();
	instance2test = new BubbleSort(GetParam());
	instance2test->ordenarMayorMenor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(cnt--, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;
	
	cnt = GetParam();
	instance2test = new Selection(GetParam());
	instance2test->ordenarMayorMenor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(cnt--, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;

	cnt = GetParam();
	instance2test = new Insertion(GetParam());
	instance2test->ordenarMayorMenor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(cnt--, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;

	cnt = GetParam();
	instance2test = new MergeSort(GetParam());
	instance2test->ordenarMayorMenor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(cnt--, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;

	cnt = GetParam();
	instance2test = new QuickSort(GetParam());
	instance2test->ordenarMayorMenor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(cnt--, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;
}

TEST_P(ValueParamTestFix, SortingAlgorithmsMenorMayor){
	instance2test = new BubbleSort(GetParam());
	instance2test->ordenarMenorMayor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(i+1, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;

	instance2test = new Selection(GetParam());
	instance2test->ordenarMenorMayor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(i+1, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;

	instance2test = new Insertion(GetParam());
	instance2test->ordenarMenorMayor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(i+1, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;

	instance2test = new MergeSort(GetParam());
	instance2test->ordenarMenorMayor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(i+1, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;

	instance2test = new QuickSort(GetParam());
	instance2test->ordenarMenorMayor();
	for(int i = 0; i < GetParam(); i++) EXPECT_EQ(i+1, instance2test->getData()[i]);
	delete instance2test;
	instance2test = nullptr;
}

INSTANTIATE_TEST_CASE_P(Sizes, ValueParamTestFix, testing::Values(2,4,6,8,10));

/*
LINEA DE COMPILACION
g++ -o pruebaVPT -isystem ../../../googletest/googletest/include/ ValueParamTestFix.cc ../../PruebasUnitarias/gtest_main.a -pthread -std=c++11
*/
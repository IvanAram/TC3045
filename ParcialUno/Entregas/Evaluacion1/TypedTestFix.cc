#include "gtest/gtest.h"
#include "Selection.h"
#include "Insertion.h"
#include "BubbleSort.h"

template<class instanceType>
class TypedTestFix: public testing::Test{
public:
	TypedTestFix(){
		instance2Test = new instanceType;
	}
protected:
	Ordenamiento* instance2Test;
};

typedef testing::Types<Selection, Insertion, BubbleSort> implementations;

TYPED_TEST_CASE(TypedTestFix, implementations);

TYPED_TEST(TypedTestFix, testName){
	int array[] = {9,7,3,5,6,8,4,1,2};
	this->instance2Test->ordenarMayorMenor(array, 9);
	for(int i = 9; i > 0; i--) EXPECT_EQ(i, array[i-1]);
	this->instance2Test->ordenarMenorMayor(array, 9);
	for(int i = 0; i < 9; i++) EXPECT_EQ(i+1, array[i]);
}

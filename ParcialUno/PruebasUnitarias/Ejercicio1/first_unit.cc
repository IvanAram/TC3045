#include "first.h"
#include "gtest/gtest.h"
////// COMPILE LINE: g++ -o prueba1 -isystem ../../../googletest/googletest/include/ first.cc first_unit.cc ../gtest_main.a -pthread

TEST(Factorial, positivos){
	ASSERT_EQ(1, factorial(1));
	ASSERT_EQ(120, factorial(5));
}

TEST(Factorial, cero){
	ASSERT_EQ(1,factorial(0));
}

TEST(Factorial, negativos){
	ASSERT_EQ(0, factorial(-1));
	ASSERT_EQ(0, factorial(-5));
}
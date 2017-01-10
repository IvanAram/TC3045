#include <iostream>
#include "first.h"

int factorial(int x){
	if(x < 0) return 0;
	return x == 0 ? 1 : x * factorial(x - 1);
}
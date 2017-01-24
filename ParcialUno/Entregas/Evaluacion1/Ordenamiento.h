#pragma once
#include <iostream>
#include <vector>

class Ordenamiento{
protected:
	void swap(int* a, int* b){
		int tmp = *a;
		a = b;
		b = &tmp;
	}
public:
	virtual void ordenarMayorMenor(int*,int) = 0;
	virtual void ordenarMenorMayor(int*,int) = 0;
};
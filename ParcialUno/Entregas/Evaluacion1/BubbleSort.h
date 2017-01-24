#pragma once
#include "Ordenamiento.h"

class BubbleSort : public Ordenamiento{
public:
	void ordenarMayorMenor(int*,int);
	void ordenarMenorMayor(int*,int);
};

void BubbleSort::ordenarMayorMenor(int* data, int size){
	bool change;
    for(int i = 0; i < size; i++){
        change = false;
        for(int j = 1; j < size-i; j++){
            if(data[j-1] < data[j]){
                swap(&data[j-1],&data[j]);
                change = true;
            }
        }
        if(!change)break;
    }
}

void BubbleSort::ordenarMenorMayor(int* data, int size){
	bool change;
    for(int i = 0; i < size; i++){
        change = false;
        for(int j = 1; j < size-i; j++){
            if(data[j-1] > data[j]){
                swap(&data[j-1], &data[j]);
                change = true;
            }
        }
        if(!change)break;
    }
}

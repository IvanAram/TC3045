#pragma once
#include "Ordenamiento.h"

class Insertion : public Ordenamiento{
public:
	void ordenarMayorMenor(int*,int);
	void ordenarMenorMayor(int*,int);
};

void Insertion::ordenarMayorMenor(int* data, int size){
	int tmp,index;
    for(int i=1;i<size;i++){
        tmp = data[i];
        index = i;
        for(int j = i-1; j >= 0; j--){
            if(data[j] < tmp){
                data[index] = data[j];
                index--;
            }
            data[index] = tmp;
        }
    }
}

void Insertion::ordenarMenorMayor(int* data, int size){
	int tmp,index;
    for(int i=1;i<size;i++){
        tmp = data[i];
        index = i;
        for(int j = i-1; j >= 0; j--){
            if(data[j] > tmp){
                data[index] = data[j];
                index--;
            }
            data[index] = tmp;
        }
    }
}

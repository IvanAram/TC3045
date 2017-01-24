#pragma once
#include "Ordenamiento.h"

class Selection : public Ordenamiento{
public:
	void ordenarMayorMenor(int*,int);
	void ordenarMenorMayor(int*,int);
};

void Selection::ordenarMayorMenor(int* data, int size){
	int selected;
    for(int i=0;i<size;i++){
        selected = i;
        for(int j = i+1; j < size; j++){
            if(data[j] > data[selected]) selected=j;
        }
        swap(&data[i],&data[selected]);
    }
}

void Selection::ordenarMenorMayor(int* data, int size){
	int selected;
    for(int i=0;i<size;i++){
        selected = i;
        for(int j = i+1; j < size; j++){
            if(data[j] < data[selected])selected=j;
        }
        swap(&data[i],&data[selected]);
    }
}

#pragma once
#include "Ordenamiento.h"

class BubbleSort : public Ordenamiento{
public:
	BubbleSort(int _size = 5) : Ordenamiento(_size) {}
	void ordenarMayorMenor();
	void ordenarMenorMayor();
};

void BubbleSort::ordenarMayorMenor(){
	bool change;
    for(int i = 0; i < size; i++){
        change = false;
        for(int j = 1; j < size-i; j++){
            if(data[j-1] < data[j]){
            	int tmp = data[j-1];
            	data[j-1] = data[j];
            	data[j] = tmp;
                change = true;
            }
        }
        if(!change)break;
    }
}

void BubbleSort::ordenarMenorMayor(){
	bool change;
    for(int i = 0; i < size; i++){
        change = false;
        for(int j = 1; j < size-i; j++){
            if(data[j-1] > data[j]){
                int tmp = data[j-1];
            	data[j-1] = data[j];
            	data[j] = tmp;
                change = true;
            }
        }
        if(!change)break;
    }
}

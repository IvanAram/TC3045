#pragma once
#include "Ordenamiento.h"

class Insertion : public Ordenamiento{
public:
	Insertion(int _size = 5) : Ordenamiento(_size) {}
	void ordenarMayorMenor();
	void ordenarMenorMayor();
};

void Insertion::ordenarMayorMenor(){
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

void Insertion::ordenarMenorMayor(){
	int tmp,index;
    for(int i = 1; i < size; i++){
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

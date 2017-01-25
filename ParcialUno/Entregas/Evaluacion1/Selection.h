#pragma once
#include "Ordenamiento.h"

class Selection : public Ordenamiento{
public:
	Selection(int _size = 5) : Ordenamiento(_size) {}
	void ordenarMayorMenor();
	void ordenarMenorMayor();
};

void Selection::ordenarMayorMenor(){
	int selected;
    for(int i=0;i<size;i++){
        selected = i;
        for(int j = i+1; j < size; j++){
            if(data[j] > data[selected]) selected=j;
        }
        int tmp = data[i];
    	data[i] = data[selected];
    	data[selected] = tmp;
    }
}

void Selection::ordenarMenorMayor(){
	int selected;
    for(int i=0;i<size;i++){
        selected = i;
        for(int j = i+1; j < size; j++){
            if(data[j] < data[selected])selected=j;
        }
		int tmp = data[i];
    	data[i] = data[selected];
    	data[selected] = tmp;    
    }
}

#pragma once
#include "Ordenamiento.h"

class MergeSort : public Ordenamiento{
public:	
	MergeSort(int _size = 5) : Ordenamiento(_size) {}
	void mergeMayormenor(int*, int, int, int);
	void mergeMenorMayor(int*, int, int, int);
	void recursionM(int*, int, int);
	void recursionm(int*, int, int);
	void ordenarMayorMenor();
	void ordenarMenorMayor();
};

void MergeSort::ordenarMayorMenor(){
	int *tmp = new int[size];
    recursionM(tmp,0,size);
    delete[] tmp;
}

void MergeSort::ordenarMenorMayor(){
	int *tmp = new int[size];
    recursionm(tmp,0,size);
    delete[] tmp;
}

void MergeSort::mergeMayormenor(int* tmp, int first, int middle, int last){
	int i = first;
    int j = middle;
    for (int tmp_index = first;tmp_index<last;tmp_index++){
        if( (i<middle) && ( j >=last || data[i] > data[j])) tmp[tmp_index] = data[i++];
        else tmp[tmp_index] = data[j++];
    }
    for(int k=first;k<last;k++) data[k]=tmp[k];
}

void MergeSort::mergeMenorMayor(int* tmp, int first, int middle, int last){
	int i = first;
    int j = middle;
    for (int tmp_index = first;tmp_index<last;tmp_index++){
        if((i < middle) && (j >= last || data[i] < data[j])) tmp[tmp_index] = data[i++];
        else tmp[tmp_index] = data[j++];
    }
    for(int k=first;k<last;k++) data[k]=tmp[k];
}

void MergeSort::recursionM(int* tmp, int first, int last){
	if(last-first > 1){
        int middle = (first+last)/2;
        recursionM(tmp,first,middle);
        recursionM(tmp,middle,last);
        mergeMayormenor(tmp,first,middle,last);
    }
}

void MergeSort::recursionm(int* tmp, int first, int last){
	if(last-first > 1){
        int middle = (first+last)/2;
        recursionm(tmp,first,middle);
        recursionm(tmp,middle,last);
        mergeMenorMayor(tmp,first,middle,last);
    }
}
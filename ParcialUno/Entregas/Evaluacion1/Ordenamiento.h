#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class Ordenamiento{
protected:
	int* data;
	int size;
	void swap(int* a, int* b){
		int tmp = *a;
		a = b;
		b = &tmp;
	}
public:
	Ordenamiento(int _size = 5) : size(_size) {
		data = new int[size];
		fill();
	}
	int* getData(){ return data; }
	virtual void ordenarMayorMenor() = 0;
	virtual void ordenarMenorMayor() = 0;
	void fill(){
		int cnt = 0;
		int tmp;
		bool repeated;
	    while(cnt != size){
	    	repeated = false;
	    	tmp = (rand() % size) + 1;
	    	for(int i = 0; i < cnt; i++){
	    		if(data[i] == tmp) repeated = true;
	    	}
	    	if(!repeated){
	    		data[cnt] = tmp;
	    		cnt++;
	    	}
	    }
	}
	void printData(){
	    for(int i=0; i<size; i++){
	        std::cout << " " << data[i];
	    }
	    std::cout << std::endl;
	}
};
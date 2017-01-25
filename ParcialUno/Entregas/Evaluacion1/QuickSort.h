#include "Ordenamiento.h"

class QuickSort : public Ordenamiento{
public:
    QuickSort(int _size = 5) : Ordenamiento(_size){}
	void ordenarMayorMenor();
	void ordenarMenorMayor();
	void recursionM(int, int);
	void recursionm(int, int);
	int hoareM(int, int);
	int hoarem(int, int);
};

void QuickSort::ordenarMayorMenor(){
	recursionM(0, size-1);
}

void QuickSort::ordenarMenorMayor(){
	recursionm(0, size-1);
}

void QuickSort::recursionM(int first, int last){
	if(first < last){
        int pivot = hoareM(first,last);
        recursionM(first,pivot-1);
        recursionM(pivot+1,last);
    }
}

void QuickSort::recursionm(int first, int last){
	if(first < last){
        int pivot = hoarem(first,last);
        recursionm(first,pivot-1);
        recursionm(pivot+1,last);
    }
}

int QuickSort::hoareM(int start, int end){
	int pivot = start;
    int i = start;
    int j = end+1;
    while(i < j){
        do{
            j--;
        } while(data[j] < data[pivot]);
        do{
            i++;
        } while(data[i] > data[pivot] && i <= end);
        
        if(i < j){
        	int tmp = data[i];
        	data[i] = data[j];
        	data[j] = tmp;
        }
        else{
            int tmp = data[pivot];
        	data[pivot] = data[j];
        	data[j] = tmp;
            return j;
        }
    }
}

int QuickSort::hoarem(int start, int end){
	int pivot = start;
    int i = start;
    int j = end+1;
    while(i < j){
        do{
            j--;
        } while(data[j] > data[pivot]);
        do{
            i++;
        } while(data[i] < data[pivot] && i <= end);
        
        if(i < j){
        	int tmp = data[i];
        	data[i] = data[j];
        	data[j] = tmp;
        }
        else{
            int tmp = data[pivot];
        	data[pivot] = data[j];
        	data[j] = tmp;
            return j;
        }
    }
}

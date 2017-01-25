#include "BubbleSort.h"

int main(){
	srand(time(NULL));
	BubbleSort a(5);
	a.print_data();
	a.ordenarMayorMenor();
	a.print_data();
}
#include <iostream>
#include <stdlib.h>

bool isBisiesto(int a){
	if(a % 4 == 0){
		if(a % 100 == 0) return false;
		else return true;
	}
	else return false;
}

int main(int argc, char **argv){
	if(argc == 2){
		if(isBisiesto(atoi(argv[1]))) std::cout << "True" << std::endl;
		else std::cout << "False" << std::endl;
	}
	else{
		int anio;
		std::cin >> anio;
		if(isBisiesto(anio)) std::cout << "True" << std::endl;
		else std::cout << "False" << std::endl;
	}
}
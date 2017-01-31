#include <stdio.h>
#include "Cesar.h"

int main(){
	Cifrado* cesar = new Cesar();
	std::cout << cesar->descifrar("f`qcdm") << std::endl;
}
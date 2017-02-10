#include <stdio.h>
#include <cstring>

int auth(char* p){
	int res = 0;
	char passwd[8];
	strcpy(passwd,p);
	if(strcmp(passwd,"12345678") == 0) res = 1;
	return res;
}

int main(int argc, char** argv){
	auth(argv[1]) ? printf("Granted\n") : printf("Go away\n");
}

//Debugger
// g++ -g simpleBuffOv2.cpp -o prueba
// gdb -q prueba
// break #  //this adds breakpoints
// run
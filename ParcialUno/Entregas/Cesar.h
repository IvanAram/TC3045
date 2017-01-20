#pragma once
#include "Cifrado.h"
#include <algorithm>

class Cesar : public Cifrado{
public:
	Cesar(){
		leerDiccionario();
	}
	void leerDiccionario();
	std::string descifrar(std::string);
	int getConstant(std::string);
};

int Cesar::getConstant(std::string word){
	int i = 0;
	while(true){
		for(int j = 0; j < dict.size(); j++){
			if(dict[j] == word) return i;
		}
		for(int j = 0; j < word.length(); j++) word[j] -= 1;
		i++;
		// 32 for upper to lower case
	}
}

std::string Cesar::descifrar(std::string word){
	int clave = getConstant(word);
	for(int i = 0; i < word.length(); i++) word[i] -= clave;
	return word;
}

void Cesar::leerDiccionario(){
	std::ifstream in("diccionario.txt");
	std::string row;
	if(in.is_open()){
		while(getline(in,row)) dict.push_back(row);
	}
	in.close();
}
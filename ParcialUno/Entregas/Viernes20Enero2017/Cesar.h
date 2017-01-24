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
	while(i < dict.size()){
		for(int j = 0; j < dict.size(); j++){
			if(dict[j] == word) return i;
		}
		for(int j = 0; j < word.length(); j++) word[j] -= 1;
		i++;
	}
	return -1;
}

std::string Cesar::descifrar(std::string word){
	// if((int clave = getConstant(word)) == -1) return "Error";
	int clave = getConstant(word);
	if(clave == -1) return "Error";
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
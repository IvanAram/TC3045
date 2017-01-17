#include "Cifrado.h"
#include <algorithm>

class Cesar : public Cifrado{
public:
	Cesar(){
		//leerDiccionario();
		dict.push_back("HOLASD");
		dict.push_back("SFFJSA");
		dict.push_back("GARDEN");
	}
	void leerDiccionario();
	std::string descifrar(std::string);
	int getConstant(std::string);
};

int Cesar::getConstant(std::string word){
	int i = 0;
	while(true){
		for(int j = 0; j < word.length(); j++) word[j] -= 1;
		i++;
		std::cout << word << std::endl;
		for(int j = 0; j < dict.size(); j++)
			if(dict[j] == word) return i;
	}
}

std::string Cesar::descifrar(std::string word){
	int clave = getConstant(word);
	for(int i = 0; i < word.length(); i++){
		word[i] -= clave;
	}
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
#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Cifrado{
protected:
	std::vector<std::string> dict;
public:
	virtual void leerDiccionario(){}
	virtual std::string descifrar(std::string) = 0;
};


#include <iostream>
#include <vector>

class Almacen{
private:
	std::vector<int> almacen;
public:
	Almacen();
	Almacen(int);
	int capacity();
	void addBegin(int);
	void addEnd(int);
	void deletee(int);
	bool isEmpty();
	int size();
};

Almacen::Almacen(){
	almacen.reserve(10);
}

Almacen::Almacen(int n){
	almacen.reserve(n);
}

int Almacen::capacity(){
	return almacen.capacity();
}

void Almacen::addBegin(int item){
	almacen.insert(almacen.begin(), item);
}

void Almacen::addEnd(int item){
	almacen.push_back(item);
}

void Almacen::deletee(int idx){
	if(idx >= 0 && idx < almacen.size()){
		almacen.erase(almacen.begin() + idx);
	}
}

bool Almacen::isEmpty(){
	return (almacen.size() == 0);
}

int Almacen::size(){
	return almacen.size();
}
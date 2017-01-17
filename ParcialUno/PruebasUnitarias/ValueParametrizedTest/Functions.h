template <class T>
bool isEven(T value){
	return value % 2 == 0 ? true : false;
}

template <class T>
bool isOdd(T value){
	return !isEven(value);
}
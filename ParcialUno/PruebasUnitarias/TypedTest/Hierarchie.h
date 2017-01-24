#include <iostream>
using namespace std;

class Base{
public:
  virtual int doSomething() = 0;
};

class Child1: public Base{
public:
  int doSomething(){
    cout << "I'm Child 1";
    return 1;
  }
};

class Child2: public Base{
public:
  int doSomething(){
    cout << "I'm Child 2";
    return 1;
  }
};

class Child3: public Base{
public:
  int value;
  Child3(int value){
    this->value = value;
  }
  int doSomething(){
    cout << "I am child 3 with value " << value << endl;
    return 1;
  }
};

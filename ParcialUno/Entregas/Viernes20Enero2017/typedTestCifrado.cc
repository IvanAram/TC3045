#include "gtest/gtest.h"
#include "Cesar.h"
#include "Vinegere.h"

template <class S>
class FixTyped: public testing::Test{
public:
  FixTyped(){
    instance2Test = new S;
  }
protected:
  Cifrado* instance2Test;
};

typedef testing::Types<Cesar, Vinegere> implementations;

TYPED_TEST_CASE(FixTyped, implementations);

TYPED_TEST(FixTyped, testName){
  EXPECT_EQ("garden", this->instance2Test->descifrar("f`qcdm"));
}

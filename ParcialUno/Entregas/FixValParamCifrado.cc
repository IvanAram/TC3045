#include "gtest/gtest.h"
#include "Cesar.h"
#include "Vinegere.h"

class FixValParamCifrado : public testing::TestWithParam<std::string>{
protected:
	Cifrado* testInstance;
public:
	FixValParamCifrado(){
		testInstance = new Cesar();
	}
	virtual void SetUp(){}
	virtual void TearDown(){}
};

TEST_P(FixValParamCifrado, Cesar){
	EXPECT_EQ("garden", testInstance->descifrar(GetParam()));
	EXPECT_EQ("nasa", testInstance->descifrar(GetParam()));
	EXPECT_EQ("ocho", testInstance->descifrar(GetParam()));
}

INSTANTIATE_TEST_CASE_P(CesarTest, FixValParamCifrado, testing::Values("f`qcdm","m`r`","nbgn"););
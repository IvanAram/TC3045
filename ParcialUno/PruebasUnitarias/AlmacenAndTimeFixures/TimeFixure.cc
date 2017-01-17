#include "gtest/gtest.h"
#include <ctime>

class TimeFixure : public testing::Test {
private:
	time_t start;
public:
	virtual void SetUp(){
		start = time(0);
	}
	virtual void TearDown(){
		EXPECT_TRUE((time(0) - start) < 10) << "Tardo demasiado tiempo.";
	}
};
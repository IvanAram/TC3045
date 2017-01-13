#include "gtest/gtest.h"
#include "Almacen.h"
#include "TimeFixure.cc"

class AlmacenFixures : public TimeFixure {
public:
	static Almacen* al;

	virtual void SetUp(){
		TimeFixure::SetUp();
		al->addBegin(1);
	}
	virtual void TearDown(){
		TimeFixure::TearDown();
	}

	static void SetUpTestCase(){
		al = new Almacen();
	}
	static void TearDownTestCase(){
		delete al;
		al = nullptr;
	}
};

Almacen* AlmacenFixures::al = nullptr;

TEST_F(AlmacenFixures, Constructor){ // ADDING 1 ELEMENT TO THE WAREHOUSE BECAUSE OF THE FUNCTION SET UP
	ASSERT_EQ(10, al->capacity());
	delete al;
	al = new Almacen(11);
	ASSERT_EQ(11, al->capacity());
}

TEST_F(AlmacenFixures, Add){ // ADDING 1 ELEMENT TO THE WAREHOUSE BECAUSE OF THE FUNCTION SET UP
	al->addBegin(5);
	ASSERT_EQ(2, al->size());
	//sleep(11); //USE THIS TO CHECK THE TIME FIXURE
	al->addEnd(10);
	ASSERT_EQ(3, al->size());
}

TEST_F(AlmacenFixures, Delete){ // ADDING 1 ELEMENT TO THE WAREHOUSE BECAUSE OF THE FUNCTION SET UP
	al->deletee(0);
	ASSERT_EQ(3, al->size());
}
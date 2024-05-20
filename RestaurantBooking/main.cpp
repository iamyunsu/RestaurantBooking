#include "gmock/gmock.h"
#include "gtest/gtest.h"

int main() {
	testing::InitGoogleMock();
	RUN_ALL_TESTS(); // 테스트 함수를 찾아서 실행 
}
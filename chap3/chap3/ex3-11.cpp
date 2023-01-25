#include <iostream>
using namespace std;

//P.140 ex 3-11 헤더 파일과 cpp 파일로 분리하기

#include "Calculator.h"
//#include "Adder.h"

int main() {
	Calculator calc;
	calc.run();
}
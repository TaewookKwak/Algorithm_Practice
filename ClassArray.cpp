#include <iostream>
#include "CArr.h"

int main()
{
	// 클라스
	// 객체지향 언어 특징
	// 1. 캡슐화
	// 2. 상속
	// 3. 다향성
	// 4. 추상화
	CArr classArray;
	classArray.push_back(10);
	classArray.push_back(10);
	classArray.push_back(10);
	classArray.push_back(10);
	classArray.push_back(20);
	int ArrayData = classArray[3];
	std::cout << ArrayData;
	return 0;
}
#include <iostream>

// forward declaration (전방 선언)		
void f2();

void f1()
{
	f2();		// 순서 차이로 전방 선언을 안할 시, 작동 X
}

void f2()
{

}



class MyClass
{
	void f3()
	{
		f4();
	}

	void f4()
	{

	}
};					// class 전체가 묶여서 하나의 선언 = 순서 상관 X


#include <iostream>

// forward declaration (���� ����)		
void f2();

void f1()
{
	f2();		// ���� ���̷� ���� ������ ���� ��, �۵� X
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
};					// class ��ü�� ������ �ϳ��� ���� = ���� ��� X


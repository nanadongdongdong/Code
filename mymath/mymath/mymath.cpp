//#include "stdafx.h"  Ĭ�ϾͰ����ˡ�stdafx.h���ɣ����Բ�����дһ��
#include "mymath.h"

namespace shun
{
	float pi = 3.1415;//����
	int getMax(int& a, int& b)//����
	{
		return a > b ? a: b;
	}
	int Cmath::add(int a, int b)
	{
		return a + b;
	}

	//������ʽ�����෽�� Project_UseDllObvious
	int add_Interface(int& a, int& b)
	{
		Cmath cm;
		return cm.add(a, b);
	}
}
//#include "stdafx.h"  默认就包含了“stdafx.h”吧，所以不必再写一次
#include "mymath.h"

namespace shun
{
	float pi = 3.1415;//变量
	int getMax(int& a, int& b)//函数
	{
		return a > b ? a: b;
	}
	int Cmath::add(int a, int b)
	{
		return a + b;
	}

	//用于显式调用类方法 Project_UseDllObvious
	int add_Interface(int& a, int& b)
	{
		Cmath cm;
		return cm.add(a, b);
	}
}
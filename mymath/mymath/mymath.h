#pragma once

/***************************/
/****功能：编写DLL项目****/
/**************************/
#ifdef MATH_EXPORTS
#define MATH_API __declspec(dllexport)//作为提供者
#else
#define MATH_API __declspec(dllimport)//作为使用者
#endif // MATH_EXPOPRTS

namespace shun
{
	class MATH_API Cmath //类
	{
	public:
		int add(int a, int b);
	};
	extern "C" MATH_API float pi;//变量
	extern "C" MATH_API int getMax(int&, int&);//函数


	//用于显式调用类方法 Project_UseDllObvious
	extern "C" MATH_API int add_Interface(int&, int&);
 }

//生成错误解决办法：取消预编译头： 菜单栏，项目 ——【项目名称】属性 —— 配置属性 —— c/c++  —— 预编译头   把使用改成 不使用预编译头即可：...
//不是有效的win32:进入解决方案管理界面，从菜单栏的 “生成” -> “清除解决方案”，再“重新生成解决方案” 即可正常运行。
//然后生成解决方案，编译成功后可以在debug文件夹下发现math.dll和math.lib文件。至此，我们已经成功创建一个dll项目了。

/*我们知道，extern可以置于变量或者函数前，以标示变量或者函数的定义在别的文件中，提示编译器遇到此变量和函数时在其他模块中寻找其定义。
C++语言在编译的时候为了解决函数的多态问题，会将函数名和参数联合起来生成一个中间的函数名称。
比如：

void foo( int x, int y );

该函数被C编译器编译后在符号库中的名字为_foo，而C++编译器则会产生像_foo_int_int之类的名字（不同的编译器可能生成的名字不同）。

所以我们可以在函数前使用extern "C"来告诉编译器要采用c编译的方式，而不是c++编译的方式。*/

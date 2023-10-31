/*隐式调用三要素，.h文件 ，.dll文件，.lib文件，缺一不可。*/
/*项目下面的引用，勾选mymath项目*/
/********项目->属性->配置属性->VC++目录->包含目录->添加mymath.h所在的目录*****/
/*项目和dll项目在同一个解决方案*/

#include <iostream>
#include "mymath.h"

using namespace std;

int main(char argc, char** argv)
{
	int a = 1, b = 2;
	//类的使用
	shun::Cmath cm;
	cout << cm.add(1, 2) << endl;
	//变量
	cout << shun::pi << endl;
	//函数
	cout << shun::getMax(a, b);
	getchar();
	return 0;


}
//右键-》调试-》运行后调用dll项目了

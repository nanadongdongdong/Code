/*��ʽ������Ҫ�أ�.h�ļ� ��.dll�ļ���.lib�ļ���ȱһ���ɡ�*/
/*��Ŀ��������ã���ѡmymath��Ŀ*/
/********��Ŀ->����->��������->VC++Ŀ¼->����Ŀ¼->���mymath.h���ڵ�Ŀ¼*****/
/*��Ŀ��dll��Ŀ��ͬһ���������*/

#include <iostream>
#include "mymath.h"

using namespace std;

int main(char argc, char** argv)
{
	int a = 1, b = 2;
	//���ʹ��
	shun::Cmath cm;
	cout << cm.add(1, 2) << endl;
	//����
	cout << shun::pi << endl;
	//����
	cout << shun::getMax(a, b);
	getchar();
	return 0;


}
//�Ҽ�-������-�����к����dll��Ŀ��

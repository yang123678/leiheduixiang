#include<iostream>
using namespace std;

class C1
{
	int m_A;//Ĭ��Ȩ�ޣ�˽��
};

struct C2
{
	int m_A;//Ĭ��Ȩ��,����
};

int main()
{
	//structĬ�Ϲ���Ȩ��
	//classĬ��˽��Ȩ��
	C1 c1;
	//c1.m_A = 100;

	C2 c2;
	c2.m_A = 100;


	system("pause");
	return 0;
}
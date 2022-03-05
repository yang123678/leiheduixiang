#include<iostream>
using namespace std;

class C1
{
	int m_A;//默认权限，私有
};

struct C2
{
	int m_A;//默认权限,公共
};

int main()
{
	//struct默认公共权限
	//class默认私有权限
	C1 c1;
	//c1.m_A = 100;

	C2 c2;
	c2.m_A = 100;


	system("pause");
	return 0;
}
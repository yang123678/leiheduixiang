#include<iostream>
using namespace std;

const double PI = 3.14;

//���һ���࣬��Բ���ܳ�
class Circle
{
	//����Ȩ��
	// ����Ȩ��
public:
	//����
	int m_r;
	//��Ϊ
	double zhouchang()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//ͨ���ഴ������������,ʵ���������

	Circle c1;

	//�������ֵ
	
	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��" << c1.zhouchang() << endl;

	system("pause");
	return 0;
}
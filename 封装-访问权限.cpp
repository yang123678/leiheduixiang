#include<iostream>
using namespace std;

//����Ȩ��
//����Ȩ�� public  ��Ա���ڿ��Է��ʣ�����Ҳ���Է���
//����Ȩ�� protected  ��Ա���ڿ��Է��ʣ����ⲻ���Է���  ����Ҳ���Է��ʸ����еı�������
//˽��Ȩ�� private  ��Ա���ڿ��Է��ʣ����ⲻ���Է���  ���಻���Է��ʸ����е�˽������

class Person
{
public:
	string m_Name;

protected:
	string m_Car;

private:
	string m_Password;

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = "123456";
	}

};


int main()
{
	//ʵ���������
	Person p1;
	p1.m_Name = "����";



	system("pause");
	return 0;
}
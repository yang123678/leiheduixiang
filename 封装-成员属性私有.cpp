#include<iostream>
using namespace std;

//��Ա��������Ϊ˽�У������Լ����ƶ�дȨ�ޣ�������ݵ���Ч��

class Person
{
public:
	void setm_name(string name)
	{
		m_name = name;
	}

	string getm_name()
	{
		return m_name;
	}



private:
	string m_name;//�ɶ���д
	int m_age;//ֻ��
	string m_lover;//ֻд
};


int main()
{
	Person p;
	



	system("pause");
	return 0;
}
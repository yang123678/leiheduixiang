#include<iostream>
using namespace std;

//成员属性设置为私有，可以自己控制读写权限，检测数据的有效性

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
	string m_name;//可读可写
	int m_age;//只读
	string m_lover;//只写
};


int main()
{
	Person p;
	



	system("pause");
	return 0;
}
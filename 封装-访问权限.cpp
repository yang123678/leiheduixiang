#include<iostream>
using namespace std;

//访问权限
//公共权限 public  成员类内可以访问，类外也可以访问
//保护权限 protected  成员类内可以访问，类外不可以访问  子类也可以访问父类中的保护内容
//私有权限 private  成员类内可以访问，类外不可以访问  子类不可以访问父类中的私有内容

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
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = "123456";
	}

};


int main()
{
	//实例化类对象
	Person p1;
	p1.m_Name = "李四";



	system("pause");
	return 0;
}
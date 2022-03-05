#include<iostream>
using namespace std;

const double PI = 3.14;

//设计一个类，求圆的周长
class Circle
{
	//访问权限
	// 公共权限
public:
	//属性
	int m_r;
	//行为
	double zhouchang()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//通过类创建具体的类对象,实例化类对象

	Circle c1;

	//给类对象赋值
	
	c1.m_r = 10;

	cout << "圆的周长为：" << c1.zhouchang() << endl;

	system("pause");
	return 0;
}
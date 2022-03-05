#include<iostream>
using namespace std;

class Student
{
public:

	//类中的属性和行为统一称为成员，
	//属性称为成员属性 成员变量，
	//行为称为成员函数 成员方法

	string name;
	int id;

	void fuzhi()
	{
		cout << "请输入姓名：" << endl;
		string nam;
		cin >> nam;
		name = nam;
		cout << "请输入学号：" << endl;
		int num;
		cin >> num;
		id = num;
	}

	void show()
	{
		cout << "姓名：" << name<<"\t";
		cout << "学号：" << id << endl;
	}
};

int main()
{
	Student stu;
	
	stu.fuzhi();
	stu.show();

	system("pause");
	return 0;
}
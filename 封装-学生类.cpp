#include<iostream>
using namespace std;

class Student
{
public:

	//���е����Ժ���Ϊͳһ��Ϊ��Ա��
	//���Գ�Ϊ��Ա���� ��Ա������
	//��Ϊ��Ϊ��Ա���� ��Ա����

	string name;
	int id;

	void fuzhi()
	{
		cout << "������������" << endl;
		string nam;
		cin >> nam;
		name = nam;
		cout << "������ѧ�ţ�" << endl;
		int num;
		cin >> num;
		id = num;
	}

	void show()
	{
		cout << "������" << name<<"\t";
		cout << "ѧ�ţ�" << id << endl;
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
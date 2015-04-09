#include<iostream>
#include<string>

using namespace std;

class Stude{
private:
	int no;
	string name;
	float deg;
	static int num;
	static int sum;
public:

	Stude(int no,string name,float deg);
	void disp()
	{
		cout<<"the no is: "<<no<<endl;
		cout<<"the name is: "<<name<<endl;
		cout<<"the deg is: "<<deg<<endl;
		cout<<"the sum is: "<<sum<<endl;
		cout<<"the num is: "<<num<<endl;
	}
	void avg()
	{
		cout<<"the average number is: "<<sum/num<<endl;
	}
};
int Stude::sum=0;
int Stude::num=0;
Stude::Stude(int no,string name,float deg)
{
	this->no=no;
	this->name=name;
	this->deg=deg;
	num++;
	sum=sum+deg;
}
void main(void)
{
	Stude stu1(1,"han",88);
	Stude stu[]={Stude(2,"li",99),Stude(3,"xx",77),Stude(4,"li",89)};
	stu[1].disp();
	cout<<endl;
	stu1.disp();
	stu1.avg();
}

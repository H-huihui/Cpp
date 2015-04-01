#include<iostream.h>
using std::string;

class Stud
{
	private:
    string name;
	int no;
	int deg;
	static int sum,num;
	public:
	Stud(string name,int no,int deg){
		this->name=name;
		this->no=no;
		this->deg=deg;
		num=num+1;
		sum=sum+deg;
	}
	void disp(){
		cout<<"学生的名字是:"<<name<<endl;
		cout<<"学生的学号是："<<no<<endl;
		cout<<"学生的成绩是："<<deg<<endl;
		cout<<"总学生数是："<<num<<endl;
		cout<<"学生的总成绩是："<<sum<<endl;
	}
	static void avg(){
		cout<<"学生的平均成绩是： "<<sum/num<<endl;
		
	}
		
};
int Stud::sum=0;
int Stud::num=0;
int main(void)
{
	Stud s1("韩正辉",1,90);
	s1.disp();
	s1.avg();
	Stud s2("李鑫磊",2,90);
	s2.disp();
	Stud s3("乔硕",3,20);
	s3.disp();
	Stud s4("聂伟",4,99);
	s4.disp();
	s3.avg();
	s2.avg();
	s1.avg();
	s4.avg();
	Stud s[]={Stud("han",5,100),Stud("li",6,99),Stud("dong",7,1000),Stud("xxx",8,100)};
	s1.disp();
}

#include<iostream.h>
#include"empfunc.cpp"

int employee::employeeNo=1000;
float employee::accumPay=0.0;
float static accumsal=0.0;
void main()
{
	
	cout<<"     编号    姓名          "<<endl;
	
    cout<<"-------------------------------"<<endl;

	technicion t;
	manager m;
	salesman s;
	salesmanager sm;
/*
	employee *p;
	p=&t;
	p->pay();
	p->display();

	p=&m;
	p->pay();
	p->display();

	p=&s;
	p->pay();
	p->display();
*/
	employee *p[3] = {&t, &m, &s, &sm};

	for(int i=0; i<4; i++)
	{   p[i] -> pay();
		p[i] -> display();
	}
    cout<<"-------------------------------"<<endl;
	cout<<"         公司当月工资总额："<<employee::accumPay;
}

	

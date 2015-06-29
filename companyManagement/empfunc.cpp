#include<iostream.h>
#include"employee.h"
//---------employee------------
employee::employee()
{
	cout<<"请输入员工的姓名：";
	cin>>name;
	employeeNo++;
    empNo= employeeNo;
}
//---------technicion----------
technicion::technicion()
{
    cout<<"请输入技术人员的工作时间: ";
	cin>>workHours;
}

void technicion::pay()
{
	salary = workHours * 100;
	accumPay += salary;
}

void technicion::display()
{
	cout<<"  "<<empNo<<"  "<<name[8]<<"  "<<salary<<endl;
}
//---------manager--------------
manager::manager()
{
	cout<<"请输入经理的等级: ";
	cin>>levels;
};

void manager::pay()
{
    salary = (levels-1)*2000+5000;
	accumPay += salary;
}

void manager::display()
{
	cout<<"  "<<empNo<<"  "<<name[8]<<"  "<<salary<<endl;
}

//-----------salesman-----------

salesman::salesman()
{
    cout<<"请输入月销售额: ";
	cin>>sale;
}

void salesman::pay()
{
	salary = sale*0.06;
	accumPay += salary;
	accumsal += salary;
}

void salesman::display();
{
	cout<<"  "<<empNo<<"  "<<name[8]<<"  "<<salary<<endl;
}

//-----------salesmanager---------

salesmanager::salesmanager()
{
	cout<<"请输入月销售额:";
	cin>>sale;
	cout<<"请输入经理等级";
	cin>>levles;
}

void pay()
{
	salary = ((levels-1)*2000+3000)+0.04*(sale+accumsal);
	accumPay += salary;
}

void display()
{
	cout<<"  "<<empNo<<"  "<<name[8]<<"  "<<salary<<endl;
}

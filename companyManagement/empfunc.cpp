#include<iostream.h>
#include"employee.h"
//---------employee------------
employee::employee()
{
	cout<<"������Ա����������";
	cin>>name;
	employeeNo++;
    empNo= employeeNo;
}
//---------technicion----------
technicion::technicion()
{
    cout<<"�����뼼����Ա�Ĺ���ʱ��: ";
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
	cout<<"�����뾭��ĵȼ�: ";
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
    cout<<"�����������۶�: ";
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
	cout<<"�����������۶�:";
	cin>>sale;
	cout<<"�����뾭��ȼ�";
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

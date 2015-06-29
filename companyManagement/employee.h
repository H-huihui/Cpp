#include<iostream.h>
class employee
{
  protected:
	int empNo;
	char name[8];
	float salary;
	
  public:
	static int employeeNo;
  	static float accumPay;	
	employee();
	virtual void pay()=0;
	virtual void display()=0;
};

class technicion: public employee
{
  private:
	int workHours;
  public:
	technicion();
	void pay();
	void display();
};

class manager: public employee
{
private:
	int levels;
public:
	manager();
	void pay();
	void display();
};

class salesman: public employee
{
private:
	float sale;
public:
	float static accumsal;
	salesman();
	void pay();
	void display();
};


class salesmanager: public salesman, public manager
{
private:
	int levles;
	float sale;
public:
	salesmanager();
	void pay();
	void display();

};
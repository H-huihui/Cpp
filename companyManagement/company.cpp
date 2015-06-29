#include<iostream>
#include<String>
using namespace std;

class employee{
	protected:
	int individualEmpNo;
	string name;
	float salary;
	public:
	static int employeeNo;
	static float accumPay;
	employee();
	virtual void pay()=0;
	virtual void displayStatus()=0;
};

class technician:public employee{
	protected:
	float hourlyRate;
	int workHours;
	public:
	technician(string name,int workHours){
		hourlyRate=100;
		individualEmpNo=employeeNo;
		employeeNo++;
		this->workHours=workHours;
		this->name=name;
		
		
	}
	void pay(){
		salary=workHours*hourlyRate;
		accumPay=accumPay+salary;
	}
	void displayStatus(){
		cout<<"  "<<"technician"<<"  "<<individualEmpNo<<"  "<<name<<"  "<<salary<<endl;
	}
};

int employee::employeeNo=1000;
float employee::accumPay=0.0;

class salesman:public virtual employee{
	protected:
	float commRate;
	float sales;
	public:
	static float salestotal;
	salesman(string name,float sales){
		commRate=0.06;
		individualEmpNo=employeeNo;
		employeeNo++;
		this->name=name;
		this->sales=sales;
	}
	void pay(){
		salary=sales*commRate;
		accumPay+=salary;
		salestotal+=salary;
	}
	void displayStatus(){
		cout<<"  "<<"salesman"<<"  "<<individualEmpNo<<"  "<<name<<"  "<<salary<<endl;
	}
};

float salesman::salestotal=0.0;

class Manager:public virtual employee{
	protected:
	float monthlyPay;
	int grade;
	public:
	Manager(string name1,int grade1){
		monthlyPay=5000;
		individualEmpNo=employeeNo;
		employeeNo=employeeNo+1;
		name=name1;
		grade=grade1;
	}
	void pay(){
		salary=monthlyPay+(grade-1)*2000;
		accumPay+=salary;
	}
	void displayStatus(){
		cout<<"  "<<"Manager"<<"  "<<individualEmpNo<<"  "<<name<<"  "<<salary<<endl;
	}

};

class sManager:public employee{
    private:
	float monthlyPay;
	float commRate;
	float sales;
	int grade;
	public:
	sManager(string name,int grade,float sales){
		monthlyPay=3000;
		commRate=0.04;
		individualEmpNo=employeeNo;
		employeeNo++;
		this->name=name;
		this->grade=grade;
		this->sales=sales;
	}
	void pay(){
		salary=monthlyPay+(salesman::salestotal+sales)*commRate;
		accumPay+=salary;
	}
	void displayStatus(){
		cout<<"  "<<"sMana"<<"  "<<individualEmpNo<<"  "<<name<<"  "<<salary<<endl;
	}
};

int main()
{
    cout<<"  职位  编号  姓名  工资        "<<endl;
    cout<<"-------------------------------"<<endl;
    
	Manager manage=Manager("xxx",1);
	employee *p=&manage;
	technician tech=technician("nie",20);
	technician *t=&tech;
	salesman sale=salesman("han",10000);
	salesman *s=&sale;
	s->pay();
	s->displayStatus();
	t->pay();
	t->displayStatus();
	p->pay();
	p->displayStatus();
	cout<<employee::accumPay<<endl;	
}






#include<iostream.h>

class add{
private:
	int a,b;
public:
	add(int a,int b){
		this->a=a;
		this->b=b;
	}
	int getResult(){
		return a+b;
	}
};
void main(void)
{
	int a,b;
	cout<<"please enter two number: "<<endl;

	cin>>a;
	cin>>b;

	add test(a,b);
	cout<<"The result is "<<test.getResult()<<endl;
}

#include<iostream>
#include<string>

using namespace std;

class Area{
protected:
	double height;
	double width;
public:
	void setSize(double h,double w)
	{
		this->height=h;
		this->width=w;
	}
	virtual int result()=0;
};
class Box:virtual public Area
{
public:

	int result()
	{
		return width*height;
	}
};
class Isosceles:virtual public Area
{
public:

	int result()
	{
		return width*height/2;
	}
};
void main(void)
{
	int width;
	int height;
	cout<<"please enter the width:"<<endl;
	cin>>width;
	cout<<"please enter the height:"<<endl;
	cin>>height;
	Box b;
	Isosceles is;
	b.setSize(height,width);
	is.setSize(height,width);
	cout<<"the area of box is :"<<b.result()<<endl;
	cout<<"the area of isoscelse is:"<<is.result()<<endl;
}

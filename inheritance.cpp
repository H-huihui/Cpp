#include<iostream.h>
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
	int Result()
	{
		return width*height;
	}
};
class Box:public Area{
public:
	int Result()
	{
		return width*height;
	}
};
class Isosceles:public Area{
public:
	int Result()
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
	cout<<"the area of box is :"<<b.Result()<<endl;
	cout<<"the are of isoscelse is:"<<is.Result()<<endl;
}

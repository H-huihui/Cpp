#include<iostream.h>
#include<Windows.h>

class Clock{
private:
	int hour,minute,second;
public:
	Clock(int hour,int minute,int second);

	void display(){
		for(int h=hour;h<24;h++){
			for(int m=minute;m<60;m++){
				for(int s=second;s<60;s++){
					cout<<h<<":"<<m<<":"<<s<<endl;
					Sleep(1000);
				}
				second=0;
			}
			minute=0;
		}
	}
};

Clock::Clock(int hour,int minute,int second){
	this->hour=hour;
	this->minute=minute;
	this->second=second;
}
void main()
{
	Clock c(12,13,40);
	c.display();
}

#include<iostream.h>
void main(void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,1234};
	int *a_pointer;
	a_pointer=a;
	int sum=0;
	for(int i=0;i<10;i++)
	{
		sum+=*a_pointer;
		a_pointer++;
	}
	cout<<"the sum is"<<sum<<endl;
	for(int j=0;j<10;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<endl;
}

#include<iostream>
using namespace std;
int add(int num1,int num2);
int add(int num1,int num2, int num3);
float add(float num1,float num2);
int main()
{
	int a=1,b=2,c=3;
	float d=4.4, e=3.2;
	cout<<add(a,b)<<endl;
	cout<<add(a,b,c)<<endl;
	cout<<add(d,e)<<endl;
	return 0;
}
int add(int num1,int num2)
{
	int sum=num1+num2;
	return sum;
	
}
int add(int num1,int num2, int num3)
{
	int sum=num1+num2+num3;
	return sum;
}
float add(float num1,float num2)
{
	float sum=num1+num2;
	return sum;
}

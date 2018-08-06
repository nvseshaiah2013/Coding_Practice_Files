#include<iostream>
using namespace std;
int main()
{
	int num1,num2,count=0;
	cin>>num1>>num2;
	int num=num1^num2;
	while(num>0)
	{
		if(num%2)
		++count;
		num/=2;
	}
	cout<<count;
	return 0;
}

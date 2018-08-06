#include<iostream>
using namespace std;
bool linear_search(int arr[],int num)
{
	for(int i=0;i<10;i++)
	{
		if(arr[i]==num)
		return true;
	}
	return false;
}
int main()
{
	int arr[10]={1,2,5,6,3,5,2,4,8,1};
	int num;
	cin>>num;
	if(linear_search(arr,num))
	cout<<"FOUND\n";
	else
	cout<<"NOT FOUND\n";
	return 0;
}

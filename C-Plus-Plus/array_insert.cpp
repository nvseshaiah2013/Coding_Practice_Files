#include<iostream>
using namespace std;
void insert(int arr[],int n,int p)
{
	for(int i=4;i>p;i--)
	{
		arr[i]=arr[i-1];		
	}
	arr[p]=n;
}
void delete_a(int arr[],int p)
{
	for(int i=p+1;i<5;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[4]=0;
}
void display(int arr[])
{
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int arr[5]={1,2,3,6,9};
	int num,pos;
	cin>>pos;
//	insert(arr,num,pos);
	delete_a(arr,pos);
	display(arr);
	return 0;
}

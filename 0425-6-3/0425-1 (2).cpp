#include<iostream>
using namespace std;
int main()
{
	int a[5]={0,1,2,3,4};
	int i;
	for(i=0;i<5;i++)
		cout<<*(a+i)<<" ";
	cout<<endl;
	return 0;
}
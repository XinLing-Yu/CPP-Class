#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double F,C;
	cin>>F;
	C=5*(F-32)/9;
	cout<<"���϶�Ϊ"<<fixed<<setprecision(2)<<C<<endl;
	return 0;
}

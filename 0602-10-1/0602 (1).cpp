#include<iostream>
using namespace std;
class Complex
{
public:
	Complex(double r=0,double i=0)
	{
		real=r;
		imag=i;
	}
	void display()
	{
		
		if(imag<0)
			cout<<real<<"-"<<-imag<<"i";
		else
			cout<<real<<"+"<<imag<<"i";
	}
	Complex operator+(Complex x2)
	{
		double r=this->real+x2.real;
		double i=this->imag+x2.imag;
		return Complex(r,i);
	}
private:
	double real,imag;
};
int main()
{
	Complex c1(2,3);
	Complex c2(4,-5);
	Complex c3;
	c3=c1+c2;
	c1.display();
	cout<<"+";
	c2.display();
	cout<<"=";
	c3.display();
	cout<<endl;
	return 0;
}
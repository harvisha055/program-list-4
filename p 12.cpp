//Write a C++ program to demonstrate use of copy constructor
#include<iostream>
using namespace std;
class demo
{
	int x,y;
	public :
		demo(int l,int b)
		{
			x=l;
			y=b;
			cout<<"Parameterized Constructor Called ::"<<endl;
			cout<<"Area of Rectangle is ::"<<l*b<<endl;

		}
		
		demo(demo &n)
		{
			x=n.x;
			y=n.y;
			
			cout<<"Copy Constructor Called ::"<<endl;
		}
};
int main()
{
	cout<<"harvisha siddhapara"<<endl;
	cout<<"220130318055"<<endl;
	demo d1(4,6);
	demo d2(d1);
}

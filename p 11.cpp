//Write a C++ program to demonstrate use of Parameterized Constructor
#include<iostream>
using namespace std;
class rectangle
{
	int l,b;
	public:
	
		rectangle(int l,int b)	
		{
			cout<<"Area of Rectangle is ::"<<l*b;
		}
};
int main()
{
	cout<<"harvisha siddhapara"<<endl;
	cout<<"220130318055"<<endl;
	rectangle r(3,4);
	
	return  0;
}

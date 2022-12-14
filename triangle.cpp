#include<iostream>
using namespace std; 

class base
{
public:
int h,w;
void getdata()
{
	cout<<"enter value of Height:";
	cin>>h;
	
}
void selectdata()
			{
				cout<<"enter the value of Width:";
				cin>>w;
			}
	
};
class derived : public base
{
		public:
		
			void mult()
			{
				cout<<"Area of triangle:"<<(h*w)/2;
			}
};

main()
{
derived obj;
obj.getdata();
obj.selectdata();
obj.mult();
}

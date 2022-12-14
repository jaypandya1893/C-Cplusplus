#include<iostream>
using namespace std; 

class base
{
public:
int x;
void getdata()
{
	cout<<"enter value of x:";
	cin>>x;
	
	}	
};
class derived : public base
{
	
	protected:
		int y;
		public:
			void selectdata()
			{
				cout<<"enter the value of y:";
				cin>>y;
			}
			void mult()
			{
				cout<<"Ans:"<<x*y;
			}
};
main()
{
derived obj;
obj.getdata();
obj.selectdata();
obj.mult();
}

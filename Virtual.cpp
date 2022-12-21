#include<iostream>
using namespace std;

class base
{
	public:
		int x;
};
class derived1 : virtual public base
{
	public:
		int a;
};
class derived2 : virtual public base
{
	public:
		int b;
};
class derived : public derived1,public derived2
{
	public:
		void mult()
		{
			cout<<"Mult: "<<x*a*b;
		}
};
main()
{
	derived d;
	d.x=10;
	d.a=20;
	d.b=20;
	d.mult();
				
}


#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
		cout<<"Value A:";
	    }
};
class B 
{
public:

	void display()
	{
		cout<<"\nValue B:";
	}
};
class C : public A,public B
{
};
main()
{
	C abc;
	abc.A::display();
	abc.B::display();
}

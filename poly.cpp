#include<iostream>
using namespace std;
class base
{
	public:
		void display()
		{
		cout<<"Value A:";
	    }
};
class derived : public  base
{
public:

	void display()
	{
			base::display();
		cout<<"\nValue B:";
	}
};
main()
{
	derived b;
	b.display();
}

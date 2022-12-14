#include<iostream>
using namespace std; 

class gparent
{
	public:
		int x;
	void xvalue()
	{	
	cout<<"Enter Number X:";
	cin>>x;
    }
};
class parent : public gparent
{
	public:
		int y,z;
	void yvalue()
	{	
	cout<<"Enter Number Y:";
	cin>>y;
    }
    void zvalue()
	{	
	cout<<"Enter Number Z:";
	cin>>z;
    }
};
class child : public parent
{
	public:
		
	void sum()
	{	
	cout<<"SUM of X Y Z:"<<x+y+z;
    }
};

main()
{
	child c;
	c.xvalue();
	c.yvalue();
	c.zvalue();
	c.sum();
	
}

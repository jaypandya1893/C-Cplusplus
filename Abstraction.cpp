#include<iostream>
using namespace std;

class RBI
{
	public:
		virtual void roi()=0;
};
class SBI : public RBI
{
	public:
		void roi()
		{
			cout<<"SBI RATE OF INTREST IS : 8.5";
		}
};
class HDFC : public RBI
{
	public:
		void roi()
		{
			cout<<"\nHDFC RATE OF INTREST IS : 9.5";
		}
};
main()
{
	SBI s;
	HDFC h;
	s.roi();
	h.roi();
}

#include<iostream>
using namespace std;

class faculty
{
	int id;
	char name[20];
	string mo;
	public:
		faculty();
		void display();
};

faculty::faculty()
{
	cout<<"Enter ID No:";
	cin>>id;
	fflush(stdin);
	
	cout<<"Enter Name:";
	gets(name);
	
	cout<<"Enter Contact:";
	cin>>mo;		
}
void faculty::display()
{
	cout<<endl<<id<<"\t"<<name<<"\t"<<mo<<endl<<"\n";
}
main()
{
	faculty f;
	f.display();
}

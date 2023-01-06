#include<iostream>
using namespace std;

class student
{
	int rn;
	char name[20];
	string mo;
	public:
		student();
		void display();
};

student::student()
{
	cout<<"Enter Roll No:";
	cin>>rn;
	fflushh(stdin);
	cout<<"Enter Name:";
	gets(name);
	cout<<"Enter Contact:";
	cin>>mo;		
}
void student::display()
{
	cout<<endl<<rn<<"\t"<<name<<"\t"<<mo<<endl<<"\n";
}
main()
{
	student s;
	s.display();
}

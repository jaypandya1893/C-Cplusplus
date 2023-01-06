#include<iostream>
using namespace std;

class student
{
	int rollno;
	char name[20];
	double fees;
	public:
		student()
		{
			cout<<"Enter Roll No:";
			cin>>rollno;
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Fees:";
			cin>>fees;			
		}
		void display()
		{
			cout<<endl<<rollno<<"\t"<<name<<"\t"<<fees<<endl<<"\n";
		}
};
class faculty
{
	int id;
	char name[20],email[20];
	string contact;

	public:
		faculty()
		{
			cout<<"Enter ID No:";
			cin>>id;
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Email:";
			cin>>email;			
			cout<<"Enter Contact:";
			cin>>contact;	
		}
		void display()
		{
			cout<<endl<<id<<"\t"<<name<<"\t"<<email<<"\t"<<contact<<endl;
		}
};
class employee
{
	int id;
	char name[20], email[20];
	double salary;
	string contact;

	public:
		employee()
		{
			cout<<"Enter ID No:";
			cin>>id;
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Email:";
			cin>>email;			
			cout<<"Enter Contact:";
			cin>>contact;
			cout<<"Enter Salary:";
			cin>>salary;
		}
		void display()
		{
			cout<<endl<<id<<"\t"<<name<<"\t"<<email<<"\t"<<contact<<"\t"<<salary<<endl;
		}
};

main()
{
	student s;
	s.display();
	faculty f;
	f.display();
	employee e;
	e.display();
}

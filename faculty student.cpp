#include<iostream>
using namespace std; 

int id,mob;
char name[20];
	
class faculty
{
	
	public:
		
		void input()
		{
			cout<<"Faculty ID: "<<endl;
			cin>>id;
			
			cout<<"Faculty Name: "<<endl;
			cin>>name;
			
			cout<<"Faculty Mobile No: "<<endl;
			cin>>mob;
			
			fflush(stdin);
		}
		
		void output()
		{
			cout<<"Faculty ID: "<<id<<endl;
		    cout<<"Faculty Name: "<<name<<endl;
		    cout<<"Faculty Mobile No: "<<mob<<endl;
		}	
};
class student

{

	
	public:
		
		void input1()
		{
			cout<<"\n\nStudent ID: "<<endl;
			cin>>id;
			
			cout<<"Student Name: "<<endl;
			cin>>name;
			
			cout<<"Student Mobile No: "<<endl;
			cin>>mob;
			
			fflush(stdin);
		}
		
		void output1()
		{
			cout<<"Fecultie ID: "<<id<<endl;
		    cout<<"Fecultie Name: "<<name<<endl;
		    cout<<"Fecultie Mobile No: "<<mob<<endl;
		}	
};
main()
{
	faculty f;
	f.input();
	f.output();

	student s;
	s.input1();
	s.output1();
}

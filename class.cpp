#include<iostream>
using namespace std;
class feculties

{
	int id,mob;
	char name[20];
	
	public:
		
		void input()
		{
			cout<<"Fecultie ID: "<<endl;
			cin>>id;
			
			cout<<"Fecultie Name: "<<endl;
			cin>>name;
			
			cout<<"Fecultie Mobile No: "<<endl;
			cin>>mob;
			
			fflush(stdin);
		}
		
		void output()
		{
			cout<<"Fecultie ID: "<<id<<endl;
		    cout<<"Fecultie Name: "<<name<<endl;
		    cout<<"Fecultie Mobile No: "<<mob<<endl;
		}	
};
main()
{
	feculties f;
	f.input();
	f.output();
}

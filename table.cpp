#include<iostream>
using namespace std;
main()
{
int i,a,count=1,mult;

cout<<"Enter the value";
cin>>a;

for(i=1;i<=10;i++)
{
mult=a*i;	
cout<<a<<" x "<<i<<"="<<"  "<<mult<<endl;
}
return 0;
}

#include<iostream>
using namespace std;
main()
{
int i,a,count=1;

printf("Enter the value");
scanf("%d",&a);

for(i=1;i<=a;i++)
{
	count=count+i;
	printf("%i\n",count);
}

return 0;
}

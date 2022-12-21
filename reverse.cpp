#include<stdio.h>
#include<string.h>
int main()
{
	int a,num;
	
	printf("Enter value");
	scanf("%i",&a);
	num= strrev(a);
	printf("Enter value in reverse: %d",num);
return 0;
}

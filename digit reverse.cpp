#include<stdio.h>
#include<string.h>

int main()
{
	int num[4],reverse,a;
	
	printf("Enter Four digit Number:");
	gets(num);
	a=num;
	reverse=strrev(a);
		printf("Reverse digit Number:%s",reverse);
	return 0;
}

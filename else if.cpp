#include<stdio.h>
int main()
{
	int a;
	printf ("Enter The Value In Between  1 to 12 Numbers:");
	scanf ("%d",&a);
	
	if (a==1)
	{
		printf (" January");
	}
	else if (a==2)
	{
		printf (" February");
	}
	else if (a==3)
	{
		printf (" March");
	}
	else if (a==4)
	{
		printf (" April");
	}
	else if (a==5)
	{
		printf (" May");
	}
	else if (a==6)
	{
		printf (" June");
	}
	else if (a==7)
	{
		printf (" July");
	}
	else if (a==8)
	{
		printf (" August");
	}
	else if (a==9)
	{
		printf (" September");
	}
	else if (a==10)
	{
		printf (" Octomber");
	}
	else if (a==11)
	{
		printf (" November");
	}
	else if (a==12)
	{
		printf (" December");
	}
	else
	{
		printf ("Enter vallied Number");
	}
	return 0;
}

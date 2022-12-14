//PASS or FAIL Student record.
#include<stdio.h>
int main()

{
float m,s,e,c,total,min,per;

printf("Enter Student Obtain Marks Out Off 100 \n\n");

printf("Enter Student Maths Subject Marks:");
scanf("%f", &m);
if (m>100)
{
	printf("Sorry Enter Valid Value");
	return 0;
}

printf("Enter Student Science Subject Marks:");
scanf("%f", &s);
if (s>100)
{
	printf("Sorry Enter Valid Value");
	return 0;
}

printf("Enter Student English Subject Marks:");
scanf("%f", &e);
if (e>100)
{
	printf("Sorry Enter Valid Value");
	return 0;
}

printf("Enter Student Computer Subject Marks:");
scanf("%f", &c);
if (c>100)
{
	printf("\nSorry Enter Valid Value\n");
	return 0;
}

total=  m+s+e+c;
printf("\n Total Subject Marks:%.2f \n",total);
per=(total/400)*100;
printf("\n Percentage:%.2f %\n",per);

min=40;

if (m<min || s<min || e<min || c<min)
{
	printf("\n Better luck Next Time You Are Failed \n");
}
else
{
	printf("\n Congratulations You Were Sussesfully PASSED Exam \n");
}

return 0;
}


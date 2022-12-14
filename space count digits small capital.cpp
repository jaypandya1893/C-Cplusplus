#include<stdio.h>
#include<string.h>

int main()
{
	char fre,freq=0,str[100];
	int i,count=0,sum=0,vow=0,small=0,cap=0,dig=0;
	
	printf("Enter Yor string:");
	gets(str);
	printf("Enter Frequancy:");
	scanf("%s",&fre);
	
	for (i=0;str[i]!='\0';i++)	
{
	if (str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o' || str[i]=='u')
		{
			vow++;
	    }
	if (str[i]==fre)
		{
			freq++;
		}
	if (str[i]>='a' && str[i]<='z')
		{
			small++;
	    }
    else if (str[i]>='A' && str[i]<='Z')
		{
			cap++;
		}
	else if (str[i]==' ')
	    {
           count++;
	    }
    else 
        {
    	     dig++; 
        }
}
sum=small+cap+dig;	
printf("Total Space:%d\n",count);
printf("Total Character:%d\n",sum);
printf("Total Vowel:%d\n",vow);
printf("Total Frequancy:%d\n",freq);
printf("Total Lower:%d\n",small);
printf("Total Upper:%d\n",cap);
printf("Total Digits:%d\n",dig);
}


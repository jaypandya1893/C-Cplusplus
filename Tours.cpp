#include<stdio.h>
int details();
int login();
int succ();

int succ()
{
		if("u"=="un" && "p"=="cpass")
    	{
    		printf("\n\tLogin Successful");
		}
    	else
    	{
    		printf("\n\tAccess Denied");
		}
}

int login()
{
	char u[4];
	int p;
	printf("\n\tWelcome to login\n\n");
		printf("\n\tUsername:");
		scanf("%s",&u);
    	printf("\n\tPassword:");
    	scanf("%i",&p);
        succ();
}
int details()
{
	int pass,cpass;
	char name[25],mail[20],add[20],un[4];
	    printf("\n\nEnter details for Registration \n\n");
        printf("\n\tEnter Name:");
        scanf("%s",&name);
        printf("\n\tEnter Email:");
        scanf("%s",&mail);
        printf("\n\tEnter Address:");
        scanf("%s",&add);
		printf("\n\tEnter Username:");
		scanf("%s",&un);
    	printf("\n\tCreat Password:");
    	scanf("%i",&pass);
		printf("\n\tConformed Password:");
	    scanf("%i",&cpass);
	    if(pass==cpass)
	    {
	    printf("\n\n\tRegistration Successful \n\n");
		login();	
		}
		else
		{
		printf("\n\n\tEnter Same Password");	
		}
}

int main()
{
char a;
printf("Welcome To Our Tours & Travels \n\n");
        printf("\tAhmedabad\n");
        printf("\tSurat\n");
        printf("\tRajkot\n");
        printf("\tValsad\n\n");
        
        printf("Make Your Self Register For more info [y/n] ? ");
        scanf("%c",&a);
        switch(a)
        {
        	case 'y':
        		details();
        		break;
        	default : 
			    printf("Thank You For Visiting");
		       	break;
		}
}



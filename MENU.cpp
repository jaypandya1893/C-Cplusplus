#include<stdio.h>

int main()
{
    float a,c,b;
    {
here:
        printf("----------MENU----------\n\n");
        printf("\t1.Addition\n");
        printf("\t2.Subtraction\n");
        printf("\t3.Multipliction\n");
        printf("\t4.Division\n");
        printf("\t5.Module\n");
        printf("\t6.Exit\n\n\n");

        printf("Enter Your Choice From MENU:  ");
        scanf("%f",&a);
    }
    if (a==1)
    {
        printf("Enter Two number for addition:");
        scanf("%f    %f", &b,&c);
        b=b+c;
        printf("Addition:%f\n\n",b);

        goto here;

    }
    if (a==2)
    {
        printf("Enter Two number for Subtraction:");
        scanf("%f    %f", &b,&c);
        b=b-c;
        printf("Subtraction:%f\n\n",b);

        goto here;

    }
    if (a==3)
    {
        printf("Enter Two number for Multiplication:");
        scanf("%f    %f", &b,&c);
        b=b*c;
        printf("Multiplication:%f\n\n",b);

        goto here;

    }
    if (a==4)
    {
        printf("Enter Two number for Division:");
        scanf("%f    %f", &b,&c);
        b=b/c;
        printf("Division:%f\n\n",b);

        goto here;

    }
    if (a==5)
    {
        printf("Enter Two number for Module:");
        scanf("%f    %f", &b,&c);
        b=b/c;
        printf("Module:%f\n\n",b);

        goto here;

    }

    else
    {
        printf("\nExit");
    }

    return 0;
}

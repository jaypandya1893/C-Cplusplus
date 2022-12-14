#include<stdio.h>
int main()
{
char ans;
	
	printf("Enter the value between a to z:");
	scanf("%c",&ans);
	
	switch (ans)
	{
		case 'a': printf("APPLE");
		break;
		case 'b': printf("BALL");
		break;
		case 'c': printf("CAT");
		break;
		case 'd': printf("DOG");
		break;
		case 'e': printf("EYE");
		break;
		case 'f': printf("FAN");
		break;
		case 'g': printf("GOD");
		break;
		case 'h': printf("HEAD");
		break;
		case 'i': printf("INK");
		break;
		case 'j': printf("JAY");
		break;
		case 'k': printf("KEY");
		break;
		case 'l': printf("LAMP");
		break;
		case 'm': printf("MONTH");
		break;
		case 'n': printf("NETWORK");
		break;
		default: printf("Enter vellied value");
		break;
	}
return 0;	
}

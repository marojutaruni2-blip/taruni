#include<stdio.h>
main()
{
	int choice,n;
	printf("\n 1 kkd");
	printf("\n 2 hyd");
	printf("\n 3 vzg");
	printf("\n 4 kurnool");
	printf("\n enter your choice");
	scanf("%d",& choice);
	printf("enter number of tickets");
	scanf("%d",&n);
	switch(choice)
	{
		case 1 :
			printf("\n your destination is kkd");
			printf("\n no of tickets =%d",n);
			printf("\nthe ticket cost is 60");
			printf("\nthe total amount is =%d",n*60);
			break;
	    case 2 :
	    	printf("\n your destination is hyd");
	    	printf("\nno of tickets =%d",n);
	    	printf("\nthe ticket cost is 800");
	    	printf("\nthe total amount is =%d",n*800);
	    	break;
	    case 3 :
		    printf("\n your destination is vzg");
	    	printf("\n no of tickets =%d",n);
	    	printf("\n the ticket cost is 750");
	    	printf("\n the total amount is =%d",n*750);	
	    	break;
	    case 4 :
	        printf("\n your destination is kurnool");
	    	printf("\n no of tickets =%d",n);
	    	printf("\n the ticket cost is 1200");
	    	printf("\n the total amount is =%d",n*1200);
			break;	
	    
	}
}

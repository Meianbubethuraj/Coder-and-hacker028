#include<stdio.h>
int main()
{
	int Am,Tc,bal,i;
	 printf("WENDDINHG MACHINE\n");
	 printf("*****************\n");
	 printf("Enter amount of a ticket : ");
	 scanf("%d",&Am);
	 printf("Enter a No of tickets :");
	 scanf("%d",&Tc);
	 i=Tc*5
	 if(Am>=i)
	 {
	 	if(Am>=i)
	 	{
		 printf("Ticket is ready");
	 	printf("bal=%d",i-Am);
		 }
		 else
		 {
		 	printf("Amount is not enough");
		 }
	}
	 else
	 {
	 printf("Invalid coin");
}
	 return 0;
}

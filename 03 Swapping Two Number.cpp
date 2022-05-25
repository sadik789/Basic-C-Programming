#include<stdio.h>

int main()
{
	int No1,No2,Temp;
	
	printf("Enter First Number:");
	scanf("%d",&No1);
	printf("Enter First Number:");
	scanf("%d",&No2);
	
	
	Temp = No1;
	No1 = No2;
	Temp = No2;
	
	printf("After Swapping Number");
			
			
	printf("Enter First Number:\n",No1);
	printf("Enter Second Number:\n",No2);
	
	return 0;
	
}

// item 1 Office_Chair $150
// item 2 Desk $500
// item 3 File_Cabinet $300
// item 4 Book_Case $200
#include<stdio.h>
// 
int main(void)
{
	printf(" 1. Office Chair $150 \n 2. Desk $500 \n 3. File Cabinet $300 \n 4. Book Case $200" );
    printf("\n");
	int select, quantity;
	int total=0;
	puts(" Please enter a selection from 1-4, -1 to exit.");
	scanf(" %d", &select);
	while(select !=-1)
	{
		switch(select)
		{
			case 1:
				puts(" office_chair $150");
				puts(" enter quantity");
				scanf("%d", &quantity);
				printf(" Price is : %d\n", quantity*150);
				total = total+quantity*150;
				break;
				
			case 2:
				puts(" desk $500");
				puts(" enter quantity");
				scanf(" %d", &quantity);
				printf(" Price is : %d\n", quantity*500);
				total = total+quantity*500;
				break;
				
			case 3:
				puts(" file_cabinet $300");
				puts(" enter quantity");
				scanf(" %d", &quantity);
				printf(" Price is : %d\n", quantity*300);
				total = total+quantity*300;
				break;
				
			case 4:
				puts(" book_case $200");
				puts(" enter quantity");
				scanf(" %d", &quantity);
				printf(" Price is : %d\n", quantity*200);
				total = total+quantity*200;
				break;
				
			default:
				puts(" wrong item selection");
				break;			
		}
		puts("please enter a selection 1-4, -1 to exit");
		scanf("%d", &select);
	}
	printf("Total sale = %d", total);
}

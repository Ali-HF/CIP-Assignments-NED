#include <stdio.h>

int main (void)
{
	int val;
	int current_balance;
	int withdraw, deposit;
	
	current_balance = 1500;
	
	printf("to check your balance enter : 1\nto withdraw money enter: 2\nto deposit money enter: 3\n:");
	scanf("%d", &val);
	
	switch (val){
		case 1:
			{
				printf("your current balance is: %d", current_balance);
			}
			break;
		case 2:
			{
				printf("\nhow much money would you like to withdraw: ");
				scanf("%d", &withdraw);
				if (withdraw > current_balance)
				{
					printf("\nNot enough balance");
				}
				else
				{
				current_balance = current_balance - withdraw;
				printf("withdraw successful,\nmoney left in account: %d", current_balance);
				}
			}
			break;
		case 3:
			{
				printf("\nhow much money would you like to deposit: ");
				scanf("%d", &deposit);
				current_balance = current_balance + deposit;
				printf("deposit successful,\nmoney left in account: %d", current_balance);				
			}
			break;
		default:
			printf("invalid input");
	}
	
	
	
}
#include<stdio.h>

int main(){
	
	int ch, price, op1=0, op2=0, op3=0, qty1=0, qty2=0, qty3=0, n, order=0;
	char choice;
	
	while(1)
	{
	
	printf("\n---------- Welcome to Restaurant ----------\n");
	printf("-------------------------------------------\n");
	printf("0. Menu\n 1. Biriyani\n 2. Gulab Jamun\n 3. Raita\n 4. Bill\nSelect any one option:");
	scanf("%d", &ch);
	printf("===========================================\n\n");
	switch(ch){
		case 0:
			main();
			break;
			
		case 1:
			printf("Selected Dish: Biriyani\n");
			printf("Price: 180\n");
			printf("Prep. Time: 15 mins.\n\n");
			printf("Do you want to place order?(y n)\n => ");
			scanf(" %c", &choice);
			if(choice == 'y'){
				printf("Enter Quantity: ");
				scanf("%d", &n);
				qty1 += n;
				printf("-----------------------\n");
				printf("Prepairing your dish\n\n");
				price += 180 * qty1;
				op1= 1;
				order = 1;
				printf("Total Bill: %d.", price);
				printf("\n-----------------------\n");
			}
			else if(choice =='n'){
				main();
			}
			else{
				printf("Invalid Option!! Please try again.");
				main();
			}
			break;
			
		case 2:
			printf("Selected Dish: Gulab Jamun\n");
			printf("Price: 20\n");
			printf("Prep. Time: 5 mins.\n\n");
			printf("Do you want to place order?(Y n)\n =>");
			scanf(" %c", &choice);
			if(choice == 'y'){
				printf("Enter Quantity: ");
				scanf("%d", &n);
				qty2 += n;
				printf("-----------------------\n");
				printf("Prepairing your dish\n\n");
				price += 20;
				op2 = 1;
				order = 1;
				printf("Total Bill: %d.", price);
				printf("\n-----------------------\n");
			}
			else if(choice =='n'){
				main();
			}
			else{
				printf("Invalid Option!! Please try again.");
				main();
			}
			break;
			
		case 3:
			printf("Selected Dish: Raita\n");
			printf("Price: 10\n");
			printf("Prep. Time: 2 mins.\n\n");
			printf("Do you want to place order?(Y n)\n => ");
			scanf(" %c", &choice);
			if(choice == 'y'){
				printf("Enter Quantity: ");
				scanf("%d", &n);
				qty3 += n;
				printf("-----------------------\n");
				printf("Prepairing your dish\n\n");
				price += 10;
				op3= 1;
				order = 1;
				printf("Total Bill: %d.", price);
				printf("\n-----------------------\n");
			}
			else if(choice =='n'){
				main();
			}
			else{
				printf("Invalid Option!! Please try again.");
				main();
			}
			break;
			
		case 4:
			if(order == 1)
			{
				printf("\n\t\t\t\t|===========================================|\n");
				printf("\t\t\t\t|--------------Resturant Bill---------------|\n");
				printf("\t\t\t\t|===========================================|\n");
				printf("\t\t\t\t|  Particular                Qty.      Rate |");
				if(op1 > 0)
					printf("\n\t\t\t\t|  Biriyani                  %d         %3d  |", qty1, qty1 * 180);
				if(op2 > 0)
					printf("\n\t\t\t\t|  Gulab Jamun               %d         %3d  |", qty2, qty2 * 20);
				if(op3 > 0)
					printf("\n\t\t\t\t|  Raita                     %d         %3d  |", qty3, qty3 * 10);
				
				printf("\n\t\t\t\t|-------------------------------------------|");
				printf("\n\t\t\t\t|Bill: %d.                                 |\n", price);
				price = price + (price * 0.05);
				printf("\t\t\t\t|Applicable Tax: 5%%                         |\n");
				printf("\t\t\t\t|Total: %d.                                |\n", price);
				printf("\t\t\t\t|===========================================|\n");
				printf("\t\t\t\t|----------Thank you for visiting-----------|\n");
				printf("\t\t\t\t|-------------------------------------------|\n");
				printf("\t\t\t\t|                                           |\n");
				printf("\t\t\t\t|                                           |\n");
				printf("\t\t\t\t|-------------------------------------------|\n");
				return(0);
			}
			else
			{
				printf("\nYou have not ordered anything.\nDo you want to order?(y/n)\n=>");
				scanf(" %c", &choice);
				if(choice == 'y')
					main();
				else
					return(0);
			}
			break;
			
		default:
			main();
			
	}
}
}

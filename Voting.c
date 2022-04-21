#include<stdio.h>

int main()
{
	int bjp, cong=0, shivsena, num;
	char ch;
	
	while(ch != 'n' && ch != 'N')
	{
		printf("\nWelcome to Voting Booth:\n 1. BJP\n 2. Congress\n 3. Shivsena\n");
		printf("\n Enter the number next to party you want to vote: ");
		scanf("%d", &num);
		
		switch(num)
		{
			case 1:
				bjp += 1;
				break;
			case 2:
				cong +=1;
				break;
			case 3:
				shivsena += 1;
				break;
			default:
				printf("\nInvalid option\n");
		}
		
		printf("\n Do you want to continue(Y/N): ");
		scanf(" %c", &ch);
	}
	printf("\t\t\t\t|-----------------------------------------|");
	printf("\n\t\t\t\t|-----------------------------------------|");
	printf("\n\t\t\t\t|            Voting Results!              |");
	printf("\n\t\t\t\t|-----------------------------------------|");
	printf("\n\t\t\t\t|             BJP: %d Votes.               |", bjp);
	printf("\n\t\t\t\t|        Congress: %d Votes.               |", cong);
	printf("\n\t\t\t\t|        Shivsena: %d Votes.               |", shivsena);
	printf("\n\t\t\t\t|-----------------------------------------|");
	if((bjp > cong) && (bjp > shivsena))
	{
		printf("\n\t\t\t\t|       BJP has won!                  |");	
	}
	else if(cong > shivsena)
	{
		printf("\n\t\t\t\t|       Congress has won!             |");
	}
	else
		printf("\n\t\t\t\t|       Shivsena has won!             |");
		
	printf("\n\t\t\t\t|---------------------------------------|");
	printf("\n\t\t\t\t|                                       |");
	printf("\n\t\t\t\t|                                       |");
	printf("\n\t\t\t\t|---------------------------------------|");
	
	
	
	return 0;
}

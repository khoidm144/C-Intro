#include <stdio.h>
int main()
{
	int sum = 0;
	int start, destination;
	int p1choice, p2choice;
	short player = 1;
	int check;
	int flag = 0;
	printf("Start: ");
	scanf("%d", &start);
	sum = start;
	do{
	printf("Destination: ");
	scanf("%d", &destination);
        if(destination<start){
	  printf("Invalid ! Destination must bigger than Start\n"); 
	}
	}while(destination<start);
	while (1)
	{
		if (player == 1)
		{
			printf("P1. ");
			while (1)
			{
				printf(" Choose a number: ");
				scanf("%d", &p1choice);
				if (p1choice>0&&p1choice <= 5 && (p1choice % 2 != check || flag == 0))
				{
					check = p1choice % 2;
					flag = 1;
					break;
				}
				else if (p1choice > 5)
				{
					printf("Invalid-greater than 5\n");
				}
				else if(p1choice <=0){
				  printf("Invalid-must be positive\n");
				}
				else if (p1choice % 2 == check)
				{
					if (check == 1)
					{
						printf("Invalid-must be even\n");
					}
					else
					{
						printf("Invalid-must be odd\n");
					}
				}
			}
			sum = sum + p1choice;
			printf("Now the value is %d\n", sum);
		}
		else
		{
			printf("P2. ");
			while (1)
			{
				printf(" Choose a number: ");
				scanf("%d", &p2choice);
				if (p2choice>0&&p2choice <= 5 && (p2choice % 2 != check || flag == 0))
				{
					check = p2choice % 2;
					flag = 1;
					break;
				}
				else if (p2choice > 5)
				{
					printf("Invalid-greater than 5\n");
				}
				else if( p2choice<=0){
				        printf("Invalid-must be positive\n");
				}
				else if (p2choice % 2 == check)
				{
					if (check == 1)
					{
						printf("Invalid-must be even\n");
					}
					else
					{
						printf("Invalid-must be odd\n");
					}
				}
			}
			sum = sum + p2choice;
			printf("Now the value is %d\n", sum);
		}
		if(sum>=destination){
			printf("P%d has won the game! Congratulation\n",player);
			return 0;
		}
		else if (player ==1) player=2;
		else
		{
			player=1;
		}
		
	}

	return 0;
}

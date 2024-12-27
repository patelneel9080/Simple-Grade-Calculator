#include<stdio.h>
#include<conio.h>

main()
{
	int score;
	char grade;

	clrscr();

	printf("Enter Your Score : ");
	scanf("%d",&score);

	grade = (score >= 90)
				? 'A'
				: (score >= 80)
					? 'B'
					: (score >= 70)
						? 'C'
						: (score >= 38)
							? 'D'
							: 'F';

	if(score <= 100 && score >= 0)
	{
		switch(grade)
		{
			case 'A':
				printf("Your grade is A. Excellent Work");
				break;
			case 'B':
				printf("Your grade is B. Well done");
				break;
			case 'C':
				printf("Your grade is C. Good job");
				break;
			case 'D':
				printf("Your grade is D. You passed but you could do better");
				break;
			default:
				printf("Your grade is F. Sorry you failed");
		}
		if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
		{
			printf(" You are eligible for next level");
		}
		else
		{
			printf(" Please try again next time");
		}
	}
	else
	{
		printf("Score must be less than equal to 100");
	}

	getch();

}
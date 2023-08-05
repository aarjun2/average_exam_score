/* 
	Author: AA 
	Date:8/30/2021 
	
	Description: This program will prompt the use for 3 exam scores. Calculate the average of the scores. 
				 Display the result to the screen  
				*/ 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//printf (), scanf () 

int main(void)
{
	int score1 = 0, score2 = 0, score3 = 0; 
	double average1 = 0.0;
	//1.Prompt the user for exam score 1
	printf("Enter exam score 1: ");
	//2. Get score 1 from user
	scanf("%d", &score1);
	//3.Prompt the user for exam score 2
	printf("Enter exam score 2: ");
	//4. Get score 2 from user
	scanf("%d", &score2);
	//5.Prompt the user for exam score 3
	printf("Enter exam score 3: ");
	//6. Get score 3 from user
	scanf("%d", &score3);  
	//7. Sum up the scores
	average1 = ((double)score1 + (double)score2 + (double)score3) / 3;
	printf("Average: %lf",average1);

		return 0;
}
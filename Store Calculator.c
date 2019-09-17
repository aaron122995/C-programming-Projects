/*
	Author: LI Chung Hei
	Date: 11/09/19 00:27
	Description: Write a C program that reads in the type (N or B), the number of LED colours (an integer), and
				 the number of LED light dots. The program then print out the price of the message board.
*/

#include <stdio.h>

void main(){
	char typeOfLED;
	int numberOfColours;
	int numberOfDots;
	float price;
	
	printf("LED Message Board Price Calculator\n");
	
	printf("Enter the type (N, B) : ");
	scanf("%c",&typeOfLED);
	
	printf("Enter number of colours : ");
	fflush(stdin);
	scanf("%d",&numberOfColours);
	
	printf("Enter number of LED lights dots required: ");
	fflush(stdin);
	scanf("%d",&numberOfDots);
	
	
	if (typeOfLED == 'N')
	{
		
		switch(numberOfColours){
			case 1:
				price = 6.5 * numberOfDots;
				printf("The price of the message board is $%f",price);
				
			break;
			
			case 2:
				price = 7.0 * numberOfDots;
				printf("The price of the message board is $%f",price);
			break;
			
			case 3:
				price = 7.5 * numberOfDots;
				printf("The price of the message board is $%f",price);
			break;
			
			case 4:
				price = 8.5 * numberOfDots;
				printf("The price of the message board is $%f",price);
			break;
			
			
		}	
		
	}
	
	else
	{
		switch(numberOfColours){
			case 1:
				price = 8.5 * numberOfDots;
				printf("The price of the message board is $%f",price);
				
			break;
			
			case 2:
				price = 9.0 * numberOfDots;
				printf("The price of the message board is $%f",price);
			break;
			
			case 3:
				price = 9.5 * numberOfDots;
				printf("The price of the message board is $%f",price);
			break;
			
			case 4:
				price = 11.0 * numberOfDots;
				printf("The price of the message board is $%f",price);
			break;
		
		
		
	}
	
	

	
}
fflush(stdin);
getchar();
		
}



















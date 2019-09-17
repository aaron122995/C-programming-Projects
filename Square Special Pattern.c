/*
	Author: LI Chung Hei
	Date: 10/09/19 16:00
	Description: Write a C program that again generates a square, this time of a different pattern.
*/
# include <stdio.h>
int main (void){
	int sizeOfPattern;
	int rowNumber;
	char columnValue;
	
	printf("Enter the size of pattern: ");
	scanf("%d",&sizeOfPattern);
	
	if (sizeOfPattern >= 0){
		for (rowNumber = 0 ; rowNumber < sizeOfPattern ; rowNumber++){
			for(columnValue = 'A'; columnValue < ('A' + sizeOfPattern) ; columnValue += 1){
				printf("%c",columnValue);
				
			}
			
			printf("\n");		
			
		}
	}
	
	else {
		printf("Invalid Value");
	}
	
	return 0;
	
	
	
	
}

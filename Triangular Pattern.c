/* print out a triangular pattern*/

#include <stdio.h>

int main (void){
	int numberOfrow;
	int row;
	int col;
	
	printf("Enter the size of the triangle: ");
	scanf("%d",&numberOfrow);
	
	for (row = 0 ; row < numberOfrow; row++){
		for (col = 0; col <= row;col++){
			printf("*");
		}
		
		printf("\n");	
	}
	
	return 0;
	
	
	
	
	
}

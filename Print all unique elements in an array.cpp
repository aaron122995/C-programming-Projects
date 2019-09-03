#include <stdio.h>

int main (void) {
    int n; /* variable storing size of array*/
	int i;/*looping index*/
	int j;/*looping index*/
	int k;/*looping index*/
	int match;/* counting number of matches for an element in an array*/
	/* asking the user to input the size of the array*/
	printf("Please enter the size of elements you wanna store:\n");
	scanf("%d",&n);
	
	/* asking user to input elements in the array*/
	int array[n];
	for (i=0;i<n;i++){
		printf("Please enter element %d \n",i+1);
		scanf("%d",&array[i]);	
	}
	/* print out the array you input*/
	for (i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	
	printf("\n");
	/* check for dulplicates*/
	
	for (i=0;i<n;i++){
		match = 0;
		/* check for existence of dulplicates of the current element in positions  before it*/
		for (j=0;j<i-1;j++)
		{
			if (array[i]==array[j] ){
					match ++;
			
			
			}
		
		}
		
		/* check for existence of dulplicates of the current element in positions after it*/
		
		for(k=i+1;k<n;k++){
			
			if (array[i]==array[k] ){
					match ++;
		}
		
		}		
		
			/* print for unique elements*/
		
		if (match == 0){
			printf("%d ",array[i]);
			}
	
}

return 0;}

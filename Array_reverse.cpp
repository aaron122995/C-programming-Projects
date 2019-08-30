/* input a array, output a new array with all the elements in reversed order as the original*/


#include <stdio.h>

int main(void){
	int n;
	int i;
	printf("Please enter the number of elements you wanna enter\n");
	scanf("%d",&n);
	printf("\n");
	int oldArray[n];
	int newArray[n];
	
	do {
		printf("Please enter the element %d you wanna enter\n",i+1);
	   scanf("%d",&oldArray[i]);
	   i++;
		
		
		
	}while (i<n);
	
	int counter = 0;
	
	for (i=n-1;i>=0;i--){
		
		newArray[counter] = oldArray[i];
		counter ++;
		
	}
	
	printf("The original array is:\n");

	for (i=0;i<n;i++){
		printf("%d ",oldArray[i]);
		
		
		
	}
	
	printf("\n");
	
  printf("The reversed array is:\n");
printf("\n");	
	for (i=0;i<n;i++){
		printf("%d ",newArray[i]);
		
		
		
	}
	
	
	return 0;
	
	
	
	
	
}

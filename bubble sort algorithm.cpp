# include <stdio.h>

int main (void){
int n;/* stored for userinput for the number of elements the user wanna sort*/
int array[n];/* an array stored list of numbers input by the user*/
int i;/*indexing variable for looping*/
int j;/*indexing variable for looping*/
int k;/*indexing variable for looping*/
int aux;/* variable used in swapping process*/

/* ask the user to input the size of the array*/

printf("Please input the number of elements you wanna input: \n");
scanf("%d",&n);

/* ask the user the input each element of the array*/

for (i=0;i<n;i++){
	printf("Please input number %d\n",i+1);
	scanf("%d",&array[i]);
}


printf("The list of numbers you have input:\n");
/* print the array*/
for (i=0;i<n;i++){
	
	printf("%d ",array[i]);
}

printf("\n");
/* sort the array*/

for (j = 1;j<n;j++){
	for(k=0;k<n-j;k++){
		if (array[k]>array[k+1]){
			
									aux = array[k];
									array[k]= array[k+1];
									array[k+1] = aux;
			
			
			
		}
		
		
	}
	
	
	
}

/*print the sorted_array*/

printf("The sorted list is:\n");

for (i=0;i<n;i++){
	
	printf("%d ",array[i]);
}

return 0;
	
	
}

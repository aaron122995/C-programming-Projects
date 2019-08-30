#include <stdio.h>
/* This is a C program of finding nth Fibonacci number*/
int main(void){
/* declare variables*/	
int n; /* The variable used for storing user input*/

int i;/*variable for looping index*/





printf("Please enter which fibonacci number you wanna return:\n");
scanf("%d",&n );
long long unsigned int array[n];/*an array with size n storing n Fibnonacci Numbers*/

if(n==1){

printf("The first fibonacci number is : 0\n" );

}

else if(n==2){

array[0] = 0;
array[1] = 1;
printf("The first two fibonacci numbers are %d and %d\n",array[0],array[1]);

}

else{
  array[0] = 0;
  array[1] = 1;
  for(i = 0;i<n-2;i++){
  array[i+2] = array[i]+array[i+1];
   
  }

printf("The first %d fibonacci number is :\n",n);
for (i=0;i<n;i++){
printf("%d ",array[i] );

        }

printf("\n");
printf("The fibonacci number you want to find is %d\n",array[n-1]);



}
	
	
	
	

return 0;
	
	
}


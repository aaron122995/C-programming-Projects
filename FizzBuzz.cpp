# include <stdio.h>
/* Pass an array of the numbers from 1 to n, where n is specified by user.Print out the array ,for each number in the array, if the number is divisible by 3, print"Fizz" ; if the number is divisible by 5 ,print"Buzz";if it is divisible by both 3 and 5 , print "FizzBuzz"*/ 
int main(void){

int n;
int i;

printf("Please enter the upper bound of the number :\n");
scanf("%d",&n);
int array[n];

for (i=0;i<n;i++){
	array[i] = i+1;
	
}

printf("The list of input is:\n");

for (i=0;i<n;i++){
	printf("%d ",array[i]);
	
}

printf("\n");
printf("\n");

for (i=0;i<n;i++){
	if (array[i] % 3 ==0 && array[i]%5==0){
		
		printf("FizzBuzz ");
		
		
	}
	
	else if(array[i] % 3 ==0){
		
		printf("Fizz ");
		
	}
	
	else if (array[i] % 5 ==0){
		
		printf("Buzz ");
		
	}
	
	else {
		printf("%d ",array[i]);
	}
	
	
	
	
	
	
}

return 0;
}

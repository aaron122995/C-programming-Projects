/* mutliplication table of number 1 to 10 */

# include <stdio.h>

int main (void){
	int i;
	int j;
	int x;
	int y;
	
	printf(" ");
	for (i=1;i<=10;i++){
		printf("%4d",i);
	}
	printf("\n\n");
	
	
	for (j = 1 ; j <= 10;j++){
		printf("%2d",j);
		for(x=1;x<=10;x++){
			printf("%4d",j*x);
		}
		printf("\n");
		
		
		
	}
	
	
	return 0;
	
	
	
	
	
	
	
	
	
}

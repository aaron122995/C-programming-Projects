#include <stdio.h>

int main (void) {
	int array1[4] = {1,2,3,3};
	int array2[4];
	int i;
	int j;
	int match;
	
	
	for (i=0;i<4;i++){
		match = 0;
		for(j=0;j<4;j++){
			
			if (array1[i] == array2[j]){
				
				match ++;
				
				}
			
		
			
			
			
		}
			
			if(match == 0){
			array2[i] = array1[i];
		}
		
	}
	
	for(i=0;i<4;i++){
		if (array2[i] !=0)
			printf("%d ",array2[i]);
		
	}
	
	return 0;
}

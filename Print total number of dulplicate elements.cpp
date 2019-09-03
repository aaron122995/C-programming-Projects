/* finding total number of dulplicates in an array*/

# include <stdio.h>
int main (void){
int n;
printf("Please specify the size of your array:\n");
scanf("%d",&n);
int array1[n];
int array2[n];
int array3[n];
int mm = 1;
int i,j;
int ctr = 0;
/* input element inside an array*/
for (i = 0 ;i<n;i++){
	printf("Please input element %d\n",i+1);
	scanf("%d",&array1[i]);
}
/* copy array 1 to array2*/
for (i = 0;i<n;i++){
	
	array2[i] = array1[i];
	array3[i] = 0;
	
}
/* mark the duplicate elements*/

for ( i = 0;i<n;i++){
	for (j=0;j<n;j++){
		if (array1[i] == array2[j]){
			array3[j] = mm;
			mm++;
		}
	}
		
		mm = 1;
		
		
		
	}
	
	for (i=0;i<n;i++){
		
		if(array3[i]==2){
			ctr++;
			}
		
		
		
		
		
	}
	
printf("The total number of duplicate elements found in the array is :%d\n",ctr);
printf("\n");
	
	
	return 0;
	
}

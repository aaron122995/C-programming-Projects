/*
	Name: Simplex Method
	Copyright: Li Chung Hei
	Author: Li Chung Hei
	Date: 26/09/19 11:56
	Description: This program solves linear programming problem by simplex method
*/

#include <stdio.h>
#include <stdlib.h>


/*This is a C program that solves linear programming problem by simplex method*/
/*A function that print out the simplex tableau*/
void printArray(float** arrayptr,int rows,int cols){
	int x;
	int y;
	char letter;
	
	printf("z ");
	for (letter = 'a'; letter <= 'a'+ cols -2;letter++){
		printf("%9c ",letter);
	}
	printf("\n");
	for (x = 0;x<rows;x++){
		for(y=0;y<cols;y++){
			printf("%8f ",arrayptr[x][y]);
			
			
			
		}
		
		printf("\n");
	}
	
	return;

}


/*A function that checks the optimality of simplex tableau*/
int optimalityCheck(float** arrayptr,int rows,int cols){
	int y;
	int result;
	
	for(y=0;y<cols;y++){
		if(arrayptr[0][y] < 0.0){
		
			result = 0;
			return result;
	}
		
		
	}
	
	result = 1;
	return result;	
	
}


/*A function that return the column position of the most negative entry in row 0*/
int indexOfMostNegativeElement(float** arrayptr,int rows,int cols){
	
	int y;
	int position;
	float min = 1000000000.0;
	
	for(y=0;y<cols;y++){
		if(arrayptr[0][y] < min){
			min = arrayptr[0][y];
			position = y;
		}
		
	}
	
	if (min < 0.0)
		return position;
		
	else
		return 1;	
}



/*A function that return the row index of the equations that wins the smallest ratio test*/
int rowSmallestRatio(float** arrayptr,int rows,int cols,int pivotingColumn){
	int x;
	int y;
	int position;
	float min = 100000000.0;
	for(x = 1 ; x < rows;x++){
		if(arrayptr[x][pivotingColumn] <= 0.0)
			continue;
			
			
			
		else if((arrayptr[x][cols-1]/arrayptr[x][pivotingColumn])< min){
			min = (arrayptr[x][cols-1]/arrayptr[x][pivotingColumn]);
			position = x;
	
	
	
		}
			
		
	}
	
	return position;
	
	
	
	
}

int main(){
	int rows;/*number of equations including the objective function*/
	int cols;/*number of variables  including slack variables*/
	float** array;/* define the simplex tableau*/
	int r;/*row index for looping*/
	int c;/*column index for looping*/
	int optimalityStatus;/*state whether the tableau achives optimality*/
	int positionOfMostNegative;/*column index of the most negative element in row 0*/
	int rowsSmallest;/*row index of the equation that wins the smallest ratio test*/
	float pivotingElement;/*value of pivoting element*/
	float difference;
	int i;
	printf("Please enter the number of variables(including slack variables and z): ");
	scanf("%d",&cols);
	printf("\n");
	
	printf("Please enter the number of equations: ");
	scanf("%d",&rows);
	
	
	array = (float**)malloc(rows*sizeof(int*));
	for(r=0;r<rows;r++){
		array[r] = (float*)malloc(cols*sizeof(float));
	}
	
	for(r=0;r<rows;r++){
		printf("Please enter coefficients of equation %d: \n",r+1);
		for(c=0;c<cols;c++){
			scanf("%f",&array[r][c]);
		}





	}
	
	
	
	
	
	
    	printArray(array,rows,cols);
    	
    	printf("\n");
	
		
		
		/*printf("%d,%d,%f",positionOfMostNegative,rowsSmallest,pivotingElement);*/
	
	
	
	
	
	
	
	optimalityStatus = optimalityCheck(array,rows,cols);


while(optimalityStatus == 0){
		
		positionOfMostNegative = indexOfMostNegativeElement(array,rows,cols);
		
		rowsSmallest = rowSmallestRatio(array,rows,cols,positionOfMostNegative);
		pivotingElement = array[rowsSmallest][positionOfMostNegative];
		
	
		
		/*pivoting the row that wins the smallest ratio test*/
		for (c = 0;c<cols;c++){
			
			array[rowsSmallest][c] = array[rowsSmallest][c] / pivotingElement;
			
	
	
	
	
		}
		
		
		pivotingElement = array[rowsSmallest][positionOfMostNegative];
		/*pivoting for another rows*/
		for (r=0;r<rows;r++){
			
							if(r == rowsSmallest)
								continue;
								
							else{
								
								difference = (-1.0 * array[r][positionOfMostNegative])/ pivotingElement;
								
								for(c=0;c<cols;c++){
									array[r][c] = array[rowsSmallest][c]*difference + array[r][c];
								}
								
								
							}
			
			
		
		
		
		}
		
		
		printf("\n");
		printArray(array,rows,cols);
		
		optimalityStatus = optimalityCheck(array,rows,cols);
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
	
}









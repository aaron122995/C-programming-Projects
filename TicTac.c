#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define SIZE 3
#define USERTOKEN 1
#define CEETOKEN 2

/* define the ADT for the board */
struct boardRecord {
	char board[SIZE][SIZE];
};

/* This function clear the board */
void clearBoard(struct boardRecord* boardrec){
	
	int i,j;
	for(i=0;i<SIZE;i++){
		
		for(j=0;j<SIZE;j++){
		  (*boardrec).board[i][j] = 0;	
		}
	}	
}

/* This function plays the board */

void printBoard(struct boardRecord* boardrec){
	
	int row;
	int col;
	
	
	for(row=0;row<SIZE;row++){
		for(col = 0 ; col < SIZE ; col++){
			
			switch(boardrec->board[row][col]){
			  case USERTOKEN:
			  	             printf("O");
			  	
			  	             break;
			  case CEETOKEN:
			  	     
			  	             printf("X");
			  	             break;
			  	             
			  default:  
			                printf(".");
			}
			
		}
		
		
	    printf("\n");
	}
}

/* this function prompts and reads from user move.

   this function checks whether the entered move is out of range, and whether a token is already placed
   
   
*/



void userMove(struct boardRecord* boardrec) {
	
	int row,col;
	int converted;
	while(1) {
	  fflush(stdin);
	  printf("Please enter you move (row col):");
	  converted = scanf("%d %d",&row,&col);
	  
	  if(converted != 2) {
	  	
	    printf("please enter integers for the row and column\n");
	    continue;
	  }
	  
	  if(row < 0 || row >= SIZE || col < 0 || col>= SIZE){
	  	  printf("Invalid move - outside range. please try again\n");
	  	  continue;
	  }
	  
	  if(boardrec->board[row][col] != 0){
	  	printf("Invalid move - already occupied. Please try again\n");
	  	continue;
	  }
		
	  boardrec->board[row][col] = USERTOKEN;
	  return;
	}

}

/* this function simulates that the computer makses a move
   Cee is not smary and just plays the token randomly */
   
void ceeMove(struct boardRecord* boardrec){
  
  int row,col;
  while(1){
  	row = rand() % 3;
  	col = rand() % 3;
  	
  	if(boardrec->board[row][col] != 0){
  	  continue;	
	}
	
	printf("Cee moves %d %d\n", row,col);
	boardrec->board[row][col] = CEETOKEN;
	return;
  	  	
  }

}

int isWin(struct boardRecord* boardrec, int player){
	
	int row,col;
	/* checking horizontal direction */
	for(row = 0;row<SIZE;row++){
		
		for(col = 0 ; col < SIZE ;col++){
			
			if(boardrec->board[row][col] == player){
			  if(col == SIZE -1){
			  	return 1;
			  }
			  else
			    continue;	
			}
			
			
		    break;
			
		}
	}
	
	/* check the vertical direction */
	
	for(col = 0 ; col < SIZE ; col++){
		
		for(row = 0 ; row < SIZE ; row ++){
		  if(boardrec->board[row][col] == player){
		    if(row == SIZE - 1){
		    	return 1;
			}
			else
			  continue;
		  }
		  break;		
		}	
	}
	
	/* check for diagonal direction */
	
   for(row = 0 ; row < SIZE ; row++){
     if(boardrec->board[row][row] == player){
     	
     	if(row == SIZE - 1)
     	  return 1;
     	  
     	else
     	  continue;
     	
     	
	 }
	 break;
   }
   

   
   for(row = 0 ; row < SIZE ; row++){
   	  
     if(boardrec->board[row][SIZE - row - 1] == player){
   	    if(row == SIZE - 1)
		   return 1;	
   	  	else
   	  	   continue;
	  }
	  
	  break;
   }
   
   
	
   return 0; /* if not win */
	
	
	
}
/*
int AllOccupied(struct boardRecord* boardrec) {

  int i;
  int j;
  
  for(i=0;i<SIZE;i++){
    
    for(j=0;j<SIZE;j++){
    	
      if(boardrec->board[i][j] == 0) {
      	
      	return 0;
    
	  }	
    	
    }
  }
  return 1;
}

int isDraw (struct boardRecord* boardrec) {
	
	if(AllOccupied(boardrec) && !isWin(boardrec,USERTOKEN) && !isWin(boardrec,CEETOKEN)){
		
		return 1;
	}
	return 0;
	
} */

int isDraw(struct boardRecord* board){
	
	int i;
	int j;
	
	for(i=0;i<SIZE;i++){
	  
	  for(j=0;j<SIZE;j++){
	    if(board->board[i][j] == 0){
	    	return 0;
		}
	  	
	  }		
	}
	
	return 1;
	
	
	
}

int main(){
	struct boardRecord board;
	int turn;
	int winComp = 0;
	int winUser = 0;
	char playAgain;
	
	srand(time(NULL));
	clearBoard(&board);
    
    printf("Welcome to the tic tac toe game!\n");
    turn = rand() % 2;
    /* if turn = 0 user first else computer first */
    
    while(1) {
    	
    	printBoard(&board);
    	switch (turn) {
    		case 0: 
    		       userMove(&board);
    		       turn = 1;
    		
    		       break;
    		       
    		       
    	    case 1: 
    	           ceeMove(&board);
    	           turn = 0;
    	           break;
		}
		
		if(isWin(&board,USERTOKEN) || isWin(&board,CEETOKEN)){
			
		  if(isWin(&board,USERTOKEN)) {
		  	printf("User Wins! \n");
		  	winUser++;
		  	
		  }
		  else if(isWin(&board,CEETOKEN)){
		  	printf("Computer Wins! \n");
		  	winComp++;
		  }	
		}
		
		else if(isDraw(&board)){
			
			printf("The game is a draw!\n");
				
		}
		else {
			continue;
		}
		
		printf("User Score : %d,Comp Score : %d",winUser,winComp);
		
		printf("\nDo you want to play again ?\n");
		fflush(stdin);
		playAgain = getchar();
		
		if(toupper(playAgain) == 'Y'){
			clearBoard(&board);
			continue;
		}
		else{
			break;
		}
		
		
    	
	}
    
	return 0;
	
	
	
	
}







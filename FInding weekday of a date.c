/*
	Name: Finding weekday of an input date
	Copyright: LI Chung Hei
	Author: LI Chung Hei
	Date: 24/09/19 14:34
	Description: This program finds out the weekday of any date input by the user.
*/

#include<stdio.h>
int dayspassed(int day,int month,int year){
	int d = day;
	int i;
	int daysOfMonth;
	
	
		for(i=1;i<month;i++){
								switch(i){
											case 2:
												
												
												if(year % 400 == 0||(year%4==0 && year%100 !=0)){
													
																daysOfMonth = 29;
												
												
												}
												
												else{
													daysOfMonth = 28;
												}
												
															
												break;
												
												
											case 4:
											case 6:
											case 9:
											case 11:
												
												daysOfMonth = 30;
												break;
												
											default:
												daysOfMonth = 31;	
										}				
								d += daysOfMonth;										
							}
	
	return d;
}


int main(void){
	int year;
	int month;
	int day;
	int sum;
	
	
	 printf("Please enter the date (dd/mm/yyyy): ");
	 scanf("%d/%d/%d",&day,&month,&year);
	 printf("The date you enter is: %d/%d/%d \n",day,month,year);
	 
	 sum = (year-1) + (year-1)/4 - (year - 1)/100 + (year-1)/400 + dayspassed(day,month,year);
	 
	 
	 switch(sum%7){
	 				case 0:
	 					printf("The date is a Sunday");
	 					break;
	 					
	 				case 1:
	 					printf("The date is a Monday");
	 					break;
	 					
	 				case 2:
	 					printf("The date is a Tuesday");
	 					break;
	 					
	 					
	 				case 3:
	 					printf("The date is a Wednesday");
	 					break;
	 					
	 				case 4:
	 					printf("The date is a Thursday");
	 					break;
	 					
	 				case 5:
	 						printf("The date is a Friday");
	 						break;
	 						
	 				case 6:	
							printf("The date is a Saturday");
	 						break;
	 	
	 	
	 	
	 	
	 	
	 }
	 
	 
	 return 0;
	 
	 
	 
	 	
	
}

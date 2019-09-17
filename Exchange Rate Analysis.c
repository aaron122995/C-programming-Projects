# include <stdio.h>
/*
	Author: LI Chung Hei
	Date: 17/09/19 09:54
	Description: The foreign exchange for the UK pound sterling £ is volatile due to Brexit. We can write a
    simple program to analyze the the closing rate for each day for a period.
    
	Write a program. The program should first read the
    period of analysis (number of days). Then the program should read the closing exchange rate
    of 1 UK pound sterling to US$ of each day. The program should finally print the following  results:


1. Average exchange rate within the period.
2. Highest rate for 1 UK £ to USD.
3. Lowest rate for 1 UK £ to USD.
4. Number of days with the closing exchange rate higher than the previous day.
5. Number of days with the closing exchange rate lower than the previous day.
6. Number of days with big change to the exchange rate, which is defined as the closing
7. exchange rate differed from the previous day by more than 2 percent (both up and down)
*/

int main (){
	int lengthOfPeriod;
	int month;
	float sum;
	float average;
	float max ;
	float min ;
	float rate;
	int countOfHigherThanPrevious;
	int countOfLowerThanPrevious;
	int countOf2PercentDiff;
	float previousRate;
	
	printf("Enter length of the analysis period of UK sterling (days) : ");
	scanf("%d",&lengthOfPeriod);
	
	month = 1;
	sum = 0;
	max = -1000000;
	min = 1000000;
	countOfHigherThanPrevious = 0;
	countOfLowerThanPrevious = 0;
	countOf2PercentDiff = 0;
	previousRate = 0;
	
	while (month <= lengthOfPeriod){
		
		printf("Enter the exchange rate of 1 UK sterling to USD at day %d close: ",month);
		fflush(stdin);
		scanf("%f", &rate);
	
		if (rate > previousRate){ 
					countOfHigherThanPrevious++;
					if(rate > (previousRate*0.02+previousRate)){
						countOf2PercentDiff++;
		}
					
		
		
								}
	
		else if (rate < previousRate){
						countOfLowerThanPrevious++;
						
						if(rate < (previousRate*0.02-previousRate)){
						countOf2PercentDiff++;
						}
		
		}
		
		sum = sum + rate;
		
		if(rate > max){
			max = rate;
		}
		
		if(rate < min){
			min = rate;
		}
	
		previousRate = rate;
		month++;
		
	}
	
	average = sum / lengthOfPeriod;
	printf("Average rate in the period: %f USD for 1 sterling\n",average);
	printf("Maximum rate is %f (USD for 1 sterling)\n",max);
	printf("Minimum rate is %f (USD for 1 sterling)\n",min);
	printf("Number of days higher than previous day: %d\n",countOfHigherThanPrevious - 1);
	printf("Number of days lower than previous day: %d\n",countOfLowerThanPrevious);
	printf("Number of days differed from previous day more than 2 percent: %d",countOf2PercentDiff);
	
	return 0;
	
	
	
	
	
	
	
}

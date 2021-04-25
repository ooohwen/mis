#include<stdio.h>
#include<math.h>
int main(){
	//declare 
	int start, end;
	int num, sum, r, temp1, temp2, count;

	//input and store
	printf("Input the start number:");
	scanf("%d", &start);
	printf("Input the end number:");
	scanf("%d", &end);
	
	//output
	printf("The Armstrong numbers within the given range:");
	
	//calculate
	for(num = start; num <= end; num++){
		
		count = 0;
		temp1 = num;
		temp2 = num; //use temp to store num and prevent the value of num from being change
		sum = 0; //set sum == 0
		
		while(temp1 > 0){
			temp1 = temp1 /10;
			count++; //count digit
		}
		
		while(temp2 > 0){
			r = temp2 % 10;
			sum = sum + pow(r, count);
			temp2 = temp2 /10;
		}
		
		//check
		if(sum == num){
			printf("%d ", num); //if sum is equal to num, the number is armstrong number. 
		}	
	}
	
	return 0;
	
}
	

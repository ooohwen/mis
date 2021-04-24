#include<stdio.h>

void reverseNum(int num);

int main(){
	int num;
	
	printf("Input the number: "); //input
	scanf("%d", &num);
	
	printf("The reverse number: ");
	reverseNum(num);
	
}

//recursive form
//reverse and make 9's complement
void reverseNum(int num){
	if(num < 10){ 
		printf("%d", 9 - num); 
	}
	else{
		printf("%d", 9 - num % 10);
		reverseNum(num / 10);
	}
}

#include<stdio.h>

void reverseNum(int num);

int main(){
	int num;
	printf("Input the number: ");
	scanf("%d", &num);
	
	printf("The reverse number: ");
	reverseNum(num);
	
}

void reverseNum(int num){
	if(num<10){
		printf("%d", 9 - num);
	}
	else{
		printf("%d", 9- num % 10);
		reverseNum(num / 10);
	}
}

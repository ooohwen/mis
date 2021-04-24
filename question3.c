#include<stdio.h>

int listSumOfPrimePairs(int k);
int isPrime(int i);

int main(){
	int num;
	printf("Input the number: "); //input
	scanf("%d", &num);
	listSumOfPrimePairs(num); //call function 
	return 0;
}

int isPrime(int i){ //check whether the number is prime number
	int notprime = 0;
	int j;
	for(j = 2; j < i; j++){
		if(i % j == 0){
			notprime++; //If it isn't prime number, the value of notprime != 0.
		}
	}
	return notprime;
}

int listSumOfPrimePairs(int k){
	int i;
	if(k % 2 != 0 || k < 8){ //The condition of input
		printf("k must be an even number and >= 8");
	}
	else{
		for(i = 2; i <= k / 2; i++){
			if(isPrime(i) == 0 && isPrime(k-i) == 0){ //If the two numbers are prime number
				printf("%d = %d + %d\n", k, k-i, i);
			}
		}
	}
}

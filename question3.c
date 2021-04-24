#include<stdio.h>

int listSumOfPrimePairs(int k);
int isPrime(int i);

int main(){
	int num;
	printf("Input the number: ");
	scanf("%d", &num);
	listSumOfPrimePairs(num);
	return 0;
}

int isPrime(int i){
	int notprime = 0;
	int j;
	for(j = 2; j < i; j++){
		if(i % j == 0){
			notprime++;
		}
	}
	return notprime;
}

int listSumOfPrimePairs(int k){
	int i;
	if(k==2 || k%2!=0 || k<8){
		printf("k must be an even number and >= 8");
	}
	else{
		for(i = 2; i <= k/2; i++){
			if(isPrime(i) == 0 && isPrime(k - i) == 0){
				printf("%d = %d + %d\n", k, k - i, i);
			}
		}
	}
}
	
		
		
		
	


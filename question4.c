#include<stdio.h>

int freqTrans(char str[]);

int main(){
	
	printf("Input a string:");
	char str[100];
	scanf("%s", str);
	
	printf("a -> b, Frequency: %d", freqTrans(str));
	
}

int freqTrans(char str[]){
	int i = 0;
	int count = 0;
	while(str[i] != '\0'){
		if(str[i] == 'a' && str[i+1] == 'b'){
			count++;
		}
		i++;
	}
	return count;
}

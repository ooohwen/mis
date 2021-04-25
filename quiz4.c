#include<stdio.h>

void reverse(char input[]);

int main()
{
	char input[20]; //declare
	printf("Please input:"); //print
	scanf("%[^\n]s", input);
	
	reverse(input); //call function
	
	return 0;
}

void reverse(char input[]){
	//declare
	int i; 
	int count = 0;
	char output[20];
	
	while(input[count] != '\0') //count the number of indexes
	{
		count++;  
	}

	for(i=0; i<count; i++){
		output[i]=input[count-1-i]; //reverse the array
		
	}	
	
	printf("Input is %s\n", input); 
	printf("Output is %s\n", output); 
}

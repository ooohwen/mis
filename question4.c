#include<stdio.h>

void freqTrans(char *);

int main()
{
	printf("Input a string:");
	char str[100]={};
	scanf("%s", str);
	freqTrans(str); //call function
} 

void freqTrans(char *str)
{
	//declare
	char first_letter, second_letter;
	int i;
	int count=0;
	int max=0;
	
	while(*str != '\0')
	{

		for(i = 0; *(str+i+1) != '\0'; i++) 
		{
			if(*str == *(str+i) && *(str+1) == *(str+i+1)) //if they are the same
			{
				count++; //how many times
			}
		}
		
		if(count > max)
		{
			//store
			max = count;
			first_letter = *str; 
			second_letter = *(str+1);
		}
		count = 0;
		str++; //to next letter
		
	}
	printf("%c -> %c, Frequency: %d", first_letter, second_letter, max);
}

#include<stdio.h>

void freqTrans(char *);

int main()
{
	printf("Input a string:");
	char str[100]={};
	scanf("%s", str);
	freqTrans(str);
} 

void freqTrans(char *str)
{
	int first_letter, second_letter;
	int count=0;
	int i=1;
	int max=0;
	
	while(*str != '\0')
	{

		for(i=1; *(str+i)!='\0' && *(str+i+1)!='\0'; i++)
		{
			if(*str == *(str+i) && *(str+1) == *(str+i+1))
			{
				count++;
			}
		}
		
		if(count>max)
		{
			max = count;
			first_letter = *str;
			second_letter = *(str+1);
		}
		str++;
		
	}
	printf("%c -> %c, Frequency: %d", first_letter, second_letter, max);
}

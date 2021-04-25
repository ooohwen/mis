#include<stdio.h>

int wordCount(char *);
int isLetter(char c)
{
	if(c>='A'&& c<='Z' || c>='a'&& c<='z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	//declare
	char s[]="There are 6 words in the sentence.";
	int sentence; //pointer

	printf("Input: %s\n", s); 
	printf("Total %d words in the sentence.\n", wordCount(s)); //print
	
	return 0;
	
}

int wordCount(char *sentence){
	//count words in the sentence
	int i, count=0;
	
	for(i = 0; sentence[i] != '\0'; i++)
	{	
		if(isLetter(sentence[i]) && !isLetter(sentence[i+1]))
		{
			count++;
		}
		
	}
	return count;
}


#include<stdio.h>

int longesWord(char *);
int isLetter(char);

int main(){
	//declare
	char s[]="There are 6 words in the sentence.";
	int sentence; //pointer
	
	//print
	printf("Input: %s\n", s); 
	//printf("\"%s\" is the longest word in the sentence.\n", longesWord(s));
	printf("Position of the word: %d\n", longesWord(s));
}

int longesWord(char *sentence){
	int lettercount = 0, wordcount = 0;
	int max_lettercount = 0, max_lettercount_position = 0;
	int i;
	char the_longest_word[40];

	while(*sentence != '\0'){
		while(isLetter(*sentence) && *sentence !=' '){
			lettercount++;
			sentence++;
		}
		if(lettercount > 0){
			wordcount++;
		}
		
		if(lettercount > max_lettercount){
			
			max_lettercount = lettercount;
			max_lettercount_position = wordcount;
			
			for(i = 0; i < max_lettercount; i++){
				the_longest_word[i] = *(sentence-1-lettercount);
				lettercount--;
			}
		}
		sentence++;
	}
	printf("\"%s\" is the longest word in the sentence.\n", the_longest_word);
	return max_lettercount_position;
	}
	

int isLetter(char c){
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
		return 1;
	}
	else{
		return 0;
	}
}


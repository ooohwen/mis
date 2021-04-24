#include<stdio.h>

int longesWord(char *);
int isLetter(char);

int main(){
	//declare
	char s[]="There are 6 words in the sentence.";
	
	//print
	printf("Input: %s\n", s); 
	printf("Position of the word: %d\n", longesWord(s));
}

int longesWord(char *sentence){
	//declare and initiallize
	int lettercount = 0, wordcount = 0; //count letters and words
	int max_lettercount = 0, max_lettercount_position = 0;
	int i;
	char the_longest_word[40]={}; //string for storing the longest word

	while(*sentence != '\0'){
		while(isLetter(*sentence) && *sentence !=' '){ //if it is letter and isn't space
			lettercount++; //count letters
			sentence++; //to next letter
		}
		if(lettercount > 0){
			wordcount++; //count words
		}
		
		//find max_lettercount word and its position
		if(lettercount > max_lettercount){
			
			max_lettercount = lettercount;
			max_lettercount_position = wordcount;
			
			for(i = 0; i < max_lettercount; i++){
				the_longest_word[i] = *(sentence-lettercount); //store
				lettercount--;
			}
		}
		sentence++; //to next letter
		lettercount = 0; //initiallize
	}
	printf("\"%s\" is the longest word in the sentence.\n", the_longest_word);
	return max_lettercount_position;
	}
	
//check whether the character is letter or not
int isLetter(char c){
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
		return 1;
	}
	else{
		return 0;
	}
}


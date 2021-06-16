#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *file;
	char str1[]="money";
	char str2[10] = {};
	int count = 0;
	
	file = fopen("hw2_q1.txt", "a+");
	
	while(!feof(file)){
		fscanf(file,"%s",str2);
		
		if(strcmp(str1,str2)==0){
			count++;
		}
	}
	
	fprintf(file, "\nThe number of the times of the word \"%s\": %d time(s)", str1, count);
	
	fclose(file);
	return 0;
}

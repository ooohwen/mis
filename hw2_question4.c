#include<stdio.h> 
#include<stdlib.h>
struct data{
	char name[15];
	char Class[15];
	int score;
};
int main(){
	FILE *file;

	int num;
	printf("Welcome, enter choice:\n");
	printf("1 to input new grades,\n");
	printf("2 to print out all records in current file\n");
	printf("-1 to leave.\n");
	printf("?");
	scanf("%d", &num);
	int i = 0;
	int count = 0;
	int yn = 1;
	
	if((file = fopen("grade.txt", "a+")) != NULL){
		struct data student[30];
		
		while(num != -1){
			printf("Your selection: %d\n", num);
			if(num == 1){
				while(yn == 1){
					count++;
					
					printf("You're inputting grades currently.\n");
					printf("Please enter student's name: ");
					scanf("%s", &student[i].name);
					printf("Please enter the student's class: ");
					scanf("%s", &student[i].Class);
					printf("Please enter the student's score: ");
					scanf("%d", &student[i].score);
					printf("%d record has been added.\n", count);
					
					fprintf(file,"%-8s%-8s%-8d\n", student[i].name, student[i].Class, student[i].score);
					
					i++;
					
					printf("Would you like to add new records? 1 to yes, 0 for no.\n");
					scanf("%d", &yn);
				}
			
				printf("Leaving the function...\n");
				printf("Welcome, enter choice:\n");
				printf("1 to input new grades,\n");
				printf("2 to print out all records in current file\n");
				printf("-1 to leave.\n");
				printf("?");
				scanf("%d", &num);	
			}
			
			else if(num == 2){
				int j;
				printf("There are %d students(s):\n", count);
				for(j = 1; j <= count; j++){
					printf("%s %s %d\n", student[j-1].name, student[j-1].Class, student[j-1].score);
				} 
				printf("Welcome, enter choice:\n");
				printf("1 to input new grades,\n");
				printf("2 to print out all records in current file\n");
				printf("-1 to leave.\n");
				scanf("%d", &num);
				
			}
			else{
				printf("Please enter a valid number.");
			}
		}
		printf("Your selection: %d\n", num);
		printf("Good Bye!\n");
	}
	fclose(file);
	return 0;
} 

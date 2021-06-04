#include<stdio.h>
struct data{
	char name[15];
	char Class[15];
	int score;
};
int main(){
	struct data student[30];
	int num;
	printf("Welcome, enter choice:\n");
	printf("1 to input new grades,\n");
	printf("2 to print out all records in current file\n");
	printf("-1 to leave.\n");
	scanf("%d", &num);
	int i = 0;
	int count = 0;
	
	while(num != -1){
		printf("Your selection: %d\n", num);
		if(num == 1){
			count++;
			printf("You're inputting grades currently.\n");
			printf("Please enter student's name: ");
			scanf("%s", &student[i].name);
			printf("Please enter the student's class: ");
			scanf("%s", &student[i].Class);
			printf("Please enter the student's score: ");
			scanf("%d", &student[i].score);
			printf("%d record has been added.\n", count);
			
			i++;
			
			int yn;
			printf("Would you like to add new records? 1 to yes, 0 for no.\n");
			scanf("%d", &yn);
			if(yn == 1){
					
			}
			else if(yn == 0){
				printf("Leaving the function...\n");
				printf("Welcome, enter choice:\n");
				printf("1 to input new grades,\n");
				printf("2 to print out all records in current file\n");
				printf("-1 to leave.\n");
				scanf("%d", &num);
			}
		}
		
		else if(num == 2){
			int j;
			printf("There are %d students(s):\n", count);
			for(j = 1; j <= count; j++){
				printf("%s %s %d\n", student[j-1].name, student[j-1].Class, student[j-1].score);
				printf("Welcome, enter choice:\n");
				printf("1 to input new grades,\n");
				printf("2 to print out all records in current file\n");
				printf("-1 to leave.\n");
				scanf("%d", &num);
			}
		}
		else{
			printf("Please enter a valid number.");
		}
	}
	printf("Your selection: %d", num);
	printf("Good Bye!");
} 

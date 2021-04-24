#include<stdio.h>

int printseat(int *);
int bubblesort(int *);

int main(){
	//declare
	int seating[]={99,0,31,0,42,70,67,0,0};
	int seat, ID;
	
	printseat(seating); //call function to print initial seat
	
	printf("Please input the seat(1~10) and 2-digit number(0 to end game)\n"); //input
	scanf("%d %d", &seat, &ID);
	
	while(seat != 0 && ID != 0){ //if there is empty seat and the ID is correct
		
		if(seating[seat-1] == 0){
			seating[seat-1] = ID; //fill in his/her ID
			printseat(seating);
		}
		else{ 
			puts("Sorry, seat is taken.");
			scanf("%d %d", &seat, &ID);
			continue;
		}
		printf("Please input the seat(1~10)\n"); //input again
		scanf("%d %d", &seat, &ID);
	
	}
	bubblesort(seating);
	printseat(seating);
}

int printseat(int *seating){
	int i;
	puts("*seating*");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", seating[i]);
	}
	puts("\n*********");
}


int bubblesort(int *seating){
	int pass, i, j;
	for(pass = 0; i < 9; pass++){
		for(i = 0; i < 9; i++){
			j = i + 1;
			if(seating[i] == 0) //skip 0
				continue; 
			}
			while(seating[j] == 0){ //skip 0
				j++;
			}
			if(seating[i] > seating[j]){ //swap
				int temp = seating[i];
				seating[i] = seating[j];
				seating[j] = temp;
			}
		}
}	


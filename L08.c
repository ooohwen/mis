#include<stdio.h>

struct bankAccount{
	int id;
	char name[10];
	int balance;
};

int main(){
	struct bankAccount data[5];
	
	//store data and print initial data
	int i;
	for(i=0; i<5; i++){
		printf("Please enter user%d's id, name and its balance.\n", i+1);
		scanf("%d %s %d", &data[i].id, &data[i].name, &data[i].balance);
		printf("\n");
	}
	
	printf("\n\nThere are five users in our bank.\n\n");
	printf("ID User_name balance\n");
	for(i=0; i<5; i++){
		printf("%-2d %-9s %-7d\n", data[i].id, data[i].name, data[i].balance);
	}
	
	//input 1, 2, 3
	int num;
	while(num != 3){
		printf("\nEnter request:\n");
		printf("1 --- to deposit\n");
		printf("2 --- to withdraw\n");
		printf("3 --- show users in our bank.\n?");
		scanf("%d", &num);
		if(num == 1){
			deposit(data);
		}
		else if(num == 2){
			withdraw(data);
		}
	}
	
	printf("\n\nThere are five users in our bank.\n\n");
	printf("ID User_name balance\n");
	for(i=0; i<5; i++){
		printf("%-2d %-9s %-7d\n", data[i].id, data[i].name, data[i].balance);
	}

}

void deposit(struct bankAccount data[]){
	int id, amount=0;
	int i=0;
	
	printf("Enter the user's id and the amount you want to deposit.\n");
	scanf("%d %d", &id, &amount);
	while(id != data[i].id){
		i++;
	}
	
	data[i].balance += amount;

}

void withdraw(struct bankAccount data[]){
	int id, amount=0;
	int i=0;
	
	printf("Enter the user's id and the amount you want to withdraw.\n");
	scanf("%d %d", &id, &amount);
	while(id != data[i].id){
		i++;
	}
	
	if(data[i].balance >= amount){
		data[i].balance -= amount; 
	}
	else{
		printf("Warning : %s's balance is not enough!\n", data[i].id);
	}
}



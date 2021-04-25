#include<stdio.h>
int main(){
	//declare
	int num; //store input number
	int i, j; //topline and baseline
	int sum; 
	int count; //how many set(s)
	
	//input
	printf("Please input a number:\n");
	scanf("%d", &num);
	
	//caulculate
	for(i=1; i<num; i++){
		for(j=1; j<num; j++){
			sum = ((i+j)*(j-i+1))/2; //trapezoid fomula
			if(sum == num){
				printf("%d to %d\n", i, j); //print topline and baseline
				count++;
			}
		}
	}
	printf("Total %d set(s) of %d.", count, num);
	return 0;

} 

#include<stdio.h>
int main(){
	//declare
	int a, b, c, sum, count=1; //initialize
	printf("Enter three positive numbers. Enter 0 to quit \n:"); //input
	scanf("%d %d %d", &a, &b, &c);
	sum = a*a + b*b;
	
	while(count != 0){
		if(a==0 || b==0 || c==0){
			count = 0;
			printf("Goodbye.");
			return 0;
		}
		else{
				if(a<0 || b<0 || c<0){
					count++;
					printf("Please enter positive numbers.\n\n");
					printf("Enter three positive numbers. Enter 0 to quit \n:");
					scanf("%d %d %d", &a, &b, &c);
					sum = a*a + b*b;
				}
				else{
					if(sum == c*c){
						printf("This is a right triangle.\n\n");
						count = 0;
						
						printf("Enter three positive numbers. Enter 0 to quit \n:");
						scanf("%d %d %d", &a, &b, &c);
						sum = a*a + b*b;
						count++;
						
					}
					else{
						printf("This is not a right triangle.\n\n");
						count = 0;
						
						printf("Enter three positive numbers. Enter 0 to quit \n:");
						scanf("%d %d %d", &a, &b, &c);
						sum = a*a + b*b;
						count++;
						
					}	
				}
				
		}	
	}

} 

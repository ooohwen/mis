#include<stdio.h>
#include<stdlib.h>

struct listNode{
	char data;
	struct listNode *nextPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value){
	ListNodePtr newPtr;
	ListNodePtr previousPtr;
	ListNodePtr currentPtr;
	
	newPtr = malloc(sizeof(ListNode));
	
	if(newPtr != NULL){
		newPtr->data = value;
		newPtr->nextPtr = NULL;
		
		previousPtr = NULL;
		currentPtr = *sPtr; 
		
		while(currentPtr != NULL && value > currentPtr->data){
			previousPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}
		if(previousPtr == NULL){
			newPtr->nextPtr = *sPtr;
			*sPtr = newPtr;
		}
		else{
			previousPtr->nextPtr = newPtr;
			newPtr->nextPtr = currentPtr;
		}	
	}	
}

void printList(ListNodePtr currentPtr){
	printf("Oringinal Linked List: ");
	while(currentPtr != NULL){
		printf("%c--> ", currentPtr->data);
		currentPtr = currentPtr->nextPtr;
	}
	
	puts("NULL\n");
} 

void printRevList(ListNodePtr sPtr){

	ListNodePtr currentPtr = sPtr;
	
	if(currentPtr!=NULL){
		printRevList(currentPtr->nextPtr);
		printf(" <--%c", currentPtr->data);
	}
	else{
		printf("NULL");
	}
	

}
		
int main(){
	ListNodePtr startPtr = NULL;
	insert(&startPtr, 'a');
	insert(&startPtr, 'b');
	insert(&startPtr, 'c');
	
	printList(startPtr);

	printf("Reverse Linked List: ");
	printRevList(startPtr);
		
} 

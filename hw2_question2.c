#include<stdio.h>

struct listNode{
	char data;
	struct ListNode *nextPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void printList(ListNodePtr currentPtr){

	printf("Oringinal Linked List: ");
			
	while(currentPtr != NULL){
		printf("%c-->", currentPtr->data);
		currentPtr = currentPtr->nextPtr;
	}
	
	puts("NULL\n");
} 


void printRevList(ListNodePtr *sPtr){

	ListNodePtr previousPtr = NULL;  
	ListNodePtr currentPtr = *sPtr;
	ListNodePtr precedingPtr = (*sPtr)->nextPtr;
	
	while(precedingPtr != NULL){
		currentPtr = previousPtr; // 把current->next轉向
		previousPtr = currentPtr; // previous往後挪
		currentPtr = precedingPtr->nextPtr; // current往後挪
		precedingPtr = precedingPtr->nextPtr; // preceding更新成NULL即跳出while loop
	}
	currentPtr->nextPtr = previousPtr; // 此時current位於最後一個node, 將current->next轉向
	*sPtr = currentPtr;          // 更新first為current
	printf("Reverse Linked List: ");
	printList(currentPtr);
	
}

int main(){
	ListNodePtr startPtr;
	startPtr->data = 'a';
	startPtr->nextPtr->data = 'b';
	startPtr->nextPtr->nextPtr->data = 'c';
	
	printList(startPtr); 
		
} 

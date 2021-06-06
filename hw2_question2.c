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
		currentPtr = previousPtr; // ��current->next��V
		previousPtr = currentPtr; // previous���ᮿ
		currentPtr = precedingPtr->nextPtr; // current���ᮿ
		precedingPtr = precedingPtr->nextPtr; // preceding��s��NULL�Y���Xwhile loop
	}
	currentPtr->nextPtr = previousPtr; // ����current���̫�@��node, �Ncurrent->next��V
	*sPtr = currentPtr;          // ��sfirst��current
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

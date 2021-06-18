#include<stdio.h> 
#include<stdlib.h>

struct Node{
	char data;
	struct Node *connected[27];
	int number;
	int order;
};

void displayConnectedNode(struct Node *node){
	int i;
	printf("Nodes connected to %c:\n", node->data);
	for(i=0; node->connected[i] != NULL ;i++){
		printf("%c ", node->connected[i]->data);
	}
	printf("\n");
}

void Connect(struct Node *node1, struct Node *node2)
{	
	node1->connected[node1->number++] = node2;
	node2->connected[node1->number++] = node1;	
}

int isConnected(struct Node *node1, struct Node *node2){
	int i = 0;
	node1->order++;
	
	while(node1->connected[i] != NULL && node1->connected[i]->data != node2->data){
		if(node1->connected[i]->order  == 0){
			if(isConnected(node1->connected[i], node2)){
				return 1;
			}
		}
		i++;
	}
	if(node1->connected[i] != NULL){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	struct Node a = {'a'};
	struct Node b = {'b'};
	struct Node z = {'z'};
	struct Node g = {'g'};
	struct Node h = {'h'};
	struct Node f = {'f'};
	struct Node x = {'x'};
	struct Node y = {'y'};
	
	struct Node *network[] = {&a, &b, &z, &g, &h, &f, &x, &y};
	
	Connect(&a, &b); 
	Connect(&b, &g);
	Connect(&b, &z);
	Connect(&g, &h);
	Connect(&y, &x);
	Connect(&y, &f);
	
	displayConnectedNode(&b);
	displayConnectedNode(&y);
	
	printf("Is \"%c\" and \"%c\" connected? : %s\n", a.data, h.data, isConnected(&a, &h)? "Yes":"No");
	
	int i = 0;
	while(i<8){
		network[i]->order = 0;
		i++;
	}
	
	printf("Is \"%c\" and \"%c\" connected? : %s\n", x.data, a.data, isConnected(&x, &a)? "Yes":"No");
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

//1
typedef struct node{
	int value;
	struct node *next;
}node;

//2
struct node *headNode, *currentNode, *temp;


//3
void insertAtBegin(int number){
	struct node *newNode;
	newNode = (node *)malloc(sizeof(node)); 
	newNode->value = number;
	newNode->next = headNode;
	headNode = newNode;
}






int main(){
	int length,i;

	//4
	printf("Enter size of the list : ");
	scanf("%d",&length);
	

	//5
	for(i=0 ; i<length; i++){ 
		//6 
		currentNode = (node *)malloc(sizeof(node)); 
		
		//7
		printf("Enter element %d : ",(i+1)); scanf("%d", &currentNode->value);

		//8
		if(i==0){
			headNode = temp = currentNode;
		}else{
			//9
			temp->next = currentNode;
			temp = currentNode;
		}
	}

	//10
	temp->next = NULL;

	//11
	temp = headNode;

	//12
	printf("Iterating through the elements of the linked list : \n");
	while(temp != NULL){
		//13
		printf("%d \n",temp->value);
		temp = temp -> next;
	}

	// calling function for adding new nodes
	insertAtBegin(6008);
	insertAtBegin(997);
	insertAtBegin(439);
	insertAtBegin(1087);
	

	//14 initializing iteration 
	temp = headNode;

	printf("Iterating through the elements of the linked list after insert : \n");
	while(temp != NULL){
		//15
		printf("%d \n",temp->value);
		temp = temp -> next;
	}


}
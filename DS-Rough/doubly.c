#include <stdio.h>
#include <stdlib.h>

/* structure representing a node of the doubly linked list */
struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
};

struct dnode *head = NULL;

void append(int);
void addatbeg(int);
void remov(int);
void display();
void removeatbeg();
void endremov();
int main()
{
    int n, ch;
    do
    {
        printf("\n\nOperations on doubly linked list");
        printf("\n1. Append \n2. Add at beginning \n3. Remove\n4. Display\n0. Exit\n");
        printf("\nEnter Choice 0-4? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                append(n);
                break;
            case 2:
                printf("\nEnter number: ");
                scanf("%d", &n);
                addatbeg(n);
                break;
            case 3:
            	printf("\nEnter number to delete: ");
                scanf("%d", &n);
                remov(n);
                break;
            case 4:
                display();
                break;
            case 5:
                removeatbeg();
                break;
            case 6:
                endremov();
                break;
        }
    }while (ch != 0);
}

/* adds a new node at the end of the doubly linked list */
void append(int num)
{
    struct dnode *nptr,  *temp = head;

    /*create a new node */
    nptr = malloc(sizeof(struct dnode));
    nptr->data = num;
    nptr->next = NULL;
    nptr->prev = NULL;

    /* if the linked list is empty */
    if (head == NULL)
    {
        head = nptr;
    } 
    else
    {
        /* traverse the linked list till the last node is reached */
        while (temp->next != NULL)
            temp = temp->next;

        nptr->prev = temp;
        temp->next = nptr;
    }
}

/* adds a new node at the begining of the linked list */
void addatbeg(int num)
{
    struct dnode *nptr;

    /* create a new node */
    nptr = malloc(sizeof(struct dnode));

    /* assign data and pointer to the new node */
    nptr->prev = NULL;
    nptr->data = num;
    nptr->next = head;

    if (head != NULL)
        head->prev = nptr;
    head = nptr;
}


void removeatbeg()
{   
    if(head==NULL){
        printf("List is empty");
    }
    else
    {
    struct dnode *nptr,  *temp = head;
    nptr=temp->next;
    head=nptr;
    temp->prev=NULL;
    temp->next=NULL;
    }

}

void endremov()
{
if(head==NULL){
        printf("List is empty");
    }
else
    {
    struct dnode *nptr,  *temp = head;
    while (temp->next != NULL)
            temp = temp->next;
    nptr=temp->prev;
    nptr->next=NULL;
    temp->prev=NULL;

    }


}

/* deletes the specified node from the doubly linked list */
void remov(int num)
{
    struct dnode *temp = head;

    /* traverse the entire linked list */
    while (temp != NULL)
    {
        /* if node to be deleted is found */
        if (temp->data == num)
        {
            /* if node to be deleted is the first node */
            if (temp == head)
            {
                head = head->next;
                head->prev = NULL;
            } 
            else
            {
                /* if node to be deleted is the last node */
                if (temp->next == NULL)
                    temp->prev->next = NULL;
                else
                /* if node to be deleted is any intermediate node */
                {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                free(temp);
            }
            return ; /* return back after deletion */
        }
        temp = temp->next; /* go to next node */
    }
    printf("\n%d not found.", num);
}

/* displays the contents of the linked list */
void display()
{
	struct dnode *temp = head;
    printf("\n");

    /* traverse the entire linked list */
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    } 
}
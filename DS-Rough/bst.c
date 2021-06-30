#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};
struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node* root)
{
    if (root != NULL)
        {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

void search(struct node* root,int t)
{   
    int d=t;
    if (root != NULL)
        {
          if(root->key!=t)
          {
           search(root->left,t);
           search(root->right,t);
          }
          else{
            printf("element found");
           }
    }
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}


int main()
{
    struct node* root = NULL;
    int d,j,n,r,p;
    printf("The elements in the binary search tree are:\n");
    printf("Enter the Number to be added:");
    scanf("%d",&n);
    printf("Enter the root node");
    scanf("%d",&r);
    root = insert(root, r);
    for(j=1;j<n;j++)
    {
        printf("Enter the Element");
        scanf("%d",&d);
        insert(root,d);

   }
    inorder(root);
    printf("Enter the element to be search:");
    scanf("%d",&p);
    search(root,p);

    return 0;
}
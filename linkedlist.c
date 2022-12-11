#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void insert(struct Node** head, int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

int calcSize(struct Node* node){
    int size=0;

    while(node!=NULL){
        node = node->next;
        size++;
    }
    return size;
}

void insertPosition(int pos, int data, struct Node** head)
{
    int size = calcSize(*head);

    //If pos is 0 then should use insertStart method
    //If pos is less than 0 then can't enter at all
    //If pos is greater than size then bufferbound issue
    if(pos < 0 || size < pos) 
    { 
        printf("Can't insert, %d is not a valid position\n",pos); 
    } 
    else 
    { 
        struct Node* temp = *head; 
        struct Node* newNode = (struct Node*) 
        malloc(sizeof(struct Node)); 
        newNode->data = data;
        newNode->next = NULL;

        for(;--pos;)
        {
            temp=temp->next;
        }
        //(25)->next = 10 as 12->next is 10 
        newNode->next= temp->next;
        // (12)->next = 25
        temp->next = newNode;
        //new node added in b/w 12 and 10
    }
}
void insertend(struct Node** head, int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    
    if(*head==NULL){
        *head = new_node;
        return;
    }

    struct Node* temp = *head;

    while(temp->next!=NULL)
        temp = temp->next;

    temp->next = new_node;
}
void delete(struct Node** head, int key)
{
    struct Node *temp = *head , *prev;
    if(temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL)
    {
        return;
    }
        prev->next = temp->next;
        free(temp);
}

void printL(struct Node *node){
    if (node == NULL){
        printf("the list is empty");
        return;
    }
 
    while(node != NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");  

}
int main()
{
    int x,y,c;
    struct Node *head = NULL;
    // printf("Enter how many number you want to insert\n");
    // scanf("%d",&x);
    insert(&head,19);
    insert(&head,15);
    insert(&head,98);
    insertend(&head,90);
    insertend(&head,88);
    insertPosition(1,33,&head);
    printL(head);
    printf("Enter no. which you want to delete\n");
    scanf("%d",&c);
    delete(&head,c);
    // for(int i=0;i<x;i++)
    // {
    //     printf("Enter the node\n");
    //     scanf("%d",&y);
    //     insert(&head,y);
    // }
        printL(head);
}
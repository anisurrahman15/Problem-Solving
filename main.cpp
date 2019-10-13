/*Anisur Rahman
Batch: 52
Dept Of cse DIU */
#include<bits/stdc++.h>
typedef struct mylist
{

    int data;
    struct mylist *next;

} node;
// Insert Last
void insert_last(node *temp, int data)
{
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = (node*) malloc(sizeof(node));
    temp->next->data = data;
    temp->next->next = NULL;
}


void inserthead(node *temp, int data)
{
    node* s = temp->next;
    temp->next = (node*) malloc(sizeof(node));
    temp->next->data = data;
    temp->next->next = s;
}



void display(node *temp)
{
    while(temp->next != NULL)
    {
        printf("%d ", temp->next->data);
        temp = temp->next;
    }
    printf("\n");
}



void search(node *temp, int data)
{
    int count = 0;
    while(temp->next != NULL)
    {
        if(temp->next->data == data)
        {
            count++;
        }
        temp = temp->next;
    }
    printf("Total %d results found\n", count);
}




void deleteNode(node *temp, int data)
{
    while(temp->next != NULL)
    {
        if(temp->next->data == data)
        {
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;

    }
}



void deletehead(node *temp)
{
    temp->next = temp->next->next;

}


void deleteLast(node *temp)
{
    while(temp->next != NULL)
    {
        if(temp->next->next == NULL)
        {
            temp->next = NULL;
            break;
        }
        temp = temp->next;
    }


}


void insertAfter(node *temp, int search, int data)
{
    while(temp->next != NULL)
    {
        if(temp->next->data == search)
        {
            node *tempstore = temp->next->next;
            temp->next->next = (node*) malloc(sizeof(node));
            temp->next->next->data = data;
            temp->next->next->next = tempstore;
            break;
        }
        temp = temp->next;
    }
}
void reverse(node* temp)
{
    node * current,*next,*prev;
   current=temp->next;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    temp->next=prev;
}



void countNode(node *temp)
{
    int count = 0;
    while(temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("Total %d nodes found.\n", count);
}




int main()
{
    node *head = (node*) malloc(sizeof(node));
    head->next = NULL;


    printf("======Inserting data At_last=========\n");
    insert_last(head, 4);
    insert_last(head, 5);
    insert_last(head, 7);
    insert_last(head, 8);

    display(head);


    printf("======Inserting data at the frst=========\n");
    inserthead(head, 3);
    display(head);
    printf("======Inserting data After Nth Data=========\n");
    insertAfter(head,5,6);
     display(head);

    printf("======Deleting Nth Data=========\n");
      deleteNode(head,8);
 display(head);
     printf("======Deleting last  Data=========\n");
    deleteLast(head);

    display(head);


    printf("======Deleting head Data=========\n");
    deletehead(head);

    display(head);
        printf("======Inserting data At_last=========\n");
        insert_last(head, 7);
    insert_last(head, 8);
     display(head);
        printf("======Reverse link list Iterative method =========\n");
reverse(head);
display(head);



}

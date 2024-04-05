#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;

void insertnode(int data)
{
    struct node* new = NULL;
    new = (struct node *)malloc(sizeof(struct node*));
    new->data = data;
    new->next = head;
    head = new;
}

void printlist(struct node* n)
{
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n = n->next;
    }
}

int main()
{
    insertnode(1);
    insertnode(2);
    insertnode(3);
    insertnode(4);
    insertnode(5);
    insertnode(6);
    printlist(head);
}

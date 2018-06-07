#include <stdlib.h>
#include "test.h"

/*
* Testing a function that will add new data too a doubly linked list.
/**/
struct node* add_data(char* data)
{
    struct node* head = NULL;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = data;
    new_node -> next = head;
    head = new_node;
    return new_node;
}
/*
* function to find a node via it's data
/**/
struct node* find_data(char* data)
{
    
}
/*
* function to delete a node
/**/
void rm_data(struct node node)
{

}
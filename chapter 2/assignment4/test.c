/*
* Testing using opaque types.
* Apperantly defining types in a seperate implementation file makes the struct type Opaque
/**/
struct dimension
{
    double position;
};
/*
* Testing structs that use structs
/**/
struct vector
{
    struct dimension position;
    double delta;
};
/*
* Testing a singly linked list
/**/
struct node
{
    char* data;
    struct node* next;
};
/*
* Testing a function that will add new data too a doubly linked list.
/**/
node* add_data(char* data)
{
    struct node* head = NULL;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = data;
    new_node -> next = head;
    head = new_node;
    return new_node;
}

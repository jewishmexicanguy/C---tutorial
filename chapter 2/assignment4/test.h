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
* Declaring an opaque type
/**/
struct node
{
    char* data;
    struct node* next;
};
/*
* Declare a function that will operate our struct
/**/
struct node* add_data(char* data);
/*
* Declare a function to search through our linked list, searching via data
/**/
struct node* find_data(char* data);
/*
* Declare a function delete a node in our linked list, searching via data 
/**/
void rm_data(struct node node);
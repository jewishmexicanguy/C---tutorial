/*
* Declaring opaque type
/**/
struct dimension;
/*
* Declaring opaque type
/**/
struct vector;
/*
* Declaring opaque type that will be self refferential
/**/
struct node;
/*
* Declare a function that will operate our struct
/**/
node* add_data(char* data);
/*
* Declare a function to search through our linked list, searching via data
/**/
node* find_data(char* data);
/*
* Declare a function delete a node in our linked list, searching via data 
/**/
void rm_data(int data);
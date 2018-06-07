#include <stdio.h>
#include <stdlib.h>
#include "test.h"

/*
* example struct
/**/
struct point2d
{
    float x;
    float y;
};
/*
* example union
/**/
union vector2d
{
    float x;
    float y;
};
/*
*
/**/
enum element
{
    Earth,
    Wind,
    Fire,
    Water
};
/*
* main function
/**/
int main() 
{
    /* making a struct /**/
    struct point2d a = {0};
    a.x = 1.0;
    a.y = 1.0;
    /* conjuring a struct pointer /**/
    struct point2d* point_ptr = malloc(sizeof(struct point2d));
    printf("This point is at x: %d, y: %d\n", a.x, a.y);
    /* making a union /**/
    union vector2d av = {0};
    /* making a list /**/
    struct node* head = NULL;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = "Important things here!";
    new_node -> next = head;
    new_node -> prev = head;
    head = new_node;
    

}
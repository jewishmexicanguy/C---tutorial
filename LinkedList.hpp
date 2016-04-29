//
//  LinkedList.hpp
//  
//
//  Created by Herzon Flores on 4/29/16.
//
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
// List items are keys with pointers to the next item.
struct Item
{
    string key;
    Item *next;
};

/////////////////////////////////////////////////////////////////////////////////////////////////
// Linked lists store a variable number of items.
class LinkedList
{
    private:
        // Head is a reference to a list of data nodes
        Item *head;
        // Length is the number of data nodes
        int length;
    public:
        // Constructor
        LinkedList();
    
        // Insert an item to the end of the list.
        void insertItem(Item *newItem);
    
        // Remove an item from the list by item key.
        bool removeItem(string itemKey);
    
        // Searches for an item by it's key.
        Item *getItem(string itemKey);
    
        // Display list contents
        void printList();
    
        // Return length of list
        int getLength();
    
        // Destructor
        ~LinkedList();
};

#endif /* LinkedList_hpp */

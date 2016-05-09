//
//  HashTable.hpp
//  
//
//  Created by Herzon Flores on 4/29/16.
//
//

#ifndef HashTable_hpp
#define HashTable_hpp
#include "LinkedList.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

class HashTable
{
    private:
    
        LinkedList *array;
    
        int length;
    
        int hash(string itemKey);
    
    public:
    
        // Constructor, default length of 13.
        HashTable(int tableLength = 13);
    
        void insertItem(Item *newItem);
    
        bool removeItem(string itemKey);
    
        Item *getItemByKey(string itemKey);
    
        void printTable();
    
        void printHistogram();
    
        int getLength();
    
        int getNumberOfItems();
    
        // Destructor
        ~HashTable();
};

#endif /* HashTable_hpp */

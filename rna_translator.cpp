#include "rna_translator.h"
using namespace std;
/***************************************************************************************************************
 * In this file you see an example of how to define class interfaces inside of this C++ code file.
 *
 * This allows you to define objects that can be reused in other C++ files and is one of the core concepts in
 *
 * object oriented programming (OOP). C++ is all about OOP,
 */

// Here we implement the constructor.
TAmine::TAmine() 
{
    
}

// Here we implement the translator method.
char TAmine::translate(char a)
{
    if (a == 'A') { return 'A'; }
    else if (a == 'C') { return 'C'; }
    else if (a == 'T') { return 'U'; }
    else { return 'G'; }
}

// Here we implement the translate_Gene method.
string TAmine::translate_Gene(string gene)
{
    string translation = "";
    int length = gene.size();
    for (int i = 0; i < length; i++)
    {
        translation = translation + translate(gene[i]);
    }
    return translation;
}

// Here we should implement a destructor but I don't know how to yet.
#ifndef TAMINE_H
#define TAMINE_H
#include <iostream>
using namespace std;
/***************************************************************************************************************
 * In this file you see an example of how to define class interfaces inside of this C++ header file.
 *
 * This allows you to define objects that can be reused in other C++ files and is one of the core concepts in
 *
 * object oriented programming (OOP). C++ is all about OOP,
 */

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This is how to define a class interface,
//
// It is the same as defining a class with the exception that the class methods, constructor and destructor
//
// implementations are not written out here. Here the function names and the parameters that they can accept
//
// can be defined.
class TAmine
{
    // Access modifier, exposes functions defined here to be called by the code that is invoking this object.
    public: 
        // Class constructor
        TAmine();
        // This method will accept a string that is a sequence of DNA bases and it will return a string that is
        //
        // a sequence of amino acids.
        string translate_Gene(string gene);
    // Access modifier that only allows the functions defined here to be called by methods of this class.
    private:
        // This method accepts a string that represents a codon, it returns a string that is an amino acid.
        char translate(char a);
};

#endif
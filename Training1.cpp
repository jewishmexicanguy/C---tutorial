#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// To write a function in C++ you must tell the compiler what kind of
//
// data type will be returned by the function, in the case below it is
//
// of type "void". This is because it returns no data to line or object
//
// that invokes this function. You then contunue by writting the name
//
// of the function followed by open and closed parenthesis. In the 
//
// parenthsis you declare variables that are the parameters that a 
//
// function will accept at invocation. The body of the function is 
//
// written within the curly brackets {}.
//
// Example 1:
//
//      void foo(int bar){bar = bar + 10; cout << bar << endl;}
//
// Example 2:
//      void foo(int bar) {
//          bar = bar + 10;
//          cout << bar << endl;
//      }
// Example 3:
//      void foo(int bar)
//      {
//          bar = bar + 10;
//          cout << bar << endl;
//      }
//
// Like all preffesional level computation languages C++ does not care 
//
// about white space characters in your code. As such it is common practice
//
// to use this freedom of white space characters to make code readable and
//
// neat. I use the third approach in my code. The general idea behind it is
//
// each statement gets it's on line except when the declarations require a 
//
// lot of paramteters in which case it can be good to give each parameter 
//
// it's own indented line. This makes things easier to read.
//
// Example:
//  foo(
//      arg1, 
//      arg2, 
//      arg3, 
//      arg4, 
//      arg5, 
//      argN, 
//      argN+1, 
//      ....
//   );
//

//////////////////////////////////////////////////////////////////////////////
// Important note you want to define anything you are going to be using before
//
// you invoke it in your code or the compiler will complain at you.
//
// This function will be used in function main().
void synthGenes(int a, string *ptr)
{
    for (int i = 0; i < a; i++)
    {
        ptr[i] = "ACTG";
    }
}

///////////////////////////////////////////////////////////////////////////////
// In C++ there is always a main() function that initiates all computation, it
//
// is a throwback to the age of assembly level programming and the origination 
//
// address used to initialize the computation procedure.
int main()
{
    string stars = "************************************************";
    cout << stars << endl;
    cout << "Commencing operation" << endl;
    //////////////////////////////////////////////////////////////////
    // Here we are exploring array an pointer declarations
    //
    // Arrays are declared thus
    //
    //      type name[number of items to be in array] = {n,n+1,n+2,...}
    //
    //      where n is a singular thing of type, name is the name you 
    //
    //      are giving the variable.
    //
    string genes[10];
    ///////////////////////////////////////////////////////////////////
    //  Here we are exploring pointer declariotion
    //
    //  In this example theis pointer is pointing to the string array we 
    //
    //  defined a few lines above.
    //
    string *ptr_genes = &genes[0];
    ///////////////////////////////////////////////////////////////////
    //  This is valid
    //
    //     string *ptr_genes = genes; 
    //
    //  As is this, except that this I belive makes a pointer array 
    //
    //  where each pointer points to 
    //
    //  a value on the string array.
    //
    //      string (*ptr_genes)[10] = &genes;
    ////////////////////////////////////////////////////////////////////
    // Here we are invoking our previously defined function and passing
    //
    // it an integer of 10 and a pointer to a string array.
    //
    // This function call modifies the contents of the string array using
    //
    // the string array pointer, the actual array is not passed to the 
    //
    // function but. This is important to note because this is a feature
    //
    // of C++ called computation by side effect. Using pointers we can 
    // 
    // directly manipulate memory locations that hold variable definitions.
    synthGenes(10, ptr_genes);
    cout << "Printing out some four character long DNA sequences" << endl;
    for (int i = 0; i < 10; i++)
    {
        // here we print out the values of this string array by accessing them in a loop.
        cout << "\t " << i << " : " << genes[i] << endl;
    }
    return 0;
}
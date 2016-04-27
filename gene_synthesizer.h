#ifndef SYNTH_GENE_H
#define SYNTH_GENE_H

#include <random>
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

///////////////////////////////////////////////////////////////////////////////
// This function will return an "A", "C", "T" or "G" at random when it is invoked.
string createStrain()
{
    // Apperantly this initializes a seed for the random number generator to work.
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> uni(1, 4);
    auto random_integer = uni(rng);
    // now test the result of our random number and return a value based on what it is.
    if (random_integer == 1) { return "A"; }
    else if (random_integer == 2) { return "C"; }
    else if (random_integer == 3) { return "T"; }
    else { return "G"; }
    // You can save space like this with an if statement chain, however do be aware
    //
    // that it is significantly harder to read. I would recomend one lining each if..else
    //
    // statement unless they are very small operations such as these.
}

//////////////////////////////////////////////////////////////////////////////
// Important note you want to define anything you are going to be using before
//
// you invoke it in your code or the compiler will complain at you.
//
// This function will be used in function main().
void synthGenes(int a, string *ptr)
{
    //////////////////////////////////////////////////////////////////////////
    // Here we can see how to use a for loop.
    //
    // There are three statements in this for loop.
    //
    // 1. the initial constraint of your counter that is the current loop step.
    //
    // 2. the stop constraint, think of this as the maximum number of steps.
    //
    // 3. an action that is done every step, used to increment your counter.
    
    for (int i = 0; i < a; i++)
    {
        string gene = "";
        // Here we can see we use a secondary loop inside of the first.
        //
        // This inner loop will fire 12 times for every 1 time the outer loop is run.
        for(int k = 0; k < 12; k++)
        {
            gene = gene + createStrain();
        }
        ptr[i] = gene;
        // we know that createStrain() has been run a total of 12 times at this point.
    }
    // we know that createStrain() has been run (a * 12) times.
}

#endif
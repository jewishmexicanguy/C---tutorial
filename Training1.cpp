#include <iostream>
// The next #include line below shows how to include functions defined 
// in another file and tell this file that it may use functions them.
#include "gene_synthesizer.h"
#include "rna_translator.h"
using namespace std;

///////////////////////////////////////////////////////////////////////////////
// In C++ there is always a main() function that initiates all computation, it
//
// is a throwback to the age of assembly level programming and the origination 
//
// address used to initialize the computation procedure.
int main()
{
    // Let the user know that the program has started.
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
    //  where each pointer points to a value on the string array.
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
    /*
    cout << "Printing out some four character long DNA sequences" << endl;
    for (int i = 0; i < 10; i++)
    {
        // here we print out the values of this string array by accessing them in a loop.
        cout << "\t " << i << " : " << genes[i] << endl;
    }
    */
    string gene = "";
    for (int i = 0; i < 10; i++)
    {
        gene = gene + genes[i];
    }
    cout << "\tGene synthesized : ["<< gene <<"]" << endl;
    
    
    TAmine *amino;
    amino = new TAmine();
    string rna = amino->translate_Gene(gene);
    
    cout << "\tMRNA Transliterated : ["<< rna <<"]" << endl;
    
    // let the user know that the program has concluded
    cout << "Operation Concluded" << endl;
    cout << stars << endl;
    return 0;
}
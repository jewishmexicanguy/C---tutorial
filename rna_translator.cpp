#include "rna_translator.h"

TAmine::TAmine() 
{
    
}

char TAmine::translate(char a)
{
    if (a == 'A') { return 'A'; }
    else if (a == 'C') { return 'C'; }
    else if (a == 'T') { return 'U'; }
    else { return 'G'; }
}

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
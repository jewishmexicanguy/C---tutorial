//
//  protien_translator.cpp
//  
//
//  Created by Herzon Flores on 4/27/16.
//
//

#include "protien_translator.h"

using namespace std;

TProtien::TProtien()
{

}

string TProtien::translate(string a)
{
    char pos1 = a[0];
    char pos2 = a[1];
    char pos3 = a[2];
    
    // define logical progression if codon begins with Adosenine
    if (pos1 == 'A')
    {
        if (pos2 == 'A')
        {
           if ((pos3 == 'A') or (pos3 == 'G'))
           {
               return "Lysine";
           }
           else if ((pos3 == 'C') or (pos3 == 'T'))
           {
               return "Asparagine";
           }
        }
        else if (pos2 == 'G')
        {
            if ((pos3 == 'A') or (pos3 == 'G'))
            {
                return "Arginine";
            }
            else if ((pos3 == 'C') or (pos3 == 'T'))
            {
                return "Serine";
            }
        }
        else if (pos2 == 'C')
        {
            return "Threonine";
        }
        else if (pos2 == 'T')
        {
            if (pos3 == 'G')
            {
                return "(start)-> Methionine";
            }
            else
            {
                return "Isolucine";
            }
        }
    }
    // define logical progression if codon begins with Cyanine
    else if (pos1 == 'C')
    {
        if (pos2 == 'A')
        {
            if ((pos3 == 'A') or (pos3 == 'G'))
            {
                return "Glutamine";
            }
            else if ((pos3 == 'C') or (pos3 == 'T'))
            {
                return "Histidine";
            }
        }
        else if (pos2 == 'G')
        {
            return "Arginine";
        }
        else if (pos2 == 'C')
        {
            return "Proline";
        }
        else if (pos2 == 'T')
        {
            return "Leucine";
        }
    }
    // define logical progression if codon begins with Guanine
    else if (pos1 == 'G')
    {
        if (pos2 == 'A')
        {
            if ((pos3 == 'A') or (pos3 == 'G'))
            {
                return "Glutamic acid";
            }
            else if ((pos3 == 'C') or (pos3 == 'T'))
            {
                return "Aspartic acid";
            }
        }
        else if (pos2 == 'G')
        {
            return "Glycine";
        }
        else if (pos2 == 'C')
        {
            return "Alanine";
        }
        else if (pos2 == 'T')
        {
            return "Valine";
        }
    }
    // define logical progression if codon begins with Thyamine
    else if (pos1 == 'T')
    {
        if (pos2 == 'A')
        {
            if ((pos3 == 'A') or (pos3 == 'G'))
            {
                return "Stop <-(End)";
            }
            else if ((pos3 == 'C') or (pos3 == 'T'))
            {
                return "Tyrosine";
            }
        }
        else if (pos2 == 'G')
        {
            if ((pos3 == 'T') or (pos3 == 'C'))
            {
                return "Cysteine";
            }
            else if (pos3 == 'G')
            {
                return "Tryptophan";
            }
            else if (pos3 == 'A')
            {
                return "Stop <-(End)";
            }
        }
        else if (pos2 == 'C')
        {
            return "Serine";
        }
        else if (pos2 == 'T')
        {
            if ((pos3 == 'G') or (pos3 == 'A'))
            {
                return "Leucine";
            }
            else if ((pos3 == 'C')(pos3 == 'T'))
            {
                return "Phenylalanine";
            }
        }
    }
}

string TProtien::translate_RNA(string rna)
{
    string rna_mirror = "";
    int count = rna.size();
    for (int i = 0; i < count; i++)
    {
        if(rna[i] == 'U')
        {
            rna_mirror = rna_mirror + 'A';
        }
        else if (rna[i] == 'A')
        {
            rna_mirror = rna_mirror + 'T';
        }
        else if (rna[i] == 'G')
        {
            rna_mirror = rna_mirror + 'C';
        }
        else if (rna[i] == 'C')
        {
            rna_mirror = rna_mirror + 'G';
        }
    }
    // now that we have converted the base paris to what will connect to them we invoke the private
    //
    // method of this class to translate it into a sequence of amino acids.
    
}

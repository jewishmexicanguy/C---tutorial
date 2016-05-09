#ifndef TPROTIEN_H
#define TPROTIEN_H
#include <iostream>
using namespace std;

class TProtien
{
    public:
    
        TProtien();
    
        string translate_RNA(string rna);
    
    private:
    
        string translate(string a);
};

#endif
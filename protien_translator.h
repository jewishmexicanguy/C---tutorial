#ifndef TPROTIEN_H

class TProtien
{
    public:
    
        TProtien();
    
        string translate_RNA(string rna);
    
    private:
    
        string translate(string a);
}

#endif
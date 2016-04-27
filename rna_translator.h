#ifndef TAMINE_H
#define TAMINE_H

using namespace std;

class TAmine
{
    public: 
    
        TAmine();
        
        string translate_Gene(string gene);
        
    private:
    
        char translate(char a);
};

#endif
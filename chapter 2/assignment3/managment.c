#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void square(int *num) 
{ 	
    *num = *num * *num;
}  

int main() 
{ 	
    int x = 4;          // assign variable a value
    int *ptr = &x;      // assign pointer address of variable
    square(ptr); 	
    printf("%d\n", x);

    char *array = (char *)malloc(sizeof(char) * sizeof("hakuna matata!") / sizeof(char)); // the casting it turns out is unneccessary
    strcpy(array, "hakuna matata!");
    printf("copied string: %s\nlength of string: %ld\n", array, (sizeof(array)));
    return 0; 
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void foo()
{
    int data0[] = {0, 1, 2};
    int data1[3] = {0, 1, 2};
    int data2[3] = {1};
    int data3[3];
    for(int i = 0; i < 3; i++)
    {
        data3[i] = i;
    }

    printf("printing aray data0\n");
    for (int i = 0; i < (sizeof(data0) / sizeof(data0[0])); i++)
        printf("%d", data0[i]);
    printf("\n");

    printf("printing aray data1\n");
    for (int i = 0; i < (sizeof(data1) / sizeof(data1[0])); i++)
        printf("%d", data1[i]);
    printf("\n");

    printf("printing aray data2\n");
    for (int i = 0; i < (sizeof(data2) / sizeof(data2[0])); i++)
        printf("%d", data2[i]);
    printf("\n");

    printf("printing aray data3\n");
    for (int i = 0; i < (sizeof(data3) / sizeof(data3[0])); i++)
        printf("%d", data3[i]);
    printf("\n");
}

void bar()
{
    char *ptr;
    char str[10];
    ptr = str;
    ptr = &str[0]; // same thing as line above
}

void fiz()
{
    char str1[14];
    strcpy(str1, "hakuna ");
    strcat(str1, "matata");
    printf("string concatonation: %s\n", str1);
}

void buz()
{
    char *str = (char *)malloc(1 * sizeof(char));
    strcpy(str, "hi");
    printf("string copy to malloced memory: %s\n", str);

    str = (char *)realloc(str, 1 * sizeof(char)); // shouldn't this cause some kind of problem? It's too small.
    strcpy(str, "hello");
    printf("string copy to realloced memory: %s\n", str);

    free(str);
    printf("memory freed\n");
}

void fet()
{
    char *str = "some string of characters";
    char *dynamic_array;
    dynamic_array = malloc(sizeof(char) * (sizeof(str)/sizeof(char)));
    strcpy(dynamic_array, str);
    printf("string size: %ld\nstring: %s\n", sizeof(dynamic_array), dynamic_array);
    free(dynamic_array);
}
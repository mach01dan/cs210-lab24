#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

typedef struct CadetInfoStruct {
    char firstname[50];
    char lastname[50]; 
    int age;
    int squad;
    int year;
} CadetInfoStructType;

int getNumRecs(char fname[]);

void getDataText(CadetInfoStructType cinfo[], int numRecs, char fname[]);




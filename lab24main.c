#include <stdio.h>
#include "lab24functs.h"

int main() {

CadetInfoStructType cinfo[121];

char fname[100];
scanf("%s", fname);

//malloc(60 * sizeof(CadetInfoStructType));


int NumRecs = getNumRecs(fname);
printf("Reading number of records in the data file.\n");
printf("%d records in the data file.\n", NumRecs);

printf("The first cadet is:\n");
printf("%s  --test-- \n", cinfo[1].name);
printf("%d --test-- \n", cinfo[1].age);
printf("%d  --test-- \n", cinfo[1].year);


//printf("The last cadet is:\n");
getDataText(cinfo, NumRecs, fname);



//malloc() statements




    return 0;
}
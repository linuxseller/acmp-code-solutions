#include <stdio.h>
#include <stdlib.h>

int main(){
    int troiniks, sum_holes;
    sum_holes = 0;
    scanf("%d", &troiniks);
    int *holes = (int*)malloc(troiniks*sizeof(int));

    for(int i=0; i<troiniks; i++){
        scanf("%d", &holes[i]);
        sum_holes += holes[i]; 
    }

    int answ = sum_holes + 1 - troiniks;
    printf("%d\n", answ);
    return 0;
}

#include <stdio.h>

int main(){
    int in;
    scanf("%d", &in);
    printf("%d", ((in>0)?in:-in)*(1+in)/2);
    return 0;
}

#include <stdio.h>

int main(){
    char l, n;
    scanf("%c%c", &l, &n);
    puts((!((l+n)%2))?"BLACK":"WHITE");
    return 0;
}

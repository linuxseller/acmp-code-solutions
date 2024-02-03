#include <stdio.h>

int main(){
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    for(;n!=1;n--){
        int tmp = a;
        a = b - a;
        b = tmp;
    }
    printf("%d %d", a,b);
    return 0;
}

#include <stdio.h>
 
int main(){
    int a1, a2, n, d;
    scanf("%d %d %d", &a1, &a2, &n);
    d = a2-a1;
    for(int i=1; i<n; i++){
        a1+=d;
    }
    printf("%d\n", a1);
    return 0;
}

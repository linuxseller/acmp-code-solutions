#include <stdio.h>
 
int main(){
    int n, answ, sum;
    scanf("%d", &n);
    answ = 0;
    sum = 0;
    for(int i=1; sum+i<=n; i++){
        sum+=i;
        answ++;
    }
    printf("%d\n", answ);
    return 0;
}

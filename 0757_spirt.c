#include <stdio.h>

long long int min(long long int a, long long int b);

int main(){
    long long int c, h, o;
    scanf("%lld %lld %lld", &c, &h, &o);
    if(c>=2 && h>=6 && o>=1){
       printf("%lld\n", min(min(c/2, h/6), o));
    } else {
        printf("0");
    }
    return 0;
}

long long int min(long long int a, long long int b){
    return (a<b) ? a : b;
}

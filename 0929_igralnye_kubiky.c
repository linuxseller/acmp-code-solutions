#include <stdio.h>

int main(){
    long long int in;
    scanf("%lld", &in);
    printf("%lld %lld", (in%6==0) ?(in/6):(7-in%6)+in/6, 6*in);
    return 0;
}

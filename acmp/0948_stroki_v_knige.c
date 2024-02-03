#include <stdio.h>

int main(){
    int k, n;              // input
    int page_num, str_num; // output
    scanf("%d %d", &k, &n);
    page_num = n/k;
    str_num = n - (page_num*k);
    page_num = (n%k==0) ? page_num : page_num+1;
    str_num = (n%k==0) ? k : str_num;
    printf("%d %d", page_num, str_num);
    return 0;
}

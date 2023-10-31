#include <stdio.h>

int max(int a, int b);
int min(int a, int b);

int main(){
    int c1, c2, c3, v1, v2, v3;
    scanf("%d %d %d %d %d %d", &c1, &c2, &c3, &v1, &v2, &v3);
    int max_cost = max(max(c1, c2), c3);
    int min_cost = min(min(c1, c2), c3);
    int avg_cost = (c2 != max_cost && c2 != min_cost) ? c2 : (c1 != max_cost && c1 != min_cost) ? c1 : c3;
    
    int max_vase = max(max(v1, v2), v3);
    int min_vase = min(min(v1, v2), v3);
    int avg_vase = (v2 != max_vase && v2 != min_vase) ? v2 : (v1 != max_vase && v1 != min_vase) ? v1 : v3;

    printf("%d\n", max_cost*max_vase + min_cost*min_vase + avg_cost*avg_vase);

    return 0;
}

int max(int a, int b){
    return (a>b) ? a : b;
}

int min(int a, int b){
    return (a<b) ? a : b;
}

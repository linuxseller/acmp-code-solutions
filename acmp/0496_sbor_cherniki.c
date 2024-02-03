#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int *arr  = (int*)malloc(sizeof(*arr)*n);
    int mx;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    mx=arr[0]+arr[1]+arr[n-1];
    int tmp = arr[n-1]+arr[n-2]+arr[0];
    mx=(tmp>mx)?tmp:mx;
    for(int i=1;i<n-1;i++){
        tmp=arr[i]+arr[i-1]+arr[i+1];
        mx=(tmp>mx)?tmp:mx;
    }
    printf("%d", mx);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int ruler;
} Kingdome;

int main(){
    int n, x, src, dst;
    scanf("%d", &n);
    Kingdome curr = malloc(sizeof(Kingdome)*n);
    Kingdome res = malloc(sizeof(Kingdome)*n);
    for(int i=0; i<n; i++){
        curr[i].id=i+1;
        scanf("%d", &res[i].ruler);
        res[i].id=i+1;
        scanf("%d", &res[i].ruler);
    }
    scanf("%d", &x);
    for(int i=0; i<x; i++){
        scanf("%d %d", &src, &dst);
        for(int j=0;j<n;j++){
            res.dst
        }
    }
}

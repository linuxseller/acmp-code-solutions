#include <stdio.h>
#include <stdlib.h>

int c[]={1, 0, 0};

void swp(int a, int b){
    int tmp=c[a];
    c[a]=c[b];
    c[b]=tmp;
}

int main(){
    char *in=(char*)malloc(50);
    scanf("%s", in);
    for(; *in!='\0'; in+=1){
        switch(*in){
            case 'A':
                swp(0, 1);
                break;
            case 'B':
                swp(1, 2);
                break;
            default:
                swp(0, 2);
        }
    }
    int res;
    if(c[0]){res = 1;}
    if(c[1]){res = 2;}
    if(c[2]){res = 3;}
    printf("%d", res);
    return 0;
}

#include <stdio.h>

int main(){
    int am, age, sex, mx, id, i;
    mx=0;
    id=0;
    scanf("%d", &am);
    for(i=0; i<am; i++){
        scanf("%d %d", &age, &sex);
        if(!sex) continue;
        if(mx<age){
            id = i+1;
            mx=age;
        }
    }
    printf("%d\n", (id)?id:-1);
    return 0;
}

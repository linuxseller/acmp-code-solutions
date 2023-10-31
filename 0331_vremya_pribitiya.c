#include <stdio.h>
 
int main(){
    int s_hour, s_min, d_hour, d_min, rh, rm;
    scanf("%d:%d", &s_hour, &s_min);
    scanf("%d %d", &d_hour, &d_min);
    rh = (s_hour + d_hour) % 24;
    rh += (s_min+d_min >= 60) ? 1 : 0;
    rh %= 24;
    rm = (s_min + d_min)   % 60;
    printf("%02d:%02d", rh, rm);
    return 0;
}

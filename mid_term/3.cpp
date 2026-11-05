#include <stdio.h>

int main(){
    int len, data;
    scanf("%d", &len);
    int pre, now;
    scanf("%d", &pre);
    int max_cnt = 1;
    for (int cnt=1; len-1; len-=1){
        scanf("%d", &now);
        if (pre == now)
        {
            cnt += 1;
            if (cnt>max_cnt){
                max_cnt = cnt;
            }
        }
        else {
            pre = now;
            cnt = 1; 
        }
    }
    printf("%d", max_cnt);
}
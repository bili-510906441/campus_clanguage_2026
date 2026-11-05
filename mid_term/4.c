#include <stdio.h>

int verify(int n){
    int rev = 0;
    int temp = n;
    if (n<0){
        return 0;
    }
    while (temp!=0)
    {
        int digit = temp%10;
        rev = rev*10+digit;
        temp /= 10;
    }
    return n == rev;
}
int main(){
    int a;
    scanf("%d", &a);
    int sum = 0;
    int tmp = a;
    while (a){
        sum += a%10;
        a /=10;
    }
    /* Verify */
    if(verify(tmp)){
        printf("%d", sum);
    }
    else {
        printf("no");
    }
}
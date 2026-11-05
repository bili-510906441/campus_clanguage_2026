#include <stdio.h>

char* solve_200_to_400(int end,int day){
    if (day == 1){
        if (end==1||end==6){
            return "No";
        }
        else{
            return "Yes";
        }
    }
    if (day == 2){
        if (end==2||end==7){
            return "No";
        }
        else{
            return "Yes";
        }
    }
    if (day == 3){
        if (end==3||end==8){
            return "No";
        }
        else{
            return "Yes";
        }
    }
    if (day == 4){
        if (end==4||end==9){
            return "No";
        }
        else{
            return "Yes";
        }
    }
    if (day == 5){
        if (end==5||end==0){
            return "No";
        }
        else{
            return "Yes";
        }
    }
}

char* solve_more_400(int end,int day){
    int end_tmp = end % 2;
    if (day == 1|| day == 3|| day == 5){
        if (end_tmp == 1){
            return "No";
        }
        else{
            return "Yes";
        }
    }
    if (day == 2|| day == 4){
        if (end_tmp == 0){
            return "No";
        }
        else{
            return "Yes";
        }
    }
}

int main(){
    int car, day, p_index;
    int count = 0;
    scanf("%d %d %d", &car, &p_index, &day);
    int car_end = car%10;
    int t = car;
    while (t){
        count += 1;
        t /= 10;
    }
    if (day>7||day<1||p_index<0||p_index>600||car<0||count>6){
        printf("input error");
    }
    else if (day == 6||day == 7||p_index < 200){
            printf("Yes");
        }
        else if (p_index<400)
        {
            printf("%s", solve_200_to_400(car_end, day));
        }
        else {
            printf("%s", solve_more_400(car_end, day));
        }
    
}
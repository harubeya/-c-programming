#include<stdio.h>

float tasu(float x,float y);
float hiku(float x,float y);
float kake(float x,float y);

int main(void){
    int mode;
    float x,y;
    printf("モードを入力してください(1:足し算 2:引き算 3:掛け算)\n");
    scanf("%d",&mode);
    printf("一つ目数字を入力してください\n");
    scanf("%f",&x);
    printf("二つ目の数字を入力してください\n");
    scanf("%f",&y);
//if の場合
    /*
    if(mode == 1){
    printf("足し算を選択しました\n");
    printf("%f + %f = %f",x,y,tasu(x,y));
    }else if(mode == 2){
        printf("引き算を選択しました\n");
        printf("%f + %f = %f",x,y,hiku(x,y));
    }else if(mode == 3){
        printf("掛け算を選択しました\n");
        printf("%f + %f = %f",x,y,kake(x,y));
    }else{
        printf("不正なモードです。\n");
    }
*/
    //swichの場合

    switch (mode){
    case 1:
        printf("足し算を選択しました\n");
        printf("%f + %f = %f",x,y,tasu(x,y));
        break;
    case 2:
        printf("引き算を選択しました\n");
        printf("%f + %f = %f",x,y,hiku(x,y));
        break;
    case 3:
        printf("掛け算を選択しました\n");
        printf("%f + %f = %f",x,y,kake(x,y));
        break;
    default:
    printf("不正なモードです。\n");
    break;
    }
    return 0;
}

float tasu(float x,float y){
    return x + y;
}

float hiku(float x,float y){
    return x - y;
}

float kake(float x,float y){;
    return x * y;
}
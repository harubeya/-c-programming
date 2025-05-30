//長方形の面積を求める関数
#include<stdio.h>

float chohokei(float x,float y);

int main(void){
    printf("面積は%fです。\n",chohokei(5.563256,10.7));
    return 0;
}

float chohokei(float x,float y){
    float menseki;
    menseki = x * y;
    return menseki;
}
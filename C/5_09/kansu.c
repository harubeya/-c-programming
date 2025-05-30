// c言語の関数について
// 特定の処理をまとめたプログラム
#include <stdio.h>

int add(int a,int b);
int add5(int a);   //プロトタイプ宣言...リターンで返す値は整数、少数でも整数にする（切り捨て）

 int main(void) {
    printf("%d\n",add(1,2));//メイン関数は、プログラム全体で実行される関数
 }                          //私たちが作った関数は、すべてメイン関数で実行される
 
 int add (int a,int b) {
    return a + b ;
 }

 //関数はリターンを書く

 int add5(int a) {
    a = a + 5;
    return a;
 }
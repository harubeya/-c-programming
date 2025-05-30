#include<stdio.h>

int main(void){
    int A,B,D;
    char C;
    scanf("%d %d %c",&A,&B,&C);
switch (C){
case '+':
printf("%d\n",A+B);
    break;
case '-':
printf("%d\n",A-B);
    break;
case '*':
printf("%d\n",A*B);
    break;
case '/':
D = A%B;
if (D != 0){
    printf("%d\n",D);
}
else{
    printf("%d\n",A/B);
}
default:
 printf("Invalid operator");
 break;
}
}
#include<stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    if (num % 2 == 0)
    {
        printf("%dは偶数です\n",num);/* code */
    }
    else{
        printf("%dは奇数です\n",num);
    }
return 0;    
}
#include <stdio.h>

int main(void){
    int N,s=0;
    scanf("%d",&N);
    for(int i = 0 ; i <= N ; i++){
        s = s +i;
    }
    printf("%d\n",s);
    return 0;
}
#include <stdio.h>

int main() {
    int i,n,s=0 ;
    scanf("%d",&n);
    for (  i = 1; i <= n; i=i+2)
    {
        printf("%d\n",i);
        s = i + s;
    }
    printf("合計は%d\n",s);
    return 0;
}
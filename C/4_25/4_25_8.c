#include <stdio.h>

int main() {
    int i,j;
    for ( i = 1; i <= 9; i++){
        for ( j = 1; j <= 9; j++)
        {
            printf("%3d",i*j);
        }
    printf("\n");
    }
    
    return 0;
}
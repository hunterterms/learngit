#include <stdio.h>
#include <string.h>

int main() {
    int n=5;
    int i,j;
    for (i = 1; i <= n; i++) {
        for (j=4;j>=i;j--) {
            printf(" ");
        }
        for (j=1;j<2*i+1;j=j++){
            printf("*");
        }        
        printf("\n");
    }
    return 0;
    }
#include <stdio.h>

int main() {
    int i, j;

    for(i=1; i<=5; i++) {
        for(j=1; j<=i-1; j++) {
            printf("  "); 
        }
        for(j=1; j<=5-i+1; j++) {
            printf("1 "); 
        }
        printf("\n"); 
    }

    for(i=1; i<=4; i++) {
        for(j=1; j<=4-i+1; j++) {
            printf("  "); 
        }
        for(j=1; j<=i; j++) {
            printf("0 "); 
        }
        printf("\n"); 
    }

    for(i=1; i<=3; i++) {
        for(j=1; j<=i-1; j++) {
            printf("  ");
        }
        for(j=1; j<=4-i+1; j++) {
            printf("1 ");
        }
        printf("\n"); 
    }

    for(i=1; i<=2; i++) {
        for(j=1; j<=2-i+1; j++) {
            printf("  "); 
        }
        for(j=1; j<=i; j++) {
            printf("0 "); 
        }
        printf("\n");
    }

    printf("  1\n"); 

    return 0;
}

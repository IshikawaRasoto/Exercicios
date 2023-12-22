#include <stdlib.h>
#include <stdio.h>

int main(void){
    
    int a, b;
    scanf("%d %d", &a, &b);

    printf( (a + b) % 3 ? ":(" : ":)");

    return 0;

}

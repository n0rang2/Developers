#include <stdio.h>

int main(){
    int a = 0x80000000;
    int b = 0x7fffffff;
    
    printf("%d %d\n", a, b);
    return 0;
}
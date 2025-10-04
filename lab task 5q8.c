#include <stdio.h>

int main() {
    int num = 10;   // Binary=1010
    int pos = 1;    
    
    int result = num ^ (1 << pos);
    printf("Original: %d\nAfter toggle: %d\n", num, result);
}


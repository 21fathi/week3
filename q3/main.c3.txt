#include <stdio.h>
int main() {
    int x;
    int count;
    printf ("Enter num:");
    scanf ("%d",&x);
    while (x!=0) {
        count ++;
        x/=10;
    }
    printf ("num of digits=%d",count);
return 0;
}

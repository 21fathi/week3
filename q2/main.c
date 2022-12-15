#include <stdio.h>
int x=5,y=8;
void Swap(void );
int main (void ){
    printf ("init values x=%d,  y=%d",x,y);
    Swap();
    printf ("New values x=%d,  y=%d",x,y);
    return 0;
}
void Swap(void ){
    int sw;
    sw=x;
    x=y;
    y=sw;

}
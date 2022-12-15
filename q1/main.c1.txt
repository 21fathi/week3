#include <stdio.h>
int Get_max(int,int);
int main(){int n,m;
    printf("Enter number1:");
    scanf("%d",&n);
    printf("Enter number2:");
    scanf("%d",&m);
    printf ("the max number is:%d",Get_max(n,m));
    }


int Get_max(int a ,int b) {

    if (a> b) {
        return a;
    } else{
        return b;

}}
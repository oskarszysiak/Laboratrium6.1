#include <stdio.h>

int main()
{
    printf("%d ",power(5,2));
    printf("%d ",power(0,0));
}

int power(int n, int j){
    int powerzero=1;
    for(int i=0; i<j; i++){
    powerzero=powerzero*n;
    }
    return powerzero;
}

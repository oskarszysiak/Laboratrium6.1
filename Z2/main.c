#include <stdio.h>

int main()
{
countRec(5);
}

void countRec(int n){
    if(n<=0){
        return;
    }
    countRec(n-1);
    printf("%d\n", n);
}

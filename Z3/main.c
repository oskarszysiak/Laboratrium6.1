
#include <stdio.h>

int main()
{
countToZero(5);
}

void countToZero(int n){
    for(int i=n; i>=0; i--){
        printf("%d\n", i);
    }
}

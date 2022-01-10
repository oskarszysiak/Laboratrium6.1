#include <stdio.h>

int main()
{
count(5);
}

void count(int n){
    int i=1;
    while(i<=n){
        printf("%d\n", i++);
    }
}

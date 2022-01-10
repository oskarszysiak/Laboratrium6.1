#include <stdio.h>

int main()
{
    countToZero(5);
}

void countToZero(int n){
    if(n<0){
        return;
    }
    printf("%d\n", n);
    countToZero(n-1);

}

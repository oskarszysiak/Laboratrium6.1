#include <stdio.h>
#include <stdlib.h>

int main()
{
    hoctRec(6);
    return 0;
}

void hoctRec(int n){
if(n==0){
    return;
}
hoctRec(n-1);
for(int i=0; i<n; i++){
    printf("*");
}
printf("\n");
}

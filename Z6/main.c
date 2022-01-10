
#include <stdio.h>

int main()
{
    printf("%d ",powerRec(5,2));
    printf("%d ",powerRec(0,0));
}

int powerRec(int n,int p){
    if(p<=0)
    {
        return 1;
    }
    else
    {
    return n*powerRec(n, p-1);
    }
}

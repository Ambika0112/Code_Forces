#include <stdio.h>
int main()
{
    int k,n,w;
    scanf("%d %d %d", &k,&n,&w);
    
    int total = k * w * ( w+1 )/2;
    if(total-n > 0)
    printf("%d",total-n);
    else 
    printf("0");
    
}
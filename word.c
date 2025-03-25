#include<stdio.h>
int main(){
    int num,repeat;
    scanf("%d %d",&num,&repeat);
    for(int i=0;i<repeat;i++){
        if(num%10 == 0){
            num/=10;
        }
        else{
            num--;
        }
    }
    printf("%d",num);
}
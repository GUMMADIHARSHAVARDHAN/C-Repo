#include<stdio.h>
int main(){
    int b;
    scanf("%d",&b);
    for(int i=1;i<=12;i++){
        printf("%d x %d = %d\n",b,i,b*i);
    }
}
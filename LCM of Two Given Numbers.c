#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=n;i++){
        if(m*i%n==0){
            printf("%d",m*i);
            break;
        }
    }
}
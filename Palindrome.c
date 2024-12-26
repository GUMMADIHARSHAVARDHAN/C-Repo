#include<stdio.h>
int main(){
    int i,n,rev=0,a;
    scanf("%d",&n);
    int b=n;
    while(n>0){
        a = n%10;
        rev = rev*10+a;
        n = n/10;
    }
    if(rev==b){
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }         
}
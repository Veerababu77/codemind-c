#include <stdio.h>
int main(){
    int n,x=0,r=0,s=0,a=0,b=0,y=0;
    scanf("%d",&n);
    x=n*n;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    y=s*s;
    while(y!=0){
        a=y%10;
        b=b*10+a;
        y=y/10;
    }
    if(b==x){
        printf("True");
    }
    else{
        printf("False");
    }
}
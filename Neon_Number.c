#include <stdio.h>
int main(){
    int n,x=0,r=0,s=0;
    scanf("%d",&n);
    x=n*n;
    while(x!=0){
        r=x%10;
        s=s+r;
        x=x/10;
    }
    if(s==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}
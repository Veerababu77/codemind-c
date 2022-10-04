#include <stdio.h>
#include <math.h>
int main(){
    int n,s=0,k=1,r=0,c=0,x;
    scanf("%d",&n);
    x=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    while(s!=0){
        r=s%10;
        c=c+pow(r,k);
        k=k+1;
        s=s/10;
    }
    if(x==c)
    printf("True");
    else
    printf("False");
}
#include <stdio.h>
int main(){
    int n,p=1,r=0,s=0;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        n=n/10;
        p=p*r;
        s=s+r;
        
    }
    if(p==s)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}
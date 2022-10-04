#include <stdio.h>
int main(){
    int n,s=0,c=0;
    scanf("%d",&n);
    while(n!=0){
        s=n%10;
        n=n/10;
        if(c<s)
        c=s;
    }
    printf("%d",c);
}
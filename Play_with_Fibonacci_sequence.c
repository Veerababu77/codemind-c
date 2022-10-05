#include <stdio.h>
int main(){
    int n,a=0,b=1,c=0;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=0;i<n-2;i++){
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}
#include <stdio.h>
int main(){
    int n,i=1,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0)
        c=c+i;
    }
    if(c>n)
    printf("True");
    else
    printf("False");
}
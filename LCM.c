#include <stdio.h>
int main(){
    int a,b,i=2,t;
    scanf("%d %d",&a,&b);
    if(a>b)
    a,b=b,a;
    t=b;
    while(t%a!=0){
        t=b*i;
        i+=1;
    }
    printf("%d",t);
}
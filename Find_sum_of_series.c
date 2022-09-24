#include <stdio.h>
int main(){
    float n,c=0,i=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++){
    c=c+(1/i);
    }
    printf("%.2f",c);
}
#include <stdio.h>
#include <math.h>
int main(){
    float n,m,x,s,s1;
    scanf("%f%f%f",&n,&m,&x);
    s=((n+m+x)/2);
    s1=s*(s-n)*(s-m)*(s-x);
    printf("%.2f",pow(s1,0.5));
}
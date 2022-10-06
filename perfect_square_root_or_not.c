#include <stdio.h>
#include <math.h>
int main(){
    int n,t=0;
    scanf("%d",&n);
    t=pow(n,0.5);
    if((t*t)==n){
        printf("True");
    }
    else{
        printf("False");
    }
}
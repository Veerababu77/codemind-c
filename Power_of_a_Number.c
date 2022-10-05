#include <stdio.h>
#include <math.h>
int main(){
    int x,y,z,s=0;
    scanf("%d %d %d",&x,&y,&z);
    s=pow(x,y);
    printf("%d",s%z);
}
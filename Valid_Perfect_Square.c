#include <stdio.h>
#include <math.h>
int main(){
    int n,t=0,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        t=pow(x,0.5);
        if(x%t==0){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
}
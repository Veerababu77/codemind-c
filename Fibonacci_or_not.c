#include <stdio.h>
int main(){
    int n,a=0,b=1,s=0,x=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        c=a+b;
        if(c==n){
            s+=1;
            break;
        }
        else if(c>n){
            x+=1;
            break;
        }
        else{
            a=b;
            b=c;
        }
    }
    if(s==1){
        printf("True");
    }
    else if(x==1){
        printf("False");
    }
    else{
        printf("False");
    }
}
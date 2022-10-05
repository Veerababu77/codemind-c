#include <stdio.h>
int main(){
    int n,x,s=0,r=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        s=x;
        c=0;
        while(x!=0){
            r=x%10;
            x=x/10;
            c=c*10+r;
        }
        if(c==s){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
}
#include <stdio.h>
int main(){
    int n,m,c=0,i=1;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        if(n%i==0 && m%i==0){
            if(c<i){
                c=i;
            }
        }
    }
    printf("%d",c);
}
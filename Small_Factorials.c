#include <stdio.h>
int main(){
    int n,s=1,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        s=1;
        for(int i=x;i>0;i--){
            s=s*i;
        }
        printf("%d
",s);
    }
}
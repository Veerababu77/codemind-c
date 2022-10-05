#include <stdio.h>
int main(){
    int n,l[100],s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&l[i]);
    }
    for(int i=1;i<=n;i++){
        s+=l[i];
    }
    printf("%d",s);
}
#include <stdio.h>
int main(){
    int n,l[50],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    for(int j=0;j<n;j++){
        if(l[j]>=n){
            c+=1;
        }
    }
    if(c==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
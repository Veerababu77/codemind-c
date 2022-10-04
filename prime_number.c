#include <stdio.h>
int main(){
    int n,c=0,i=2;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            c+=1;
            break;
        }
    }
    if(c==1){
        printf("not a prime");
    }
    else{
        printf("prime");
    }
    
}
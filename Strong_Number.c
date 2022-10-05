#include <stdio.h>
int main(){
    int n,r=0,p=1,s=0,x=0;
    scanf("%d",&n);
    x=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        p=1;
        for(int i=1;i<=r;i++){
            p=p*i;
        }
        s+=p;
    }
    //printf("%d",s);
    if(x==s){
        printf("The number %d is a strong number",x);
    }
    else{
        printf("The number %d is not a strong number",x);
    }
}
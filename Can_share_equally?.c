#include <stdio.h>
int main(){
    int a,b,t1=0,t2=0;
    scanf("%d%d",&a,&b);
    t1=a*1;
    t2=b*2;
    if(b%2==1 && a==0){
        printf("NO");
    }
    else if((t1+t2)%2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}
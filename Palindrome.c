#include <stdio.h>
int main(){
    int r,s=0,x=0,t;
    scanf("%d",&r);
    t=r;
    while(r>0){
        x=r%10;
        s=s*10+x;
        r=r/10;
    }
//printf("%d",t);
//printf("%d",s);
if(t==s)
printf("True");
else
printf("False");
}

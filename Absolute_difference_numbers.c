#include <stdio.h>
int main(){
    int n,m,x,r=0,s=0,a=0,b=0,v=0,e=0,z=0,w=0,l=0,k=0;
    scanf("%d %d",&n,&m);
    //printf("%d %d
",n,m);
    x=n;
    for(int i=1;i<=m;i++){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    //printf("%d
",s);
    while(x!=0){
        a=x%10;
        x=x/10;
        b=b*10+a;
    }
    //printf("%d
",b);
    for(int j=1;j<=m;j++){
        v=b%10;
        e=e*10+v;
        b=b/10;
    }
    //printf("%d
",e);
    while(s!=0){
        z=s%10;
        s=s/10;
        w=w*10+z;
    }
    if((w-e)<0){
        l=(w-e)*(-1);
        printf("%d",l);
    }
    else{
        printf("%d",w-e);
    }
    
}
    

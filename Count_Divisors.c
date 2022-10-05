#include <stdio.h>
int main(){
    int x,y,z,s=0;
    scanf("%d %d %d",&x,&y,&z);
    for(int i=x;i<=y;i++){
        if(i%z==0){
            s+=1;
        }
    }
    printf("%d",s);
}
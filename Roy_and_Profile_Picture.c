#include <stdio.h>
int main(){
    int l,w,n,h;
    scanf("%d",&l);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&w,&h);
        if(w<l or h<l)
        printf("UPLOAD ANOTHER
");
        else if(w==h)
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
    }
}
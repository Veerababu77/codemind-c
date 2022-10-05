#include <stdio.h>
int main(){
    char c;
    int lv,uv;
    scanf("%c",&c);
    lv=(c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
    uv=(c=='A' or c=='E' or c=='I' or c=='O' or c=='U');
    if(lv or uv){
        printf("Vowel");
    }
    else{
        printf("Consonant");
        return 0;
    }
    
}
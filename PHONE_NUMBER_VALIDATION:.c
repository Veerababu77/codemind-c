#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    if(a.size()==10 or a[0]==9 or a[0]==8){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}
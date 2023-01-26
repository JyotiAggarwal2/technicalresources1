#include<iostream>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>0){
        k=n%10;
        cout<<k<<endl;
        n=n/10;
    }
    
    return 0;
}

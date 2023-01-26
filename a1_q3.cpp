#include<iostream>
using namespace std;

int main(){
    int t,n;
    cout<<"Enter count of input numbers"<<endl;
    cin>>t;
    for(int j=1; j<=t; j++){
        cout<<endl;
        cout<<"Enter the number \t";
        cin>>n;
        int k=0;
        for(int i=2; i<n; i++){
            if(n%i==0 || n==2){          
                k=1;
            }
        }
        if(k==1){
            cout<<"Non prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }
    }
    return 0;
}

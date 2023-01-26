#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter lower limit"<<endl;
    cin>>a;
    cout<<"Enter upper limit"<<endl;
    cin>>b;
    for(int i=a; i<=b; i++){
        int k=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                k=1;
                break;
            }
        }
        if(k==0){
            cout<<i<<"  ";
        }
    }
    return 0;
}

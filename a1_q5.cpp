#include<iostream>
using namespace std;

int main(){
    int n, k=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n!=0){
        n=n/10;
        k++;
    }
    cout<<"Number of digits in given number is "<<k<<endl;
    return 0;
}

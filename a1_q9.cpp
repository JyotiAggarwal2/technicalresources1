#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,big,small;
    cout<<"Enter one number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
    if(a>b){
        small=b;
        big=a;
    }
    else{
        big=b;
        small=a;
    }
    for(i=small;i>0;i--){
        if((a%i==0) && (b%i==0)){
            cout<<"The GCD of 2 numbers is "<<i<<endl;
            break;
        }
    }
    for(j=big;j!=0;j++){
        if((j%a==0) && (j%b==0)){
            cout<<"The LCM of 2 numbers is "<<j;
            break;
        }
    }
    return 0;
}

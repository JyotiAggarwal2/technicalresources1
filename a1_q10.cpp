#include<iostream>
using namespace std;
int main()
{
    int num,i=2;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The prime factorization is: ";
    while(i<=num){
        if(num%i==0){
            cout<<i<<" ";
            num=num/i;
        }
        else{
            i++;
        }
    }
    return 0;
}

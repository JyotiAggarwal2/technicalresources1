#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, count=1, inverse=0;
    cout<<"Enter the number including digits from 1 till the length of the number with no repeat digit"<<endl;
    cin>>n;
    while(n>0){
        int k = n%10 ;
        n=n/10;
        int i= k-1;
        int j= pow(10,i);
        inverse = inverse+ (count*j);
        count++;
    }
    cout<<"Inverse of the number is "<<inverse;
    return 0;
}

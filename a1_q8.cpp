#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,num,k,i,t,count=0;
    cout<<"Enter a number\n";
    cin>>n;
    num=n;
    cout<<"Enter no of times number is to be rotated\n";
    cin>>k;
    cout<<endl;
    while(n>0){     // to count number of digits
        n=n/10;
        count++;
    }
    for(i=1;i<=k;i++){
        t=num%10;
        num=num/10;
        num=num+ (t*pow(10,count-1));
    }
    cout<<num;
    return 0;
} 

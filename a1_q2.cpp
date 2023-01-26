#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the marks of the student "<<endl;
    cin>>marks;
    
    if(marks>=90){
        cout<<"Excellent"<<endl;
    }
    else if(marks>80 && marks<=90){
        cout<<"Good"<<endl;
    }
    else if(marks>70 && marks<=80){
        cout<<"Fair"<<endl;
    }
    else if(marks>60 && marks<=70){
        cout<<"Meets expectations"<<endl;
    }
    else{
        cout<<"Below par"<<endl;
    }
    return 0;
}

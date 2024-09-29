#include<iostream>
using namespace std;
int main (){

    int num;
    cout<<"Enter the no. :- "<<endl;
    cin>>num;

    if(num%3==0 && num%5==0){
        cout<<"The no. is divisible by both 5 and 3"<<endl; 
    }
    else{
        cout<<"The no. is not divisible"<<endl;
    }
    return 0;
}
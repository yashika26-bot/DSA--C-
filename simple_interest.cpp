#include<iostream>
using namespace std;
int main(){
    
    float principle,rate,time simple interest;
    
    cout<<"Enter the principle amount"<<endl;
    cin>>principle;

    cout<<"Enter the rate"<<endl;
    cin>>rate;

    cout<<"Enter the time"<<endl;
    cin>>time;

    simple interest = (principle*rate*time)/100;
    cout<<"simple interest ="<<simple interest;

    return 0;

}
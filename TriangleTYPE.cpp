#include<iostream>
using namespace std;
int main(){
    //taking input from the user

    int a,b,c;
    cout<<"Enter the length of side a :-"<<endl;
    cin>>a;

    cout<<"Enter the length of side b :-"<<endl;
    cin>>b;

    cout<<"Enter the length of side c :-"<<endl;
    cin>>c;

    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c){
            cout<<"An Equilateral triangle"<<endl;
        }
        else if( a=b && a!=c && b!=c){
            cout<<"An isoceles triangle"<<endl;
        }
        else{
            cout<<"An scalene triangle"<<endl
;
        }

            
        }

    }
    

    

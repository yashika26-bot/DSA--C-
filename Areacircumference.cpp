#include<iostream>
using namespace std;
int main(){

    int radius = 15;
    //circumference of circle
    float circumference = 2*3.14*radius;
    cout<<"Circumference od circle :-"<<endl;

    //Area of circle
    float area = 3.14*radius*radius;
    cout<<"Area of circle :-"<<endl;

    // which is greater(Circumference or area)
    if(circumference>area){
        cout<<"circumference is greater than area"<<endl; 
    }
    else(area>circumference){
        cout<<"area is greater than circumference"<<endl;
    }
        return 0;
     
}
    



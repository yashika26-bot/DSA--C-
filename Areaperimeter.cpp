#include<iostream>
using namespace std;
int main(){
    foat length;
    float breadth;
    length = 20;
    breadth = 10;

    //area of rectangle
    float area = length*breadth;
    cout<<"Area of rectangle :- "<<area<<endl;
    
    //Perimeter of Rectangle
    float perimeter = 2*(length+breadth);
    cout<<"Perimeter of rectangle :-"<<perimeter<<endl;

    //which is greater (area or perimeter)
    if(perimeter>area){
        cout<<"perimeter is greater than area"<<endl;
    }
    else{
        cout<<"Area is greater than perimeter"<<endl;
        
     return 0;
    }
}
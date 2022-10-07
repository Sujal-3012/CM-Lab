#include<iostream>
#include <cmath>
using namespace std; 

float fn (float x3 , float x2 , float x , float c , float p){
    return x3*p*p*p + x2*p*p + x*p + c;
}
    
int main()
{ 
    float x3 , x2 , x , c , x0 , x1, nextx , decplaces;
    cout<<"Coefficient of x^3 : ";
    cin>>x3;
    cout<<"Coefficient of x^2 : ";
    cin>>x2;
    cout<<"Coefficient of x : ";
    cin>>x;
    cout<<"Constant : ";
    cin>>c;
    cout<<"x0 : ";
    cin>>x0;
    cout<<"x1 : ";
    cin>>x1;
    cout<<"Enter decimal places : ";
    cin>>decplaces;
    float errorallow = 0.5 * pow(10 , -decplaces);
    cout<<errorallow;
    
    float error = 0; 
    do{
     nextx = x1 - ((x1 - x0)*fn(x3 , x2 , x , c , x1)) / (fn(x3 , x2 , x , c , x1) - fn(x3 , x2 , x , c , x0));
     error = nextx - x1;
     //update the values ->
     x0 = x1;
     x1 = nextx;
     cout<<"Next value of x : "<<nextx<<endl;
     }while(abs(error) > errorallow);
     
     cout<<"The approximate root of equation using Secant method is : "<<nextx;
    return 0;
}
   

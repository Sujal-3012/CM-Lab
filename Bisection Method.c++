#include <iostream>
using namespace std;
#include <cmath>

float fnValue (float coeffX3, float coeffX2, float coeffX, float constant, float value)
{
  return coeffX3 * value * value * value + coeffX2 * value * value +
    coeffX * value + constant;
}

int main ()
{
  float coeffX3;
  float coeffX2;
  float coeffX;
  float constant;
  float ub;
  float lb;
  float decimalplaces;

  cout << "Enter upper bound : ";
  cin >> lb;
  cout << "Enter lower bound : ";
  cin >> ub;
  cout << "coefficient of x^3 : ";
  cin >> coeffX3;
  cout << "coefficient of x^2 : ";
  cin >> coeffX2;
  cout << "coefficient of x : ";
  cin >> coeffX;
  cout << "constant : ";
  cin >> constant;
  cout << "Enter upto which decimal places : ";
  cin >> decimalplaces;
  
  float errorAllow = 0.50 * pow(10 , -(decimalplaces));
  cout<<endl;
  
  float newmid;
  float error;
  
  do{
    float mid = (ub + lb) / 2;
    float fnAta = fnValue(coeffX3 , coeffX2 , coeffX , constant , lb);
    float fnAtb = fnValue(coeffX3 , coeffX2 , coeffX , constant , ub);
    float fnAtmid = fnValue(coeffX3 , coeffX2 , coeffX , constant , mid);
    if((fnAta * fnAtmid) < 0){
      ub = mid;
    } else if (fnAtb * fnAtmid < 0){
      lb = mid;
    }
    newmid = (ub + lb) / 2;
    error = abs(newmid - mid);
  } while (error > errorAllow);

  cout<<"The root of this equation using Bisection method is : "<<(lb + ub)/2;
  return 0;
}

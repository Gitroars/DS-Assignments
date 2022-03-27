#include <iostream>
using namespace std;

int gcd(int alpha, int beta){
  
  // BASE CASE
   if (alpha == 0) // if alpha reaches 0, the reduced beta is the GCD
        return beta;

    if (beta == 0) // if beta reaches 0, the reduced alpha is the GCD
      return alpha;
  
    // GENERAL CASE
    if (alpha > beta)
      return gcd(alpha - beta, beta);  //if alpha > beta, alpha - beta
    return gcd(alpha, beta - alpha);   //if beta > alpha, beta - alpha
}

int main() {
  int alpha,beta;
  // USER INPUT
  cout<<"Enter the first number: ";
  cin>>alpha;
  cout<<"Enter the second number: ";
  cin>>beta;
  
  int result = gcd(alpha,beta); //declare the value of result to be the return value of the function
  cout<<"The GCD of "<<alpha<<" and "<<beta<<" is "<<result;
  
  return 0;
}


#include "myMath.h"
#define E (2.7182)

double Exponent(int x){
   
return Power(E,x);
} 

double Power(double x , int y) 
{
    
  if (y<0){
    x =  1/x;
    y=y*(-1);
  }
  double ans=1;
   for (int a = 0; a < y; a++){
       ans *= x;

   }
   return ans;
}
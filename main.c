#include "myMath.h"
#include <stdio.h> 
int main()
{
    double num =0;
    printf("Please inset a real number:");
    scanf("%lf", &num);


double ans1= sub(add(Exponent(num),Power(num,3)),2);
printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %.4lf is: %.4lf\n",num, ans1);
//   f(x) = e^x + 𝑥^ 3 − 2

double ans2 = add(mul(num,3),mul(Power(num,2),2));
printf("The value of f(𝑥) = 3x + 2X^2 at the point %.4lf is: %.4lf\n",num,ans2);
//  f(x) = 3x + 2X^2


double ans3= sub(div(mul(Power(num,3),4),5),mul(num,2));
printf("The value of  f(x) = (4x^3)/5 -2x  at the point %.4lf is: %.4lf\n",num,ans3);
//  f(x) = (4x^3)/5 -2x 


    return 0;
}

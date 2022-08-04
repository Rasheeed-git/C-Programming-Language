#include<stdio.h>
#include<math.h>

int main(){
double a;
double b;
double c;
printf("Input the value of a(opposite) = ");
scanf("%lf", &a);
printf("Input the value of b(adjacent) = ");
scanf("%lf", &b);
c = sqrt((pow(a,2)) + (pow(b,2)));
printf("\nThe hypotenous(c) of the triangle is %lf", c);
return 0;
}


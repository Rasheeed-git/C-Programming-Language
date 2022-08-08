#include<stdio.h>
#include<math.h>

int main(){
    float r;
    printf("Radius = ");
    scanf("%f", &r);
    double circumfernceOfACircle = 2 * M_PI * r  ;
    double area= M_PI * pow(r, 2);
    printf("The circumference of the circle is %lf\nThe area of the circle is %lf", circumfernceOfACircle, area);
    return 0;
}
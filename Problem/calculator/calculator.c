#include<stdio.h>
#include<math.h>

int main(){
    char operator;
    double number1;
    double number2;
    double result;
    
    printf("\nEnter your operator +, *, -, /, % : ");
    scanf("%c", &operator); 
     printf("\nEnter your first number: ");
    scanf("%lf", &number1); 
      printf("\nEnter your second number: ");
    scanf("%lf", &number2);
    switch (operator)
    {
    case '+': 
    result = number1 + number2;
    printf("%lf", result);
        break;
    case '-':
    result = number1 - number2;
    printf("%lf", result);
        break;
    case '*':
    result = number1 * number2;
    printf("%lf", result);
        break;
    case '/':
    result = number1 / number2;
    printf("%lf", result);
        break;
    case '%': 
     result = (int)round(number1)% (int)round(number2);
    printf("%lf", result);
        break;
    default: printf("Bad operator, %c is invalid", operator);
        break;
    }
    return 0;
    
    
} 
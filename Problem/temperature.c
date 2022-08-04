#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include <ctype.h>

int main(){
      char unit;
      double temperature;
      
      
      printf("\nChoose the temperature you are converting to:\n(C) for celcius or (F) for fahrenheit: ");
      scanf("%c", &unit);

      unit= toupper(unit);

      if(unit == 'C'){
        printf("\nInput your tempertature in Farenheit: ");
        scanf("\n%lf", &temperature);
        temperature = (temperature - 32 ) * 5 / 9;
        printf("\nThe temperature is  %lf Celcius", temperature);
      }
      else if(unit == 'F'){
         printf("\nInput your tempertature in Celcius: ");
         scanf("\n%lf", &temperature);
         temperature= (temperature * 9 / 5) + 32;
         printf("\nThe temperature is  %lf Farenheit", temperature);
      }
      else{
        printf("\nYour Input is Invalid");
      }


    return 0;
}
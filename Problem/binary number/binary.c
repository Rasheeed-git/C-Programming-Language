 #include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
 

 int main(){

    int num;
    printf("\nInput number: ");
    scanf("%d", &num);
    int length = 0;
    char binary[256];
   
    do{
         if(num % 2== 0) binary[length] = '0';
         else binary[length] = '1';
         num /= 2;
         length ++;
   
    }while(num != 0);

    binary[length] = '\0';

    int middle = length /2;

    char temp;
    int i;
    for(i = 0; i < middle; i++){
        temp = binary[i];
        binary[i] = binary[length - i - 1];
        binary[length -i - 1]= temp;
    }

    printf("%s", binary);

    return 0;
 }
 
        

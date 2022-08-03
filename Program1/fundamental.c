#include<stdio.h>
#include<stdbool.h>
#include<string.h>

// This is my first C code 
// int main(){
   
//    printf("My name is: \nife\ni am going to be a bad ass Hacker\n");
//    printf("If you dont believe \"me\", you are on your own\n");
//    printf("1\t2\t3\t4");
//    return 0;

// }


//Variable & Data Type
// int main(){

// int x; //declaration
// x= 123; //initialization
// int y = 123; //decleration + initialization

// int age= 21;//integer %d
// float gpa= 4.90;// floating point number- 4bytes(32 bits of precision)(6-7digits) %f
// char grade= 'A'; //single chracter %c
// char name[]= "Bro"; //array of characters %s
// double total = 20.78366374748883838;//double - 8bits(64 bits of pecision)(15-16 digits) %lf
// bool status= true;//1 byte(true or false) %d

// char score= 100; //1 byte (-128 to +127) %d or %c
// unsigned char g= 255; //1byte (0 to +255) %d or %c (only takes in positive numbers up to 225)

// //Types of int 
// short int h = 32767; //2 bytes (-32,768 to +32,767) %d
// unsigned short int i= 65535; //2 bytes( 0 to 65535) %d
// int j = 2147483647; //4 bytes (-2,147,483 to +2,147,483,647) %d
// unsigned int k= 4294967295; //4 bytes (0 to +4,294,967, 295) %u
// long long int l = 9223372036854775807; //8 bytes (-9 quintillion to +9 quintillion) %lld
// unsigned long long m= 18446744079551615U; //8 bytes (0 to +18 quintillion)  %llu

// printf("Hello %s,\nYou are %d years old\nYour average grade is %c\nYour gpa is %f\nYour cgpa = %0.3lf\nMarried : %d\nYour score is %c", name, age, grade, gpa,total,status, score);


// return 0;
// }


//Format Specifier %
// int main(){

//    // %c = character
//    // %s = string(array of characters)
//    // %f= float
//    // %lf= double
//    // %d = integer

//    // %.1 = decimal place
//    // %1 = minimum field width
//    // %- = left align

//    float item1= 5.75;
//    float item2= 10.00;
//    float item3 = 100.99;

//     printf("item 1 : %-8.1f", item1);

//    return 0;
// }

// //constant
// int main(){
//    const float PI= 3.14159;
//    printf("%f", PI);
//    return 0;

// }

//Arithmetic operator
// int main(){
//    short int y= 5;
//    short int x= 10;

//    short int z = x - y;
//    float k = z/(float)x;
//    short int u= x%y;
//    u++;
//    z--;
//    printf("%d\n%f\n%d", z, k,u);
//    return 0;
// }

//Augumented assignment
//         int main(){
//         short int x= 10;
//         x+=20;
//         x-=15;
//         x*=3;
//         x%=4;
//         printf("%d", x);
//         return 0;

// }

// int main(){
//     short int age;
//     char name[300];
//     float gpa;
//     printf("What is your name?\n");
//     //scanf("%s", &name);
//     fgets(name, 300, stdin);
//     name[strlen(name)-1] = '\0';
//     printf("How old are you?\n");
//     scanf("%d", &age);
//     printf("What is your gpa?\n");
//     scanf("%f", &gpa);

//     printf("\nYour name is %s\nYou are %d years old\nCongratulations your gpa, %f is good but you can do better.", name, age, gpa);
//     return 0;
// }


#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include <ctype.h>


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

// int main(){
//     double A= sqrt(9);
//     short int B= pow(2,4);
//     short int C= round(3.14);
//     short int D= ceil(3.14);
//     short int E= floor(3.99);
//     short int F= fabs(-100);
//     double G = log(3);
//     double H = sin(45);
//     double I = cos(45);
//     double J = tan(45);

// printf("%lf\n%d\n%d\n%d\n%d\n%d\n%lf\n%lf\n%lf\n%lf", A,B,C,D,E,F,G,H,I,J);
//     return 0;

// }

//if-else statement
// int main(){
// int age;

// printf("\nEnter your age: ");
// scanf("%d", &age);

// if(age >= 18){
//     printf("You are now signed up!");
// }
// else if(age == 0){
//     printf("You can't sign up, you are just born!");
// }
// else if (age < 0){
//     printf("You haven't been born yet!");
// }
// else{
//     printf("You are too young to sign up!");
// }
// return 0;
// }

//Switch statement
// int main(){
//     char grade;
//     printf("\nEnter your grade: ");
//     scanf("%c", &grade);
//     grade= toupper(grade);
//     switch(grade){
//         case 'A' : printf("Excellent!");
//         break;
//         case 'B' : printf("Good!");
//         break;
//         case 'C' : printf("Average!");
//         break;
//         case 'D' : printf("Poor!");
//         break;
//         case 'F' : printf("Fail!");
//         break;
//         default: printf("Not a Grade!");
//     }

//     return 0;
// }

//&& logical operator
// int main(){
//     float temp= 25;
//     bool sunny= false;
//     if(temp >= 0 && temp<=20 && sunny){
//         printf("Good weather!");
//     }
//     else{
//         printf("Bad weather!");
//     }
//     return 0;
// }

// || and ! logical operator
// int main(){
//     float temp= 25;
//     bool sunny= false;
//     if(temp >= 0 && temp<=20 || !sunny){
//         printf("Good weather!");
//     }
//     else{
//         printf("Bad weather!");
//     }
//     return 0;
// }

// functions
// void birthday(){
//     printf("\nHappy Birthday Faith.");
//     printf("\nHappy Birthday Orji.");
//     printf("\nHappy Birthday Jeremiah.");
//     printf("\nHappy Birthday Kenneth.\n");
// }

// int main(){
//     birthday();
//     return 0;
// }

// arguments and parameters
//  void introduction(char name[], short int age){
//     printf("\nMy name is %s", name);
//     printf("\nI am %d years old.", age);
//  }

// int main(){
//     char name[]= "Olukayode Ifeoluwa joshua";
//     short int age= 25;
//     introduction(name, age);
//     return 0;
// }

// return statement
// double triple(double i){
//     return pow(i, 3);
// }
// int main(){
//     double k= triple(3);
//     printf("%lf", k);
// }

//Tenary operator
// int findMax( int x, int y){
//     return x > y ? x : y;
// }
// int main(){
//     int max= findMax(3,4);
//     printf("%d",max);
//     return 0;
// }

// function prototype

// void intro(char[], int);

// int main(){
//     char name[] = "Olukayode Ifeoluwa Joshua";
//     int age= 25;
//     intro(name, age);
//     return 0;
// }


// void intro(char name[], int age){
//     printf("\nMy name is %s", name);
//     printf("\nI am %d years old", age);
// }

// string function
// int main(){
//     char string1[] = "ifeoluwa";
//     char string2[] = "Ifeoluwa";

   //double a= strlen(string1);
   //strlwr(string1);
   //strcat(string1, string2); 
   //strncat(string1, string2, 3);
   //strcpy(string1, string2);
   //strncpy(string1, string2, 3);
   //strset(string1, '*');
   //strnset(string1, '*', 2);
   //strrev(string1);
   //int result = strcmp(string1, string2);
   //int result = strnicmp(string1, string2, 2);
//     int result = strcmpi(string1, string2);
//     if(result == 0){
//         printf("\nThe strings are the same.\n");
//     }
//     else{
//         printf("\nThe strings are not the same.\n");
//     }


//     //printf("%lf,%d", a, result);
//     return 0;
// }

// for loop
// int main(){


//     for(int i= 10; i>0; i-=2){
//         printf("%d\n", i);
//     }
//     return 0;
// }


//while loop
//  int main(){
//     char name[100];
//     printf("\nPlease input your name: ");
//     fgets(name, 100, stdin);
//     name[strlen(name)-1] = '\0';
//     while (strlen(name) == 0)
//     {
//     printf("\nSorry you need to input your name : ");
//     fgets(name, 100, stdin);
//     name[strlen(name)-1]= '\0';
//     }
    
//     printf("\nWelcome %s\n", name);
//     return 0;

//  }

//Do while-loop
// int main(){

//     int number= 1;
//     int sum= 0;
//     do{
//         printf("\nEnter number # above: ");
//         scanf("%d", &number);
//         if(number > 0){
//             sum += number;
//         }
//     } while(number > 0);
//     printf("\nsum = %d", sum);
//     return 0;
// }

//Nested loop 
int main(){
    int row;
    int column;
    char symbol;

    printf("\nrow = ");
    scanf("%d", &row);

    printf("\ncolumn = ");
    scanf("%d", &column);

    scanf("%c");

    printf("\nsymbol = ");
    scanf("%c", &symbol);

     

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }

return 0;
}

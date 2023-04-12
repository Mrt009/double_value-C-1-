
// iostream is a directive without it the complier won't be able to identify cout of line 9
#include <iostream> // general after this we use to give the line gap to make the code easy to understand

/*int below means input  and main is the funtion which will tell the compliler what we are going to do other wise 
 the compiler will get error while linking the code with the code of default C++ libary */
int main() //  everything between {} is consider as a function body where it helps the complier to know they comes under the main()
{
    std:: cout<<"Hello World\n"; // std stand for character output
    // after the code run it is used to bring the complier in the intital position it is also used to verify that every thing went great
    //return0; 

// till the code if you get the syntax error then it means that you have error in sign just like the gramatical error

int a; // here we are defining a varibale with it type that is int = integer value and it is default initilization
int b; /* you can also write int a,b ;
       but you can't write int a; b;
            but
        you can't write int a , double b;
        * here you have to write int a ; doulbe b ;
        note: you can use only one semicolon to end the same type of variable but with different you need to add semicolon
        equal to number of variable */
int c = {6}; // this time of varibale used the process of   direct initilization since it proide the value of variable in the initial line
std::cout << c;


int x = 5, y = 6;          // copy initialization
//int c( 7 ), d( 8 );        // direct initialization
//int e { 9 }, f { 10 };     // direct brace initialization (preferred)
//int g = { 9 }, h = { 10 }; // copy brace initialization
//int i {}, j {};            // value initialization
return 0;
}

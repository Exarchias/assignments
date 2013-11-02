//  The goal for this assignment was to  convert the example C program of the week to C++
//This is a summing program who starts from 0 and ends to 780 after 40 additions
//Instruction: Change to C++ io == Done.
//Instruction: Change to one line comments ==Done.
//instruction: Change defines of constants to const == Done!
//instruction: Change array to vector<>  == done!
//instruction:  Inline any short function == done!

//To do this homerwork i used Dev C++ as IDE and as compiler on windows 7. I tryed the note++ as IDE but was not very effective.
// The N const variable is 40 and effects the final result. Apart of using vectors and stuff, this program can not be considered as dynamic.
//This program print's out the wanted result that is "sum is 780"
//Please notice: Because I am not exprerienced enougth to handle types of this level (like "int" or "int*" issues), i decided to avoid to put the vector as function parameter, but instead, because we
//have one vector with one name "data" for two functions, i decided to make the vector with global scope.
//I was not able to upload the original file homework1.cpp so i pasted the code as comment.
// Robert Alm exarchiasghost@gmail.com
//p.s I apologise for my english, and thank you for your time. :-)

#include <stdio.h> //The most standar library.
#include <iostream> // nessessary for handling IO like 
#include <vector> //nessessary for handling Vectors

using namespace std; //i like to use namespace std, it make the code more friendly to my eyes


const int N = 40; //This const variable effects the limit of the two for loops (in main() and sum()) so the vector "data" can't overide 40 places. 
vector<int> data;


// a)This function it is Short, so i made it inline, b)I am not exprerienced enougth to handle types of this level (like "int" or "int*" issues), so i decided to avoid to put the vector as function parameter, but instead, because we
//have one vector with one name "data" for two functions, i decided to make the vector with global scope.
inline void sum(int*p, int n) 
{
  int i; //please note that we using 2 variables "i" with different scope, for 2 seperate for loops, in 2 differnet functions (sum() and main()) 
  *p = 0;
  for(i = 0; i < n; ++i) //a typical for loop with a dynamic variable as counter and the n variable, reference to the N constant variable  (with value 40) as a limit.
     *p = *p + data[i];
     
}
int main()
{
   int i; //please note that we using 2 variables "i" with different scope, for 2 seperate for loops, in 2 differnet functions (sum() and main())

   //for this variable "accum" i am just using the exercises variable and function naming in order to make as close as possible to the exersises C source code.
   int accum = 0;

//for loop using the dynamic variable i as counter and the constant N variable as limit for the loop.
   for(i = 0; i < N; ++i){
   
   //We using  vector instead of Array. The command data.push_back(a) inserts the value of a in a new place in the end of the vector.
      data.push_back(i);

}
    sum(&accum, N);
    //cout print the  "sum is" the variable accum who turns to be in this case 780. The stability of the result caused by the const variable N with value 40 
    cout << "sum is \n" << accum;
return 0;
}

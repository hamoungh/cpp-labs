

open this url in your browser:
http://collabedit.com/2bxqj

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  

download slides from:
https://dl.dropboxusercontent.com/u/60605619/cppslides.zip


>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  

open vs
new project-->c++>win32 console app
    uncheck precompiled headers
    uncheck sec dev lifecycle
    check empty proj
right click on 'source files'>new item>cpp file
start coding
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  
    #include <iostream> 
    using namespace std; 
    int main(){  

    }

hit ctrl+F5
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  
    #include <iostream> //header def  
    using namespace std; 
    int main(){  
        cout << "fname lname";
    }

hit ctrl+F5


cout << "fname\t\tlname\n" 
             <<"bye\n"
             <<"aaaaaaaa";

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  

1. Write a program that produces the following output:
**********************************
*     Programming Assignment 1   *
*       Computer Programming I   *
*           Author: ???          *
*   Due Date: Thursday, Jan. 24  *
**********************************
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  
//solution1:

cout << "**************************************\n" 
         << "*     Programming Assignment 1       *\n"
         << "*      Computer Programming I        *\n"
         << "*    Author: Albert Vasconcellos     *\n"
         << "*    Due Date: Thursday, Jan. 24     *\n"
         << "**************************************\n";

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  

//solution 2
#include <iostream>
using namespace std;
int main()
{
    cout << "*****************************************\n"
         << "*\t Programming Assignment 1 \t*\n"
         << "*\t Computer Programming Lab 1 \t*\n"
         << "*\t     Author Ammar Lalji \t*\n"
         << "*\t Due Date: Tuesday, Sept.9 \t*\n"
         << "*****************************************\n";
}

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// problem: I have bought an item for $700. write a program that calculates the amount of tax I have to pay for it in ontario. 
#include <iostream>
using namespace std;
int main(){
  /* code
      code */
    int i=700; 
    cout <<i*0.13 <<"\n";
}
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include <iostream>
using namespace std;
int main(){
  /* code
      code */
    int i=701; 
    double j=i*0.13; 
    cout << "your total is $"<< i+j <<"\n";
}
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
int i=700; 
double j=...
cout << j

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// what if we use a float? is it gonna work? 
int i=700; 
float j=
cout << j

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
the result of the remainder operator: 
0 % 2 ==0
1 % 2 ==1
2 % 2 ==0
3 % 2 ==1
4 % 2 ==0
5 % 2 ==1
6 % 2 ==0
7 % 2 ==1

//Write an expression that checks if given integer is odd or even and returns 1 or 0. 
int i=2221121511;
cout << .....

operators:
/ + - * %  ==

#include <iostream>
using namespace std;
int main()
{
    int i=15;
    int x=i%2;
    cout << "If x is equal to 1 then i is odd\n";
    cout << x << "\n";
}

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Write an expression that checks if given point (x,  y) is within a circle K(O, 5).
define extra variables if you would like. 
int x=6;
int y=3; 
cout <<....... :

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// solution 1: 
int x=6; 
int y=3; 
int j= (x*x+y*y); 
cout j<25; 

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

knowing the following functions: 
int b= pow(2,3);  //2^3==2*2*2 = 8
double c=sqrt(9); //sqrt(9)=3
rewrite your solution. 

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// a solution with lots of intermediate variables involved:
int a=pow(x,2)+pow(y,2);
double b=sqrt(a);
bool c=b<5; 
cout << c; 

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// a compact solution  
cout << (sqrt(pow(x,2)+pow(y,2))<5)
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

given i, find out if i is in a given range [lb,ub]
  
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

how can I figure out if 67 is a prime or not? 
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
2 3 7 11 

7*7=49
11*11=121
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Write an expression that checks if given positive integer number n (n ≤ 100) is prime. E.g. 37 is prime.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

and &&
true && true --true
true && false --false
false && false --true

not !
!(2==2)

or ||
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

int n=67;
(if n is not divisible by 2 ) and
(if n is not  divisible by 3 ) and
(if n is not divisible by 5 ) and
(if n is not divisible by 7 ) and
(if n is not divisible by 11 ) and
then its a prime; 











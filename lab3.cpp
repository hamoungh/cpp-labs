POSERO>> set filetype=cpp
POSERO>> set wrap
POSERO>> set showbreak=\ \

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Suppose x and y are int variables and ch is a char variable. Consider the following input:
5 28 36
What value (if any) is assigned to x, y, and ch after each of the following statements executes? (Use the same input for each statement.)
a. cin >> x >> y >> ch;
b. cin >> x >> y;
   cin.get(ch);
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Suppose x and y are int variables and z is a double variable. Assume the following input data:
37 86.56 32
What value (if any) is assigned to x, y, and z after each of the following statements executes? (Use the same input for each statement.)
a. cin >> x >> y >> z;
b. cin >> x >> z >> y;
c. cin >> z >> x >> y;
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Suppose x and y are int variables and ch is a char variable. Assume the following input data:
13 28 D
14 E 98
A B 56
What value (if any) is assigned to x, y, and ch after each of the following statements executes? (Use the same input for each statement.)
a. cin >> x >> y;
cin.ignore(50, '\n');
cin >> ch;
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Suppose that age is an int variable and name is a string variable. What are the values of age and name after the following input statements execute:
cin >> age;
getline(cin, name);
if the input is:
a. 23 Lance Grant
b. 23
Lance Grant
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Write a program that accepts as input the mass, in grams, and density, in grams per cubic centimeters, and outputs the volume of the object using the
formula: density * mass / volume
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Write a program that prompts the user to input five decimal numbers. The program should then add the five decimal numbers, convert the sum to the
nearest integer, and print the result.
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Write a C++ program that prompts the user to input the elapsed time for an event in hours, minutes, and seconds. The program then outputs the elapsed time in seconds.
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

A permutation of three objects, a, b, and c, is any arrangement of these objects in a row. For example, some of the permutations of these objects are abc, bca, and cab. The number of permutations of three objects is six.
Suppose that these three objects are strings. Write a program that prompts the user to enter three strings. The program then outputs the six permutations of those strings.
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

the program prompts the user to input the height and the radius of the base of a cylinder and outputs the volume and surface area of the cylinder.
#include <iomanip>
#include <cmath>
int main()
{}
double height;
cout << "Volume of the cylinder = "
<< PI * pow(radius, 2.0)* height << endl;
cout << "Enter the height of the cylinder: ";
cin >> radius;
cout << endl;
return 0;
double radius

cout << "Surface area: "
<< 2 * radius * + 2 * PI * pow(radius, 2.0) << endl;
cout << fixed << showpoint << setprecision(2);
cout << "Enter the radius of the base of the cylinder: ";
cin >> height;
cout << endl;
#include <iostream>
const double PI = 3.14159;
using namespace std;
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


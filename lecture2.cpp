POSERO>> set filetype=cpp
POSERO>> set wrap
POSERO>> set showbreak=\ \

5 / 2 = 2
14 / 7 = 2
34 % 5 = 4
4 % 6 = 4
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

5.0 + 3.5 = 8.5
3.0 + 9.4 = 12.4
16.3 - 5.2 = 11.1
4.2 * 2.5 = 10.5
5.0 / 2.0 = 2.5
34.5 / 6.0 = 5.75
34.5 / 6.5 = 5.30769

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Order of Precedence: 
When more than one arithmetic operator is used in an expression, C++ uses the operator precedence rules to evaluate the expression. According to the order of precedence rules for arithmetic operators,
*, /, %
are at a higher level of precedence than:
+, -
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Order of Precedence Example:
3 * 7 - 6 + 2 * 5 / 4 + 6

how can I use ( and ) to avoid confusion?
Answer:
(3*7)-6+(2*5/4)+6

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

integral expression: 
x + 2 * (y - z) + 18
In these expressions, x, y, and z represent variables of the integer type

floating-point expressions:
x * 10.5 + y - 16.2
Here, x and y represent variables of the floating-point type. 


Mixed Expressions: 
5.4 * 2 - 13.6 + 18 / 2

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

3 / 2 + 5.5
= 1 + 5.5
= 6.5

15.6 / 2 + 5
= 7.8 + 5 
= 12.8

4 + 5 / 2.0 
= 4 + 2.5
= 6.5


4 *3 + 7 / 5 – 25.5 = 12+7/5 – 25.5
= 12 + 1 – 25.5
= 13 – 25.5
= -12.5
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Type Conversion (Casting)
static_cast<dataTypeName>(expression)
static_cast<int>(7.9) 7
static_cast<int>(3.3) 3
static_cast<double>(25) 25.0
static_cast<double>(5 + 3) = static_cast<double>(8) = 8.0
static_cast<double>(15) / 2 = 7.5
static_cast<double>(15 / 2) = 7.0
static_cast<int>(7.8 + static_cast<double>(15) / 2) 
= 15

static_cast<int>(7.8 + static_cast<double>(15 / 2))
= static_cast<int>(7.8 + 7.0)
= static_cast<int>(14.8)
= 14

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
String datatype

A string is a sequence of zero or more characters. 
examples:
"William Jacob"
"Mickey"
""

Using the string Data Type in a Program
#include <string>
string str;
cout <<  str << endl;

The position of the first character is 0
"Mickey" 
Position of 'M' is 0.
Position of 'i' is 1.
Position of 'c' is 2.
Position of 'k' is 3.
Position of 'e' is 4.
Position of 'y' is 5.

The length of a string is the number of characters in it.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Input (Read) statement

Example:
int feet;
int inches;
cin >>feet >>inches; 


This is called an input (read) statement. In C++, >> is called the stream extraction operator.

Suppose the input is:
23 7
 
generic format: 
cin >> variable >> variable ...;

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Combining input and output: 
#include <iostream>
using namespace std;
int main()
{
    int feet;
    int inches;
    cout << "Enter two integers separated by spaces: ";
    cin >> feet >> inches;
    cout << endl;
    cout << "Feet = " << feet << endl;
    cout << "Inches = " << inches << endl;
    return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Read-modify-store Cycle:
example: 
num = num + 2;
means ‘‘evaluate whatever is in num, add 2 to it, and assign the new value to the memory location num.’’

Example: was the final value in the variables num1, num2, num3?
1. num1 = 18;
2. num1 = num1 + 27;
3. num2 = num1;
4. num3 = num2 / 5;
5. num3 = num3 / 4;

Answer:
45, 45, 2 

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

 Increment and Decrement Operators
The statement:
count = count + 1;
Is equal to: 
++count;
count++;

What's the result of the following to a statements? 
x = 5;
y = ++x;
Answer:
x=5, y=6

Another example:
a = 5;
b = 2 + (a++);

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include <string>
using namespace std;
int main()
{
    int num;
    double height;
    string name;
    cout << "Enter an integer: ";
    cin >> num;
    cout << endl;
    cout << "num: " << num << endl;
    cout << "Enter the first name: ";
    cin >> name;
    cout << endl;
    cout << "Enter the height: ";
    cin >> height;
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Height: " << height << endl;
    return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Compound Assignment Statements
we can write simple assignment statements
x = x * y;
in a more concise notation:
x *= y;

Same thing for +=, -=, /=, %=


>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Visual Studio Workspace: 
Regions
Navigating Forwards/Backwards
Line Numbers
Split View
Commenting/Uncommenting a Code Block
Error List Window
Find/Replace
Refactor Support



POSERO>> set filetype=cpp
POSERO>> set wrap
POSERO>> set showbreak=\ \

In C++, I/O is a sequence of bytes, called a stream
stream is a sequence of characters from the source to the destination

iostream header file contains: 
the definitions of two data types: 
-istream (input stream)
-ostream (output stream). 

two variable declarations: 
-cin (common input)
-cout (common output)

in the header file:
istream cin;
ostream cout;

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   


extraction operator >>
functions:
get, ignore, peek, and putback

example1:
Suppose payRate is a double variable
cin>>payRate;

example2:
cin >> payRate >> hoursWorked;

It's the same as:
cin >> payRate;
cin >> hoursWorked;

 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  
 
 When scanning for the next input, >> skips all whitespace characters. Recall that whitespace characters consist of blanks and certain nonprintable characters, such as tabs and the newline character. Thus, whether you separate the input data by lines or blanks, the extraction operator >> simply finds the next input data in the input stream.
 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   

it's going to work whether the input is:
15.50 48.30
or:
15.50 48.30
or:
15.50
48.30

 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   

The input data is treated based on the type of variables.

character type example:
char ch;
cin >> ch;
input: A -----> ch = 'A'
input: AB -----> ch = 'A', 'B' is held for later input

Integer type example:
int a;
cin>>a;
input: 48----->a=48
input: 48.35----->a=48, .35 is held for later input

double type example:
double z;
cin>>z;
input: 48----->a=48.0
input: 48.35----->a=48.35 

mixed type example:
cin>>z>>a;
input: 65.78 38----->z=65.78, a=38

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

demo "Using Predefined Functions in a Program"


>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

A situation where the >> operator fails

char ch1, ch2;
int num;
cin >> ch1 >> ch2 >> num;

input:
A 25

ch1='A', ch2=2, num=5
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Solution:
cin.get(ch1);
cin.get(ch2);
cin >> num;

ch1='A', ch2=' ', num=25

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

cin.ignore(100, '\n');
it ignores either the next 100 characters or all characters until the newline character is found, whichever comes first. 

Consider the declaration:
int a, b;
and the input:
25 67 89 43 72
12 78 34
Now consider the following statements:
cin >> a;
cin.ignore(100, '\n');
cin >> b;

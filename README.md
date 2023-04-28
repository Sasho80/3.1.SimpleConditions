01.Problem: ExcellentResult
We read the grade from the console and check if it's excellent (≥ 5.50).
double grade;
cin>>grade;
if (grade>=5.50){
cout<<"Excellent!"<<endl;
}
Test the code from the example locally. Try entering different grades, for example 4.75, 5.49, 5.50
and 6.00. For grades less than 5.50, the program will not give any output, however if the grade is
5.50 or greater, the output would be "Excellent!".

02.Problem: Excellent Grade or Not
Like the example above, we read the grade from the console and check if it's excellent, but this time 
we should output the result in both cases.
double grade;
cin>>grade;
if (grade>=5.50){
cout<<"Exelent!"<<endl;
}
else{
cout<<"Not excellent!"<<endl;
}

03.Problem: Even or Odd Number
Write a program that checks whether an integer is even or odd.
Hint and Guidelines
We can solve the problem with one if-else statement and the operator %, which returns a remainder 
by dividing two numbers.
int num;
cin>>num;
if(num%2){
 cout<<"Even"<<endl;
}
else{
 cout<<"Odd"<<endl;
}
04.Problem: Finding the Greater Number
Write a program that inputs two integers and prints the larger one.
Sample Input and Output
Input Output Input Output Input Output Input Output 
5     5      3     5      10    10     -5    5
3            5            10           5

05.Problem: Typing a Digit in Words
Write a program that inputs an integer in the range [1 ... 9] and outputs it in words in English. If the 
number is out of range, print "number too big".
Sample Input and Output
Input Output Input Output Input Output Input Output 
5     five   1     one    9     nine   10    number too big
Hints and Guidelines
We can use a series of if-else statements to examine the possible 11 cases.

06.Problem: Bonus Score
We have an integer – the number of points. Bonus score are charged on it, according to the rules 
described below. Write a program that calculates bonus score for this figure and total points with 
bonuses.
• If the number is up to 100 including, bonus score is 5.
• If the number is larger than 100, bonus score is 20% of the number.
• If the number is larger than 1000, bonus score is 10% of the number.
• Additional bonus score (accrued separately from the previous ones):
o for even number → + 1 p.
o for number, that ends with 5 → + 2 p.
Sample Input and Output
Input Output Input Output Input Output Input Output 
20    6      175   37     2703  270.3  15875 1589.5
      26           212          2793.3       17464.5

07.Problem: Summing Up Seconds
Three athletes finish in a particular number of seconds (between 1 and 50). Write a program that 
introduces the times of the contestants and calculates their total time in "minutes:seconds" format. 
Seconds need to be zeroed at the front (2 -> "02", 7 -> "07", 35 -> "35").
Sample Input and Output
Input Output Input Output Input Output Input Output 
35    2:04   22    1:03   50    2:29   14    0:36
45           7            50           12
44           34           49           10

08.Problem: Metric Converter
Write a program that convert a distance between the following 8 units of measure: m, mm, cm, mi, in, 
km, ft, yd. Use the below table:
Input measure Output measure            Input measure Output measure 
1 meter (m)   1000 millimeters (mm)     1 meter (m)   0.001 kilometers (km)
1 meter (m)   100 centimeters (cm)      1 meter (m)   3.2808399 feet (ft)
1 meter (m)   0.000621371192 miles (mi) 1 meter (m)   1.0936133 yards (yd)
1 meter (m)   39.3700787 inches (in)

You have three input lines:
• First line: the number for converting.
• Second line: the input unit.
• Third line: the output unit (for result).

Sample Input and Output
Input Output      Input Output           Input Output 
12    39370.0788  150   9503999.99393599 450   0.41147999937455
km                mi                     yd
ft                in                     km

09.Problem: Guess the Password
Write a program that inputs a password (one line with random text) and checks if the input matches
the phrase "s3cr3t!P@ssw0rd". If it matches, print "Welcome", otherwise "Wrong password!".
Sample Input and Output
Input  Output      Input          Output      Input       Output 
qwerty Wrong      s3cr3t!P@ssw0rd Welcome     s3cr3t!p@ss Wrong password!
       password!                  

10.Problem: Numbers from 100 to 200
Write a program that inputs an integer and checks if it is below 100, between 100 and 200 or over 
200. Print the appropriate message as in the examples below.
128 Programming Basics with C#
Sample Input and Output
Input Output        Input Output              Input Output 
95    Less than 100 120   Between 100 and 200 210   Greater than 200

11.Problem: Identical Words
Write a program that inputs two words and checks if they are the same. Do not make difference 
between uppercase and lowercase letters. You have to print "yes" or "no".

Sample Input and Output
Input Output Input   Output Input Output Input  Output 
Hello yes    SoftUni yes    Soft  no     banana no
Hello        SoftUni        Uni          lemon

12.Problem: Speed Info
Write a program that inputs the speed (decimal number) and prints speed information. For speed up 
to 10 (inclusive), print "slow". For speed over 10 and up to 50, print "average". For speed over 50 and 
up to 150, print "fast". For speed over 150 and up to 1000, print "ultra fast". For higher speed, print 
"extremely fast".
Sample Input and Output
Input Output Input Output Input Output 
8     slow   126   fast   3500  extremely fast
Input Output  Input Output     Input Output
49.5  average 160   ultra fast 50000 extremely fast

13.Problem: Areas of Figures
Write a program that inputs the sizes of a geometric figure and calculates its area. The figures are 
four types: square, rectangle, circle and triangle.
Chapter 3.1. Simple Conditions 129
The first line of the input provides the type of the figure (square, rectangle, circle, triangle).
• If the figure is a square, the next line provides one number – the length of its side.
• If the figure is a rectangle, the next two lines we provide two numbers – the lengths of its sides.
• If the figure is a circle, the next line provides one number – the radius of the circle.
• If the figure is a triangle, the next two lines provide two numbers – the length of the side and 
the length of its height.
Round the result up to the third digit after the decimal point.
Sample Input and Output
Input  Output  Input     Output Input  Output  Input    Output 
square 25      rectangle 17.5   circle 113.097 triangle 45
5              7                6              4.5
               2.5                             20

Problem: Time + 15 Minutes
Write a program that inputs hours and minutes of a 24-hour day and calculates what will be the time
after 15 minutes. Print the result in hh:mm format. Hours are always between 0 and 23, and minutes 
are always between 0 and 59. Hours are written with one or two digits. Minutes are always written 
with two digits and zero at the front when needed.
Sample Input and Output
Input Output Input Output Input Output Input Output 
 1    2:01   0      0:16  23    0:14   11    11:23
 46          01           59           08

Hints and Guidelines
Add 15 minutes and check using a few conditions. If minutes are over 59, increase hours with 1 and
reduce minutes with 60. Identically, check the case when hours are over 23. When you print the 
minutes, you should check for zero at the front.








      


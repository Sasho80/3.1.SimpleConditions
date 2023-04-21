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








      


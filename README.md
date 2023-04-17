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


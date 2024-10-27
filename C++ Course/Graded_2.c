/*Complete the code on the left such that the code returns 17. Please note there are two types of errors present in the code:

    A compilation error - the compiler sees a problem and throws an error to alert you.
    A run-time error - an error when the code is running. */
int main() {
  
  //fix the code below this line

  int a = 5;
  int b = 6;

  //fix the code above this line
  
  cout << (a * 3 + b - 8 / 2) << endl;
  
  return 0;
  
}
/*Using ONLY numbers and operators, print an expression that evaluates to false. Make sure to use cout << boolalpha << in your code. Otherwise, the system will print 0 or 1 instead of false or true. */
int main() {
  
  //add code below this line
cout << boolalpha << (5<=4);


  //add code above this line
  
  return 0;
  
}
/*Write a program that outputs Hello world. Your program must do the following things:

    Use two variables, one assigned to Hello and the other assigned to world.
    Use just one cout << statement. */
int main() {
  
  //add code below this line
string a = "Hello ";
string b = "World";
cout << a + b << endl;


  //add code above this line
  
  return 0;
  
}
/*Write a program that divides 7 by 2 and prints out the result (3.5) without using the printf() command. Your program must do the following things: 

    Declare two variables and assign them to the appropriate values, and use them to calculate your quotient of 3.5.
    Include just one division (/) operator in your code.
    Use just one cout << statement.*/
int main() {
  
  //add code below this line
double a = 7.0;
double b = 2.0;
cout<< a/b << endl;


  //add code above this line
  
  return 0;
  
}
/*Your friend wrote a program called an adder. The adder is supposed to take two numbers inputted by a user and then find the sum of those numbers, but it’s behaving oddly.
You can test the adder by using the terminal in the bottom-left panel. Once you click the TRY IT button below, the program will ask you to input two whole numbers. You need to press “Enter” or “Return” after typing each number.*/
int main() {
  
  string num1;
  string num2;
  cout << "Type the first whole number and then press Enter or Return: ";
  cin >> num1;
  cout << "Type the second whole number and then press Enter or Return: ";
  cin >>num2;
  
  //fix the code below this line

  int sum = stoi(num1) + stoi(num2);
  cout << ( num1 + " + " + num2 + " = " + to_string(sum) ) << endl;

  //fix the code above this line
  
  return 0;
  
}

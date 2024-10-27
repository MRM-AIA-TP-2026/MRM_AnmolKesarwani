/*Problem
Use the variable x as you write this program. x will represent a positive integer. Write a program that determines if x is between 0 and 25 or between 75 and 100. If yes, print the message:_ is between 0 and 25 or 75 and 100, where the blank (_) will be the value of x. The program should do nothing if the value of x does not fit into either ranges.
Note: These are inclusive ranges - meaning if x is 0, 25, 75, or 100, the program should print out the message. */

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line
if (x >= 0 && x <=25 || x >=75 && x <= 100) {
  cout << to_string(x)+ " is between 0 and 25 or 75 and 100" << endl;
}
else {
  
}

  //add code above this line
  
  return 0;
  
}

/*Use the variable x as you write this program. x will represent a positive integer. Write a program that determines if x is divisible by 5. If yes, print _ is divisible by 5, where the blank (_) is the value of x. If no, print _ is not divisible by 5, where the blank (_) is the value of x. */

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line
if (x % 5 == 0) {
  cout << to_string(x) + " is divisible by 5" << endl;
}
else {
  cout << to_string(x) + " is not divisible by 5" << endl;
}

  //add code above this line
  
  return 0;
  
}

/*Use the variable x as you write this program. x will represent a positive integer. Write a program that determines if x is divisible by 5 and is an even number. If yes, print _ is divisible by 5 and even, where the blank (_) is the value of x. If no, print _ is not divisible by 5 or it is odd, where the blank (_) is the value of x. */

nt main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line
if (x % 5 == 0 && x % 2 == 0) {
  cout << to_string(x) + " is divisible by 5 and even" << endl;
}
else {
  cout << to_string(x) + " is not divisible by 5 or it is odd" << endl;
}


  //add code above this line
  
  return 0;
  
}

/*Use the variable x as you write this program. x will represent a string. Write a program that determines if x is a primary color (red, blue, or yellow). If yes, print _ is a primary color, where the blank (_) is the value of x. If no, print _ is not a primary color, where the blank (_) is the value of x. For this particular exercise, make sure that your code specifically checks if the variable x is equivalent to the strings red, blue, or yellow in all lowercase. Otherwise, your test cases will fail.*/

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line
string c1 = "red";
string c2 = "blue";
string c3 = "yellow";

if (x == c1 || x== c2 || x == c3) {
  cout << x + " is a primary color";
}
else {
  cout << x + " is not a primary color";
}

  //add code above this line
  
  return 0;
  
}

/*Use the variable x as you write this program. x will represent a string. Write a program that determines if x is a vowel (a, e, i, o, or u ). If yes, print _ is a vowel, where the blank (_) is the value of x. If no, print _ is not a vowel, where the blank (_) is the value of x. For this particular exercise, make sure that your code specifically checks if the variable x is equivalent to the strings a, e, i, o, or u in lowercase. Otherwise, your test cases will fail.*/

nt main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line
string v1 = "a";
string v2 = "e";
string v3 = "i";
string v4 = "o";
string v5 = "u";
if (x == v1 || x == v2 || x ==v3 || x==v4 || x== v5 ) {
  cout << x+ " is a vowel";
}
else { 
  cout << x + " is not a vowel";
}

  //add code above this line
  
  return 0;
  
}


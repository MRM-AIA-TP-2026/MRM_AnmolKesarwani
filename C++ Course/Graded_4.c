/*Imagine that you have a Turtle object called tina. You want tina to move around on a screen and leave a trail that draws a triangle like below.
Requirements:

    tina must move exactly as shown in the graphic above.
    You must include a for loop.
    You must declare an iterating variable i and initialize it to zero (e.g. int i = 0).
    Your loop header must include i++. In other words, i gets incremented by 1 after each iteration.
    You must include the following two commands in your code:
        tina.left(120);
        tina.forward(100); */
int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
  Turtle tina(screen);
  tina.speed(TS_SLOWEST);
  for (int i =0 ; i< 3; i ++) {
    tina.forward(100);
    tina.left(120);
  }
  
/*Write a program that takes in a string x from the user as an argument and then prints that information ten times using a loop.
Requirements

    You must include a for or while loop in your code.
    You must include one and only one cout and endl statement in your code.
    For example, your output should look like this:*/
int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line
for(int i =0; i<10;i++) {
  cout<< x<<endl ;
}


  //add code above this line
  
  return 0;
  
}

/*You are trying to produce a program that takes in two integer arguments from the user and then prints the consecutive sum of all numbers between those integers inclusively. For example, arguments 5 and 8 will result in a sum of 26 (5 + 6 + 7 + 8 = 26). If the integer arguments are the same value, the program will simply print that value as the sum.
Requirements

    Declare and initialize a variable to keep tracking of your sum.
    Use any loop to find the consective sum between the integer variables a and b.
    If a and b are the same integers, then print either a or b as the sum.

What does the if (a > b) conditional in the code do?*/

int main(int argc, char** argv) {
  
  int a = stoi(argv[1]);
  int b = stoi(argv[2]);
  
  if (a > b) {
    int c = b;
    b = a;
    a = c;
  }
  
  //add code below this line
int sum = 0;
for (int i=a;i <= b ; i++ ){
  sum += i;
}
if (a ==b) {
  sum = a;
}
cout << sum<<endl;


  //add code above this line
  
  return 0;
  
}
/*The following program (also shown in the text editor on the left) contains one or more infinite loops that prevent the program from printing the desired output.
    You cannot make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
    You need to add two and only two break; statements to the program.
    The program’s expected output is: Print me! */
nt main() {

  for (int i = 100; i <= 100; i--) {
    if (i == 0) {
      cout << "Print me!" << endl;
      break;
    }
    else {
      while (true) {
        break;
        i++;
        cout << "Don't print me!" << endl;
      }
    }
  }

  return 0;

}
/*For this assignment, you will use a nested loop to produce the unique output below.
int main() {
  ....1
  ...2
  ..3
  .4
  5
*/
int main()
  //add code below this line
for (int i =1 ; i <6; i++) {
  for(int j = 5-i; j >0; j--) {
    cout<< ".";
  }
  cout<<i<<endl;
}


  //add code above this line
  
  return 0;
  
}



/*Given the current program within the text editor to your left:
Complete the program so that the pointer that’s associated with the larger value is printed. For example, if a is larger than b, then the system will print *p1. Else if b is larger than a, then the system will print *p2. If neither is larger, then the system will print Neither number is larger. Your output should look like this:*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = atoi((argv[1]));
  int b = atoi((argv[2]));
  int *p1 = &a;
  int *p2 = &b;
  
  //add code below this line
  if (*p1 > *p2){
    cout << "The larger number is " << *p1<< endl;
  }
  else if (*p2 > *p1){
    cout << "The larger number is " << *p2 << endl;
  }
  else {
    cout << "Neither number is larger" << endl;
  }
  //add code above this line
  
  return 0;
  
}
/*You are working to create a program that takes in two double inputs, associates them with pointers, and then adds the value of the dereferenced pointers together. Finally, their sum is printed with a newline. Here is what you have so far:
When running your code, you should be asked to enter a first number and a second number in the Terminal. If you enter a non-double or non-integer, the program should print invalid and exit the program. If the inputs are valid, then the system will add the inputs together and output their sum. DO NOT make any changes to the existing code!*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  double a;
  double b;
  double *p1;
  double *p2;
  
  cout << "Enter the first number: " << endl;
  cin >> a;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  cout << "Enter the second number: " << endl;
  cin >> b;
  if (!cin.good()) {
    cout << "invalid" << endl;
    exit(0);
  }
  
  // your code goes below
  p1 = &a;
  p2 = &b;
  cout << "The sum is ";
  
  
  // your code goes above
  
  cout << *p1 + *p2 << endl;
  
  return 0;
  
}

/*Write a function called GetAvg() that takes two double parameters and returns the average of these two parameters as a double. If either of the parameters is not a double or an integer, the program will catch the exception and print One or more invalid arguments..
Requirements

    You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
    You can use any number of functions, loops, and/or conditionals to produce the desired output.*/
#include <iostream>
#include <vector>
using namespace std;

//add code below this line
double GetAvg(double x, double y) {
  double avg = (x +y) /2;
  return avg;
}


//add code above this line

int main(int argc, char** argv) {
  try {
    double x = stod(argv[1]);
    double y = stod(argv[2]);
    cout << GetAvg(x, y) << endl;
  }
  catch (invalid_argument& e) {
    cout << "One or more invalid arguments." << endl;
  }
  return 0;
}
/*Write a function called GetOddsEvens() that takes a string and an int vector as parameters. If the string parameter is "true", print only the even integers separated by a newline. If the string parameter is "false", print only the odd integers separated by a newline. Else, no output will be printed and you will see the default message of Command was successfully executed..
Requirements

    You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
    You can use any number of functions, loops, and/or conditionals to produce the desired output.*/
#include <iostream>
#include <vector>
using namespace std;

//add code below this line
bool GetOddsEvens(string x, vector<int> y) {
  for(int i = 0 ; i < y.size();i++){
    if (x =="true"){
      if(y.at(i) % 2 == 0){
        cout<<y.at(i)<<endl;
      }
    }
    if (x == "false"){
      if(y.at(i)%2 == 1){
        cout<<y.at(i)<<endl;
      }
    }
  }
}



//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}
/*Write a function called FindTerm() that takes a string term and a string vector as parameters. If the term exists inside the vector, then a boolean value of true is returned. Else, the term does not exist and false is returned. Note that capitalization matters. For example, "cat"and "Cat" are not considered the same term.
Requirements

    You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
    You can use any number of functions, loops, and/or conditionals to produce the desired output.*/
#include <iostream>
#include <vector>
using namespace std;

//add code below this line
bool FindTerm(string x ,  vector<string> y){
  for(string j : y){
    if(j == x){
      return true;
    }
    
    
  }
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}
/*Write a function called IsPalindrome() that takes a string as a parameter. If the string is a palindrome (a word that is spelled the same forward and backward), then the function will return a boolean of true. If the string is not a palindrome, then false is returned. Note that capitalization matters. For example, "Level" would not be considered a palindrome because uppercase "L" and lowercase "l" are not the same.
Requirements

    You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
    You can use any number of functions, loops, and/or conditionals to produce the desired output.*/
#include <iostream>
#include <vector>
using namespace std;

bool IsPalindrome(string x){
  bool palindrome = false;
  string bs;
  for(int i = x.length()-1; i>=0;i--){
    bs = bs + x.at(i);
    
  }
  if (x == bs){
    palindrome = true;
  }
  return palindrome;
  
    
  
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}
/*Like in Exercise 4, your task is to develop a function called IsPalindrome() that takes a string as a parameter. If the string is a palindrome (a word that is spelled the same forward and backward), then the function will return a boolean of true. If the string is not a palindrome, then false is returned. The difference between this exercise and Exercise 4, however, is that you will need to use a helper function called Reverse() within IsPalindrome(). The Reverse() function takes a string as a parameter and reverses it. Then the reversed string is returned.
Remember that capitalization matters. For example, "Level" would not be considered a palindrome because uppercase "L" and lowercase "l" are not the same.
Requirements

    You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
    You must include the helper function Reverse() within your IsPalindrome() function; otherwise, you will not receive credit for your work!*/
include <iostream>
#include <vector>
using namespace std;

string Reverse(string x) {
  string y;
  for (int i = x.length() - 1; i >= 0; i--) {
    y += x.at(i);
  }
  return y;
}
bool IsPalindrome(string x ){
  bool palindrome = false;
  
  string y = Reverse(x);
  
  if ( x == y) {
    palindrome = true;
  }
  return palindrome;
}
//add code below this line



//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}

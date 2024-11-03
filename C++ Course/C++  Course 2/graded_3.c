/*Write a program that takes input from a user and prints the first character of the input and the last character with some context. For example, if baseball is the string, then the program will output b is the first character and l is the last character. If cat is the string, then c is the first character and t is the last character will be printed.*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

cout << my_string.at(0)<<" is the first character and ";
for (int i =0; i < my_string.length();i++){
  if(i == my_string.length()-1)
  cout<<my_string.at(i)<<" is the last character "<<endl;
}

  //add code above this line
  
  return 0;
  
}
/*Write a program that captures input from the user, prints the input string as many times as its length, and prints as many lines of it as the length of the input string.*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
for (int i = 0 ; i < my_string.length();i++){
  
  for(int j =0;j< my_string.length();j++){
    cout<<my_string;
  }
  cout<<endl;
}


  //add code above this line
  
  return 0;
  
}
/*Write a program that accepts input from the user and creates another string that contains either a u, l, or - for each character of the original string. Use u when the character is uppercase, and use l when the character is lowercase. If the character is neither uppercase nor lowercase, use -. Print the original string first, then print the modified string.*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string original = (argv[1]);
  string modified;
  char ch;
  
  //add code below this line
for (char ch : original) {
  if (isupper(ch)) {
    modified += 'u';
  }
  else if (islower(ch)){
    modified +='l';
  }
  else {
    modified +='-';
  }
}
cout << "Original string " << original << endl;
cout << "Modified string " << modified << endl;

  //add code above this line
  
  return 0;
  
}
/*Write a program that takes input without white spaces from a user, prints the first half of the string on one line, and the second half on another. In the case of a string that has an odd number of characters, the second line will have the extra character.*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
for(int i= 0; i < my_string.length();i++){
  if(i == my_string.length()/2){
    cout<<endl;
  }
  cout<<my_string.at(i);

}


  //add code above this line
  
  return 0;
  
}
/*Write a program that captures input from the user and swaps the letters two at a time in the string. The first two characters change places, the third and fourth characters change places, etc. Assume that the program will only take an even number of characters, otherwise, there will be an error.*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
for(int i = 0; i < my_string.length(); i+=2){
  swap(my_string[i] , my_string[i +1]);
}
cout << my_string<<endl;

  //add code above this line
  
  return 0;
  
}

/*Given the current program within the text editor to your left:
Requirements

    You cannot make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
    You must include the array name oceans in your code so that each element of the array can be printed.
    You cannot print the individual strings Pacific, Atlantic, Indian, Arctic, and Southern in your code. Instead, refer to the array elements themselves.
    Each element should be printed with a newline.*/
#include <iostream>
using namespace std;

int main() {
  
  string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
  //add code below this line
for (int i =0 ; i < sizeof(oceans)/sizeof(oceans[0]);i++){
  cout << oceans[i]<<endl;
}


  //add code above this line
  
  return 0;
  
}
/*you want to convert the oceans array into a vector. Here is what you have so far in the text editor to your left:
Requirements

    You cannot make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
    You must include at least ONE push_back() function, at least ONE pop_back() function, and at least ONE at() function in your program*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line
oceans.push_back("Pacific");
oceans.push_back("Atlantic");
oceans.push_back("India");
oceans.push_back("Arctic");
oceans.push_back("Southern");
oceans.push_back("Indians");
oceans.pop_back();
oceans.at(2) = "Indian";

  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}
/*You are writing a program that adds three string arguments into a vector called reverse.
Then you want to modify the string arguments so that they are printed in reverse order. For example, if the three string arguments are one, two, and three, then the program will print:*/
include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);
  
  //add code below this line
reverse.at(0) = (argv[3]);
reverse.at(2) = (argv[1]); 


  //add code above this line
  
  for (auto a : reverse) {
    cout << a << endl;
  }
  
  return 0;
  
}
/*Complete the program so that it takes in 4 integers (a, b, c, and d) as arguments, stores them in the 2D array nums, and then prints their row, column, and total sums. The program should print the integers according to this formula:*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = atoi((argv[1]));
  int b = atoi((argv[2]));
  int c = atoi((argv[3]));
  int d = atoi((argv[4]));
  int nums[3][3];
  
  //add code below this line
nums[0][0] = a ;
nums[0][1] = b; 
nums[0][2] = a + b; 
nums[1][0] = c;
nums[1][1] = d;
nums[1][2] = c +d;
nums[2][0] = a+c;
nums[2][1] = b +d ;
nums[2][2] = 2*(a+b+c+d);


  //add code above this line
  
  int row = sizeof(nums) / sizeof(nums[0]);
  int col = sizeof(nums[0]) / sizeof(int);
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (j == 2) {
        cout << nums[i][j] << endl;
      }
      else {
        cout << nums[i][j] << " ";
      }
    }
  }
  
  return 0;
  
}
/*You are working to create a program that continuously takes in double and integer inputs and adds them to a vector called numList. If an input is not a double or an integer type, then the program will iterate through numList, add each value to the total, and calculate the average (avg). Finally, the average is printed with a newline. Here is what you have so far:*/
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  double input;
  double total = 0;
  double avg = 0;
  vector<double> numList(0);
  
  cout << "Enter double or int to add to total, else find total average:" << endl;
  while (cin >> input) {
  
    // add input into vector
    
    numList.push_back(input);  
    // your code goes above
  
    cout << "Enter double or int to add to total, else find total average:" << endl;
  }
  
  // iterate through vector, add elements to total, then calculate average
  for (auto i : numList) {
    total += numList[i];
    
  }
  avg = total/numList.size();
  
  // your code goes above
  
  cout << avg << endl;
  
  return 0;
  
}

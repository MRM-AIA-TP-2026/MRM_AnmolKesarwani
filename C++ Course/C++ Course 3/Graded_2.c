/*Problem
Write a recursive function called RecursiveSum() that takes an integer as a parameter. Then it returns the sum of all integers between 0 and the integer passed to RecursiveSum(). For example, if the argument is 5, then the returned value will be 0 + 1 + 2 + 3 + 4 + 5 which is 15.*/
#include <iostream>
using namespace std;

//add function definitions below this line
int RecursiveSum(int x ){
  if( x == 0){
    return 0;
  }
  else{
    return (x+RecursiveSum(x-1));
  }

}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << RecursiveSum(stoi(argv[1])) << endl;
  return 0;
}
/*Problem
Write a recursive function called ListSum() that takes a vector of integers as a parameter. Then it returns the sum of all of the integers in the array.*/
#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line
int ListSum(vector<int> nums){
  for (int i = nums.size(); i >= 0; i--){
    if(i == 0){
      return (nums.at(i));
    }
    else{
      return (nums.at(i)+ListSum(nums.at(i+1)));
    }
  }
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}
/*Problem
Write a recursive function called BunnyEars() that takes the number of bunnies (an integer) as a parameter. Then it returns the number of bunny ears (2 per bunny). Use addition instead of multiplication in your code.*/
#include <iostream>
using namespace std;

//add function definitions below this line
int BunnyEars(int x){
  int ears = 0;
  
    if(x ==0){
    ears = 0;
    return ears;
    }
    else {
    return(ears =ears +2 + BunnyEars(x-1));
    }
    
  
}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << BunnyEars(stoi(argv[1])) << endl;
  return 0;
}
/*Problem
Write a recursive function called ReverseString() that takes a string as a parameter. Then it returns the string in reverse order.*/
#include <iostream>
using namespace std;

//add function definitions below this line
string ReverseString(string x){
  string reverse;
  
    if(x.length() == 0){
      return x;
      
    }
    else {
      
      return (x.substr(x.length()-1) + ReverseString(x.substr(0, x.length() - 1)) );
    }

  
  
  return reverse;
}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}
/*Problem
Write a recursive function called GetMax() that takes a vector of integers as a parameter. Then it returns the largest integer in the array.*/
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line
int GetMax(vector <int> nums){
  int max = 0;
  if(nums.size()==1){
    max = nums.at(0);
  }
  else{
    for(int i =0; i < nums.size(); i++){
      if(nums.at(i) > max){
        max = nums.at(i);
      }
    }
  }
  return max;
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}

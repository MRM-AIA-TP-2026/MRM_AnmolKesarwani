/*Write a program that reads a text file and returns the number of lines as well as the total number of characters in the file.*/
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
ifstream file;
string r;
int l =0;
int c = 0;
file.open(path);
while(getline(file,r)){
  l++;
  c += r.length();
}
file.close();
cout<< l<< " line(s)"<<endl;
cout << c << " character(s)"<<endl;

  
  //add code above this line
  
  return 0;
  
}
/*Write a program that reads a comma delimited CSV file with four columns and returns the average of each column in the file. Assume that the CSV files used will only contain 3 rows and 4 columns.*/
include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
ifstream file;
int col1 = 0;
int col2 =0;
int col3 =0;
int col4 =0;
string read;
vector<string> data;
file.open(path);
while(getline(file,read)){
  stringstream ss(read);
  while(getline(ss,read,','))
  data.push_back(read);
}
file.close();
for(int i = 0 ; i < data.size(); i++){
  if( i == 0 || i ==4 || i ==8){
    col1+= stoi(data.at(i));
  }
  else if ( i == 1 || i==5 || i ==9){
    col2 += stoi(data.at(i));
  }
  else if (i == 2 || i ==6 || i ==10){
    col3 += stoi(data.at(i));
  }
  else {
    col4 += stoi(data.at(i));
  }
}
cout << col1/3<<" ";
cout<< col2/3 <<" ";
cout << col3/3<<" ";
cout << col4/3 << endl;
  //add code above this line
  
  return 0;
  
}
/*Write a program that reads a text file and prints the contents in reverse order.*/
include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
vector <string> data;
ifstream file;
string p;
string read; 
file.open(path);
while(getline(file,read)) {
  stringstream ss(read);
  while(getline(ss, read)){
    data.push_back(read);

  }
}  
file.close();
for (int i = data.size()-1; i>=0;i--){
  p+= data.at(i);
}
cout<<p<<endl;
  //add code above this line
  
  return 0;
  
}
/*Problem
Write a program that reads a tab ('\t') delimited CSV file and prints the name of the oldest person in the file. Assume that there are no two people with the same age.*/
include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
vector <string> data;
ifstream file;
int m = 0;
string p ;
string r;
file.open(path);
while(getline(file,r)){
  stringstream ss(r);
  while(getline(ss, r, '\t')){
    data.push_back(r);
  }
  
}
file.close();
for(int i =1 ; i< data.size(); i+=3){
  if(stoi(data.at(i))>m){
    m = stoi(data.at(i));
    p = data.at(i-1);
  }
}
cout<< "The oldest person is " << p << " ."<< endl;
  //add code above this line
  
  return 0;
  
}
/*Write a program that reads a comma delimited CSV file and prints all of the cities which reside in the Southern Hemisphere. Note, any latitude with a negative value is south of the equator.*/
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
vector<string> data;

try {
  ifstream file;
  string read;
  file.open(path);
  if (!file) {
    throw runtime_error("File failed to open.");
  }
  while (getline(file, read)) {
    stringstream ss(read);
    while (getline(ss, read, ',')) {
      data.push_back(read);
    }
  }
  file.close();
}
  
catch (exception& e) {
  cerr << e.what() << endl;
}
  
string cities;
cout << "The following cities are in the Southern Hemisphere: ";
  
for (int i = 6; i < data.size(); i+=4) {
  if (stoi(data.at(i)) < 0) {
    cities += (data.at(i - 2) + ", ");
  }
}
  
cities.pop_back();
cities.pop_back();
cities += ".";
  
cout << cities;


  //add code above this line
  
  return 0;
  
}

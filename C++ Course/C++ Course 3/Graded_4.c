/*The code below (also shown in the text editor to your left) creates the CelestialBody class as well as the external function ComparedToEarth.
Requirements
Your task is to:

    Transform the ComparedToEarth function so that it becomes a class function of the CelestialBody class but still maintains the same functionalities as when it was an external function. In particular, it returns how much larger or smaller the specified CelestialBody object is compared to Earth.
    Include the private access modifier where appropriate.

YOU MUST MODIFY the code to include these commands in main or you will not pass the test:*/
#include <iostream>
using namespace std;

//add class definitions below this line

class CelestialBody {
  public:
    CelestialBody(string n, double diam, double dist, int m) {
      name = n;
      diameter = diam;
      distance = dist;
      moons = m;
    }
    double ComparedToEarth() {
      double earth = 12756.3;
      double relative_size =diameter / earth;
      return relative_size;
    }
  private:  
    string name;
    double diameter;
    double distance;
    int moons;
};

//add class definitions above this line   



int main() {
  
  CelestialBody planet("Jupiter", 142984, 778360000, 79);
  
  //Modify the code below
  
  cout << planet.ComparedToEarth() << endl;

  //Modify the code above

  return 0;
  
}
/*You are given the following code:
Requirements
Using the same CelestialBody class, write a class function CloserToSun that compares two CelectialBody objects and returns the name of the object that is closer to the sun (smaller distance).
DO NOT EDIT the existing code in main or you will not pass the test:
Expected Output
If mercury is compared to venus using mercury.CloserToSun(venus), then the function will return:*/
#include <iostream>
using namespace std;

//add class definitions below this line

class CelestialBody {
  public:
    CelestialBody(string n, double diam, double dist, int m) {
      name = n;
      diameter = diam;
      distance = dist;
      moons = m;
    }
    string CloserToSun(CelestialBody cb){
      if(distance <cb.distance){
        return name;
      }
      else{
        return cb.name;
      }
    }
    
  private:
    string name;
    double diameter;
    double distance;
    int moons;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below
  
  CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
  CelestialBody venus("Venus", 12103.6, 108160000, 0);
  cout << mercury.CloserToSun(venus) << endl;

  //DO NOT EDIT the code above
  
  return 0;
  
}
/*You are given the following code:
Requirements
Create a few class functions that do the following:

    TotalWeight - returns a double of the combined milligrams, grams, and kilograms attribute.
    CompareWeight - compares the TotalWeight of two Mass objects and returns a string of The first object is heavier. if the first object has more TotalWeight or The second object is heavier. if the second object has more TotalWeight. If both objects have the same TotalWeight, then The two objects weight the same. will be returned.
    Note: All calculations are done in grams. Conversions will be needed! (e.g. 1000 grams = 1 kilogram and 1000 milligrams = 1 gram).

DO NOT EDIT the existing code in main or you will not pass the test:
Expected Output

3017.8
2038.73
The first object is heavier.*/
#include <iostream>
using namespace std;

//add class definitions below this line

class Mass {
  public:
    Mass(double mg, double g, double kg) {
      milligrams = mg;
      grams = g;
      kilograms = kg;
    }
    double TotalWeight(){
      double weight = (milligrams/1000)+(grams)+(kilograms*1000);
      return weight;
    }
    string CompareWeight(Mass m){
      if(TotalWeight() < m.TotalWeight()){
        return "The second object is heavier.";
      }
      else if(TotalWeight() > m.TotalWeight()){
        return "The first object is heavier.";

      }
      else {
        return "The two objecrs weight the same.";
      }
    }
  
  private:
    double milligrams;
    double grams;
    double kilograms;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below

  Mass m1(800, 17, 3);
  Mass m2(730, 38, 2);
  cout << m1.TotalWeight() << endl;
  cout << m2.TotalWeight() << endl;
  cout << m1.CompareWeight(m2) << endl;
  //DO NOT EDIT the code above
  
  return 0;
  
}
/*You are given the following code:
Requirements
Create a few class functions that do the following:

    AddRed - accepts an integer amount as a parameter and returns that amount plus the current number of red marbles.
    AddBlue - accepts an integer amount as a parameter and returns that amount plus the current number of blue marbles.
    AddYellow - accepts an integer amount as a parameter and returns that amount plus the current number of yellow marbles.
    RedTotal - returns the current number of red marbles without any parameters.
    BlueTotal - returns the current number of blue marbles without any parameters.
    YellowTotal - returns the current number of yellow marbles without any parameters.
    BagTotal - returns the total number of red, blue, and yellow marbles without any parameters.

DO NOT EDIT the existing code in main or you will not pass the test:
Expected Output

There are 16 red marbles.
There are 17 blue marbles.
There are 18 yellow marbles.
There are 51 total marbles.*/
#include <iostream>
using namespace std;

//add class definitions below this line

class MarbleBag {
  public:
    MarbleBag(int r, int b, int y) {
      red = r;
      blue = b;
      yellow = y;
    }
    int AddRed(int a){
      red = red + a;
      return red;
      
    }
    int AddBlue(int bl){
      blue = blue + bl;
      return blue;
    }
    int AddYellow(int c){
      yellow = yellow + c;
      return yellow;
    }
    int RedTotal(){
      return red;
    }
    int BlueTotal(){
      return blue;
    }
    int YellowTotal(){
      return yellow;
    }
    int BagTotal(){
      return red + blue+ yellow;
    }

  private:
    int red;
    int blue;
    int yellow;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line
  
  MarbleBag bag(12, 8, 19);
  bag.AddRed(4);
  bag.AddBlue(12);
  bag.AddYellow(-1);
  bag.AddBlue(-3);
  cout << "There are " << bag.RedTotal() << " red marbles." << endl;
  cout << "There are " << bag.BlueTotal() << " blue marbles." << endl;
  cout << "There are " << bag.YellowTotal() << " yellow marbles." << endl;
  cout << "There are " << bag.BagTotal() << " total marbles." << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
/*You are given the following code:
Requirements
Create a few class functions that do the following for the Subway class:

    GetPassengers - Returns the current number of passengers without any parameters.
    Board - Accepts a positive integer that represents the number of passengers boarding the subway. To accept only positive integers, use a conditional such as if (p >= 0). It also uses the CalculateFares function to keep track of how much fares have been collected every time a passenger boards the subway.
    CalculateFares - Calculates fares for all existing passengers on the subway and adds it to total_fares. This is a helper function inside the Board function.
        NOTE: In C++, it is a best practice to make helper class functions private; however, you will not lose credit for making them public in this assignment.
    Disembark - Accepts a positive integer that represents the number of passengers exiting the subway. There cannot be a negative number of passengers on a subway. The fewest number of passengers on a subway is 0. Use a conditional or loop to meet these requirements.
    GetFares - Returns the current total fares that have been collected as a double.

DO NOT EDIT the existing code in main or you will not pass the test:
Expected Output

0
11
55.2*/
#include <iostream>
using namespace std;

//add class definitions below this line

class Subway {
  public:
    Subway() {
      passengers = 0;
      total_fares = 0;
    }
    int GetPassengers(){
      return passengers;
    }
    int Board(int x){
      if(x >=0){
        passengers = passengers + x;
        CalculateFares(x);
      }
      
      
    }
    int Disembark(int y){
      if(y >=0){
        passengers = passengers - y;
        return passengers;
      }
    }
    double GetFares(){
      
      return total_fares;
      
    }
    double CalculateFares(int x) {
      total_fares += passengers*fare;
      return total_fares;
    }
    
  private:
    const double fare = 2.40; //variable cannot be reassigned
    int passengers;
    double total_fares;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line

  Subway s;
  cout << s.GetPassengers() << endl;
  s.Board(23);
  s.Disembark(12);
  cout << s.GetPassengers() << endl;
  cout << s.GetFares() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}

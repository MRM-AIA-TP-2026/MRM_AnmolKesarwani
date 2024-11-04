/*Define the class PracticeClass. It should have only a single string attribute name. This class should not have a constructor.*/
#include <iostream>
using namespace std;

//add class definitions below this line
class PracticeClass{
  public:
    string name;
};    

  
//add class definitions above this line

int main() {
  
  PracticeClass obj;
  obj.name = "Class Object";
  cout << obj.name;
  
  return 0;
  
}
/*Define the class Cat. The class should have a constructor but without any parameters. The constructor will generate the following attributes.

    breed - "American Shorthair"
    color - "black"
    name - "Kiwi"*/

#include <iostream>
using namespace std;

//add class definitions below this line
class Cat{
  public:
    string breed;
    string color;
    string name;
  Cat(){
    breed = "American Shorthair";
    color = "black";
    name = "Kiwi";
  }
};    

  
//add class definitions above this line

int main() {

  Cat cat;
  cout << cat.breed << endl;
  cout << cat.color << endl;
  cout << cat.name << endl;

  return 0;
  
}
/*Define the class Superhero. The class should have a constructor that accepts the following arguments (in this order):

    name- string with the name of the super hero, e.g. "Spider-Man"
    identity - string with the true name of the hero, e.g. "Peter Parker"
    powers - a vector of strings with each element representing a power, see vector example below*/
#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line
class Superhero{
  public:
    string name;
    string identity;
    vector<string> powers;
  Superhero(string n, string i, vector <string> p){
    name =n ;
    identity = i; 
    powers = p;
  }
};    

  
//add class definitions above this line

int main() {

  Superhero iron_man("Iron Man", "Tony Stark", {"armored suit", "laser beams", "flight"});
  cout << iron_man.name << endl;
  cout << iron_man.identity << endl;
  for (auto a : iron_man.powers) {
    cout << a << endl;
  }

  return 0;
  
}
/*define the class Observation which will help record observational data from a scientific outpost in Antarctica. The class should have a constructor that accepts parameters for date, temperature, elevation, and penguins. There should also be an attribute for precipitation. Since Antarctica is a desert, precipitation should default to 0.

    date- string with the date of the observation, e.g. "October 26, 2019"
    temperature - double with the temperature in Celsius, e.g. -47
    elevation - double with elevation in meters, e.g. 329.4
    penguins - integer representing the number of penguins observed, e.g. 3
    precipitation- double with precipitation in centimeters, defaults to 0*/

#include <iostream>
using namespace std;

//add class definitions below this line
class Observation{
  public:

    string date;
    double temperature;
    double elevation;
    int penguins;
    double precipitation;
  Observation(string d , double t, double e, int p){
    date = d;
    temperature = t;
    elevation = e;
    penguins = p;
    precipitation =0;

  }
};    

  
//add class definitions above this line

int main() {

  Observation o("October 26, 2019", -47, 329.4, 3);
  cout << "Today is " << o.date << "." << endl;
  cout << "Temperature: " << o.temperature << endl;
  cout << "Elevation: " << o.elevation << endl;
  cout << o.penguins << " penguins observed with " << o.precipitation << " precipitation." << endl;
  
  return 0;
  
}
/*The BigCat class helps to record information on the animals in the Panthera genus (tiger, lion, jaguar, leopard, and snow leopard). Since all animals are in the same genus, the object will have the default class attribute genus with the string value panthera. The constructor accepts the following parameters (in this order):

    species- string with the species of the animal, e.g. "tigris"
    commonName - string with the common name of the animal, e.g. "tiger"
    habitat - vector of strings with common locations of the animal, e.g. {"tropical rainforests", "grasslands", "temperate forests"}

Your task is to construct a BigCat object called snow_leopard so that when the program runs and prints the information on snow_leopard, you will get the following result:
A snow leopard is part of the uncia species.
Their genus class is panthera.
Some of their habitats include: Himalaya mountains, Siberian mountains, etc.*/
#include <iostream>
#include <vector>
using namespace std;
    
class BigCat {
  public:
    string species;
    string common_name;
    vector<string> habitat;
    string genus = "panthera";
  
  BigCat(string sp, string cn, vector<string> h) {
    species = sp;
    common_name = cn;
    habitat = h;
  }
};

int main() {
  
  //add code below this line
BigCat snow_leopard("uncia", "snow leopard", {"Himalaya mountains", "Siberian mountains"});
  

  //add code above this line
  
  cout << "A " << snow_leopard.common_name; 
  cout << " is part of the " << snow_leopard.species << " species." << endl;
  cout << "Their genus class is " << snow_leopard.genus << "." << endl;
  cout << "Some of their habitats include: ";
  for (auto a : snow_leopard.habitat) {
    cout << a << ", ";
  }
  cout << "etc." << endl;
  
  return 0;
  
}


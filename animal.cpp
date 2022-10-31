#include "animal.h"
//Simranjit Bhella
//4/15/2022
//CS202
//The purpose of this file is to implement the functions from the classes in the animalrace.h file.
//Functions include constructors, destructors, a get random stat function, and a display function,
//More functions and a data structure are required for full functionality

//Constructor with initialization list
Animal::Animal(string name) : name{name} {

    // seed the random number generator
    max_stat = 101;

    // set up the stats
    speed = get_random_stat();
    height = get_random_stat();
    luck = get_random_stat();
}

Animal::~Animal() {}

//Constructor with initialization list
Bunny::Bunny(string name) : Animal{name} {
    jump_height = get_random_stat();
}

Bunny::~Bunny() {}

//Constructor with initialization list
Fish::Fish(string name) : Animal{name} {
    max_depth = get_random_stat();
}

Fish::~Fish() {}

Bird::Bird(string name) : Animal(name) {
    wing_span = get_random_stat();
}

Bird::~Bird() {}

//This function will create random stats for the animal competitors.
int Animal::get_random_stat() {

    return 1 + (rand() % max_stat);
}

//This function will display an animal
void Animal::display() {
    cout << "Name: '" << name << "' Speed: " << speed << " Height: " << height << " Luck: " << luck << endl;
}

//Function for virtual function
void Bird::msg() {}

//Function for virtual function
void Bunny::msg() {}

//Function for virtual function
void Fish::msg() {}
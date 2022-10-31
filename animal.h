#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;
//Simranjit Bhella
//4/8/2022
//CS202
//The purpose of this code is to set up hierarchy of animal classes for the animal race program.
//This file includes the animal class with the bunny, bird, and fish subclasses.
//For some reason, using protected data members caused many problems with the code so everything is public.



#ifndef ANIMAL_H
#define ANIMAL_H

//Animal class parent
class Animal {
    public:
    Animal(string name); //Constructor
    ~Animal(); //Destructor
    int get_random_stat(); //Function to get random stats
    void display(); //Function to display an animal
    void virtual msg() = 0; //Function to allow for dynamic casting for CLL (no longer used)
    //protected
    string name;
    int max_stat;
    int speed;
    int height;
    int luck;
};

//Animal child class
class Bird : public Animal {
public:
    Bird(string name); //Constructor
    ~Bird(); //Destructor
    void msg() override; //override function for dynamic casting
    //protected
    int wing_span;
};

//Animal child class
class Bunny : public Animal {
    public:
    Bunny(string name); //Constructor
    ~Bunny(); //Destructor
    void msg() override; //override function for dynamic casting
    //protected
    int jump_height;
};

//Animal child class
class Fish : public Animal {
    public:
    Fish(string name); //constructor
    ~Fish(); //destructor
    void msg() override; //override function for dynamic casting
    //protected
    int max_depth;
};

#endif

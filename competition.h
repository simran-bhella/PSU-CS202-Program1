#include "animal.h"
#include <vector>
#include <map>

//Simranjit Bhella
//4/24/2022
//CS202
//The purpose of this code is to set up the 3 different competitions required for this program.
//This file includes the wing span competition class, the jump height competition class, and the max depth competition class.
//Each class has public functions with constructors and destructors, as well as functions to add contestants, start the race, and stop the race.
//Each class also has two private data members: the contestants as a vector object, and the scores as a map object.


#ifndef COMP_H
#define COMP_H

//Class for the bird competitions
class WingSpanCompetition {
public:
    WingSpanCompetition(); //Constructor
    ~WingSpanCompetition(); //Destructor
    void add_contestant(Bird *); //Function to add a contestant
    void start_race(); //Function to start a race
    void stop_race(); //Function to stop a race
protected:
    vector<Bird> contestants;  //stores animals
    map<string, float> scores; //stores animal names and scores (key value pair)
};

//Class for the bunny competition
class JumpHeightCompetition{
public:
    JumpHeightCompetition(); //Constructor
    ~JumpHeightCompetition(); //Destructor
    void add_contestant(Bunny *); //Function to add a contestant
    void start_race(); //Function to start a race
    void stop_race(); //Function to stop a race
protected:
    vector<Bunny> contestants; // stores animals
    map<string, float> scores; //stores animal names and scores (key value pair)
};

//Class for the fish competition
class MaxDepthCompetition{
public:
    MaxDepthCompetition(); //Constructor
    ~MaxDepthCompetition(); //Destructor
    void add_contestant(Fish *); //Function to add a contestant
    void start_race(); //Function to start a race
    void stop_race(); //Function to stop a race
protected:
    vector<Fish> contestants; // stores animals
    map<string, float> scores; //stores animal names and scores (key value pair)
};

#endif
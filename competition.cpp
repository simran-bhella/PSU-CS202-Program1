#include "competition.h"

//Simranjit Bhella
//4/24/2022
//CS202
//The purpose of this file is to implement the functions from the classes in the competition.h file.
//Functions include the implementations of constructors, destructors, the wing span competition class,
//the jump height competition class, and the max depth competition class. There is also a defunct speed competition
//class at the bottom which is no longer being used.

//Not sure how to manage memory for vectors and maps.
WingSpanCompetition::WingSpanCompetition() {}

WingSpanCompetition::~WingSpanCompetition() {}

JumpHeightCompetition::JumpHeightCompetition() {}

JumpHeightCompetition::~JumpHeightCompetition() {}

MaxDepthCompetition::MaxDepthCompetition() {}

MaxDepthCompetition::~MaxDepthCompetition() {}

//Code to add contestant
void WingSpanCompetition::add_contestant(Bird * to_add) {
    contestants.push_back(*to_add);
}

//code to start the race
void WingSpanCompetition::start_race() {
    //Creates a score for each contestant
    for (Bird bird : contestants) {
        scores[bird.name] = bird.wing_span + bird.luck + bird.height/2;
    }
}

//Code to stop the race
void WingSpanCompetition::stop_race() {
    // find first and second place winners
    for (Bird bird : contestants) {
        cout << "Contestants for the Wing Span Competition: " << endl;
        bird.display();
    }

    //Finding the winner and runner up
    string first_name;
    string second_name;
    int first_score = 0;
    int second_score= 0;

    for (auto &item : scores) {
        if (item.second > first_score) {
            second_name = first_name;
            second_score = first_score;

            first_name = item.first;
            first_score = item.second;
        }

        //cout << "'" << item.first << "': " << item.second << ", ";
    }
    cout << "The winner is " << first_name << ", and the runner up is " << second_name << "!" << endl;
}


//All functions past this point are copies of the previous ones

void JumpHeightCompetition::add_contestant(Bunny * to_add) {
    contestants.push_back(*to_add);
}

void JumpHeightCompetition::start_race() {
    for (Bunny bunny : contestants) {
        scores[bunny.name] = bunny.jump_height + bunny.luck + bunny.height/2;
    }

}

void JumpHeightCompetition::stop_race() {
    // find first and second place winners
    for (Bunny bunny : contestants) {
        cout << "Contestants for the Jump Height Competition: " << endl;
        bunny.display();
    }

    string first_name;
    string second_name;
    int first_score = 0;
    int second_score= 0;

    for (auto &item : scores) {
        if (item.second > first_score) {
            second_name = first_name;
            second_score = first_score;

            first_name = item.first;
            first_score = item.second;
        }

        //cout << "'" << item.first << "': " << item.second << ", ";
    }
    cout << "The winner is " << first_name << ", and the runner up is " << second_name << "!" << endl;
}

void MaxDepthCompetition::add_contestant(Fish * to_add) {
    contestants.push_back(*to_add);
}

void MaxDepthCompetition::start_race() {
    for (Fish fish : contestants) {
        scores[fish.name] = fish.max_depth + fish.luck + fish.height/2;
    }

}

void MaxDepthCompetition::stop_race() {
    // find first and second place winners
    for (Fish fish : contestants) {
        cout << "Contestants for the Max Depth Competition: " << endl;
        fish.display();
    }

    string first_name;
    string second_name;
    int first_score = 0;
    int second_score= 0;

    for (auto &item : scores) {
        if (item.second > first_score) {
            second_name = first_name;
            second_score = first_score;

            first_name = item.first;
            first_score = item.second;
        }

        //cout << "'" << item.first << "': " << item.second << ", ";
    }
    cout << "The winner is " << first_name << ", and the runner up is " << second_name << "!" << endl;
}



//No longer running speed competitions as competitions between animals are unfair
/*
void SpeedCompetition::add_contestant(Animal * to_add) {
    contestants.push_back(*to_add);
}

void SpeedCompetition::stop_race() {

    // find first and second place winners
    for (Animal animal : contestants) {
        animal.display();
    }

    cout << "{";
    for (auto &item : scores) {
        cout << "'" << item.first << "': " << item.second << ", ";
    }
    cout << "}" << endl;

}

void SpeedCompetition::start_race() {

    for (Animal animal : contestants) {
        scores[animal.name] = animal.luck + animal.speed - animal.height;
    }
}
*/
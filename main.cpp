#include "animal.h"
#include "competition.h"
#include "LLL.h"

//Simranjit Bhella
//4/24/2022
//CS202
//The purpose of this file is to test the functionality of the program using the competition and animal classes.
//In this code under main, this testing takes place through a dummy application with a user nav menu that allows for the
//tesing of different functions. For this program this includes running a Wing Span Competition Between Birds, running
//a Jump Height Competition Between Bunnies, and running a Max Depth Competition Between Fish.

int main() {

    //Needs to run once for random stats
    srand((unsigned) time(0));

    int loop = 0;
    int menu = 0;

    do {
        cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Please choose an option below: " << endl;
        cout << "[1] Run a Wing Span Competition Between Birds" << endl;
        cout << "[2] Run a Jump Height Competition Between Bunnies" << endl;
        cout << "[3] Run a Max Depth Competition Between Fish" << endl;
        cout << "[Anything Else] Quit the program" << endl << endl;
        cin >> menu;
        cin.ignore(100, '\n');

        //If the user wants to run a competition between birds
        if (menu == 1) {
            vector<string> birdnames;

            int createbirdloop = 1;

            while (createbirdloop == 1) {
                string new_bird;
                cout << "Enter bird name: ";
                cin >> new_bird;
                birdnames.push_back(new_bird);

                cout << "Add another? 1 for Yes and 0 for No: ";
                cin >> createbirdloop;
            }

            vector<Bird> createdbirds;
            for (string birdname: birdnames) {
                createdbirds.push_back(Bird(birdname));
            }

            WingSpanCompetition w = WingSpanCompetition();
            for (Bird bird: createdbirds) {
                //CLLbirds.insert(bird, "Bird");
                w.add_contestant(&bird);

            }

            w.start_race();
            w.stop_race();

        }

        //If the user wants to run a competition between bunnies
        else if (menu == 2) {

            vector<string> bunnynames;

            int createbunnyloop = 1;

            while (createbunnyloop == 1) {
                string new_bunny;
                cout << "Enter bunny name: ";
                cin >> new_bunny;
                bunnynames.push_back(new_bunny);

                cout << "Add another? 1 for Yes and 0 for No: ";
                cin >> createbunnyloop;
            }

            vector<Bunny> createdbunnies;
            for (string bunnyname: bunnynames) {
                createdbunnies.push_back(Bunny(bunnyname));
            }

            JumpHeightCompetition j = JumpHeightCompetition();
            for (Bunny bunny: createdbunnies) {
                j.add_contestant(&bunny);

            }

            j.start_race();
            j.stop_race();

        }

    //If the user wants to run a competition between fish
        else if (menu == 3) {
        vector<string> fishnames;

        int createfishloop = 1;

        while (createfishloop == 1) {
            string new_fish;
            cout << "Enter fish name: ";
            cin >> new_fish;
            fishnames.push_back(new_fish);

            cout << "Add another? 1 for Yes and 0 for No: ";
            cin >> createfishloop;
        }

        vector<Fish> createdfish;
        for (string fishname : fishnames) {
            createdfish.push_back(Fish(fishname));
        }

        MaxDepthCompetition m = MaxDepthCompetition();
        for (Fish fish : createdfish) {
            m.add_contestant(&fish);

        }

        m.start_race();
        m.stop_race();

    }

        //If anything else then change quite loop
        else {
            loop = 1;
        }
    } while (loop != 1);
}




    //Version with CLL that I could not get working even with hours of debugging...
    /*CLL CLLbirds = CLL();

    vector<string> birdnames;

    int createbirdloop = 1;

    while (createbirdloop == 1) {
        string new_bird;
        cout << "Enter bird name: ";
        cin >> new_bird;
        birdnames.push_back(new_bird);

        cout << "Add another? 1 for Yes and 0 for No: ";
        cin >> createbirdloop;
    }

    vector<Bird> createdbirds;
    for (string birdname : birdnames) {
        createdbirds.push_back(Bird(birdname));
    }

    WingSpanCompetition w = WingSpanCompetition();
    for (Bird bird : createdbirds) {
        //CLLbirds.insert(bird, "Bird");
        w.add_contestant(&bird);

    }


    //Adding birds to competition vector from CLL
    int addbirdloop = 1;

    CLLbirds.displayall();


    while (addbirdloop == 1) {
        string bird_name;
        Bird * retrieve;
        cout << "Enter bird name to add to competition: ";
        cin >> bird_name;

        CLLbirds.retrieve(bird_name, *retrieve);

        w.add_contestant(retrieve);

        cout << "Add another? 1 for Yes and 0 for No: ";
        cin >> addbirdloop;

    }


    w.start_race();
    w.stop_race();

};
 */
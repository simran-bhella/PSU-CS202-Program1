#include "LLL.h"

//Simranjit Bhella
//4/21/2022
//CS202
//The purpose of this file is to implement the functions in the LLL.h file.
//Functions include constructors, destructors, insert, display all, and retrieve functions

//No matter how much debugging I did I simply could not get the CLL to work... due to this I also ended up using a map over

animalnode::animalnode() {

}

animalnode::~animalnode() {

}

CLL::CLL() {
//    rear = new animalnode;
////    rear->data = new Animal("");
//    rear->data->name = "";
//    rear->data->speed = 0;
//    rear->data->height = 0;
rearexists = 0;

}
CLL::~CLL() {

}

void CLL::insert(Animal &to_add, string type) {

    if (rearexists == 0) {
        rear = new animalnode;
        if (type == "Bird") {
            rear->data = dynamic_cast<Bird *> (&to_add);
        }
        else if (type == "Bunny") {
            rear->data = dynamic_cast<Bunny *> (&to_add);
        }
        else if (type == "Fish") {
            rear->data = dynamic_cast<Fish *> (&to_add);
        }

        rear->next = rear;
        rearexists = 1;
    }

    // TODO: When at the end of the list
    else {
        auto * newnode = new animalnode;
        if (type == "Bird") {
            newnode->data = dynamic_cast<Bird *> (&to_add);
        }
        else if (type == "Bunny") {
            newnode->data = dynamic_cast<Bunny *> (&to_add);
        }
        else if (type == "Fish") {
            newnode->data = dynamic_cast<Fish *> (&to_add);
        }

        // TODO: insert the new node to the rear, set next to new rear!
        animalnode * tmp = rear->next;

        rear->next = newnode;
        newnode->next = tmp;
    }

//    else {
//        auto * tmp = new animalnode;
//        if (type == "Bird") {
//            tmp->data = dynamic_cast<Bird *> (&to_add);
//        }
//        else if (type == "Bunny") {
//            tmp->data = dynamic_cast<Bunny *> (&to_add);
//        }
//        else if (type == "Fish") {
//            tmp->data = dynamic_cast<Fish *> (&to_add);
//        }
//
//        while (tmp->next !=rear) {
//            tmp = tmp->next;
//        }
//
//        tmp->next = rear->next;
//        rear->next = tmp;
//    }
}

void CLL::displayall() {

    animalnode * tmp = rear->next;


    if (rear->next == rear) {
        cout << rear->data->name << endl;
    }

    else {
        while (tmp != rear) {
            cout << tmp->data->name << endl;
            tmp = tmp->next;
        }
        cout << rear->data->name << endl;
    }

}

void CLL::retrieve(string to_find, Animal &retrieve) {

    animalnode * tmp = rear->next;

    if (tmp->next == rear) {

        if (to_find.compare(tmp->data->name) == 0) {
            retrieve = *tmp->data;
        }
    }

    while (tmp != rear) {
        if (to_find.compare(tmp->data->name) == 0) {
            retrieve = *tmp->data;
        }
        tmp = tmp->next;
    }
}







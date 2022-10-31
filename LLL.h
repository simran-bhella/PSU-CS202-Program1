#include "animal.h"
#include <list>

//Simranjit Bhella
//4/20/2022
//CS202
//The purpose of this code is to set up the linked list data structure that will be used for this animal race program.
//The classes used include the animal node class which setsup the node object, and the LLLanimal class which will manage the list.


//No matter how much debugging I did I simply could not get the CLL to work... due to this I also ended up using a map over an array of linked lists for score


class animalnode {
public:
    animalnode();
    ~animalnode();
    void set_next(animalnode * new_next);
    animalnode *& get_next();
    void display() const;
    Animal * data;
    animalnode * next;
};

class CLL {
public:
    CLL();
    ~CLL();
    void insert(Animal &to_add, string type);
    void remove(string to_remove);
    void display(string to_display);
    void retrieve(string to_find, Animal &retrieve);
    void removeall();
    void displayall();
protected:
    animalnode * rear;
    int rearexists;
};

class LLLanimal {
public:
    LLLanimal();
    ~LLLanimal();
    void insert();
    void remove(string to_remove);
    void display();
    void retrieve();
    void removeall();
private:
    animalnode * head;

};

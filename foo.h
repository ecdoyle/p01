// We include these header files because aspects of them will
// be used later on and we need to have access to them when the
// program is linked and run
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

// declares the STATE enum and the states of it, set to 0 and 1
enum STATE{ OFF=0, ON=1};


// Lamp class declaration that includes protected floats length, 
// width, height, watts, and char* brand, public STATE state, the
// Lamp constructor and destructor, static constant float ac_power 
// and the methods set_brand and debug, which we were given input
// and return values/types in the prompt. Nothing is private.
class Lamp {
  //protected
 protected:
  float length;
  float height;
  float width;
  float watts;
  char* brand;

  //public
 public:
  STATE state;
  Lamp();
  ~Lamp();
  bool set_brand(char* arg);
  bool debug(FILE* fp);
  static const float ac_power;
  //private
 private:

};

// Node class declaration that includes Node pointer pnext,
// also public values data of type Lamp, the Node constructor,
// and destructor, as well as the methods setData, setNext, Data
// and Next, for setting and obtaining lamp data and next nodes
class Node{
  Node* pnext;

 public:
  Node(){};
  ~Node(){};
  Lamp data;
  void setData(Lamp nextData);
  void setNext(Node* nextNode);
  Lamp Data();
  Node* Next();
};


// List class declaration which includes Node pointer head,
// as well as the public values for the List constructor and 
// destructor, as well as the void methods Print and Append
// to print and append values on the list
class List{
  Node *head;

 public:
  List(){head=NULL;};
  ~List(){};
  void Print();
  void Append(Lamp data);
};

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <iostream>
using namespace std;

enum STATE{ OFF=0, ON=1};

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

//const float Lamp::ac_power=60.0;

class Node{
  Node* pnext;

 public:
  Node(){};
  Lamp data;
  void setData(Lamp nextData);
  void setNext(Node* nextNode);
  Lamp Data();
  Node* Next();
};

class List{
  Node *head;

 public:
  List(){head=NULL;};
  void Print();
  void Append(Lamp data);
};

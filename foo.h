#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <iostream>


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

const float Lamp::ac_power=60.0;

class Node{
  Node* pnext;

 public:
  Node(){};
  Lamp* data;
  void setData(Lamp nextData){data=& nextData;}; //set the next node's data
  void setNext(Node* nextNode){pnext=nextNode;}; //set the next node
  Lamp Data(){return *data;}; //print list data
  Node* Next(){return pnext;}; //print next
};

class List{
  Node *head;

 public:
  List(){head =NULL;};
  void Print();
  void Append(Lamp data);
};

void List::Print(){

  Node *tmp =head; //temporary pointer
  
  //if there are no nodes 
  if(tmp ==NULL){
    std::cout << "EMPTY" << std::endl;
    return;
  }

  //if only one node
  if(tmp->Next() ==NULL) {
    std::cout << tmp->Data();
    std::cout << " -->";
    std::cout << "NULL" << std::endl;
  }
  else{
    //parse and print the list
    do{
      std::cout << tmp->Data();
      std::cout << "-->";
      tmp=tmp->Next();
    }
    while(tmp != NULL);
    std::cout << "NULL" << std::endl;
  }
}


void List::Append(Lamp data){
  //create a new node
  Node* newNode= new Node();
  newNode->setData(data);
  newNode->setNext(NULL);

  //another temp node!!
  Node *tmp = head;

  if(tmp !=NULL){
    while(tmp->Next() != NULL){
      tmp=tmp->Next();
    }

    tmp->setNext(newNode);
  }
  else{ //then it is the first node in the list
    head= newNode;
  }
}

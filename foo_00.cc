#include "foo.h"
#include <string.h>

Lamp::Lamp(){
  length=-1;
  height=-1;
  width=-1;
  watts=-1;
  state= OFF;
}

Lamp::~Lamp(){
  delete [] brand;
}

bool Lamp :: set_brand(char* arg){
  printf("setting the brand\n");
  brand= new char[100];
  strcpy(brand,arg);
  return true;
}

bool Lamp :: debug(FILE* fp) {
  /* fprintf(fp, "Brand: %s \n Length: %f \n Height: %f \n Width: %f \n Watts: %f  State: %d", Lamp.brand, Lamp.length, Lamp.height, Lamp.width, Lamp.watts, Lamp.state);
   */
  printf("print");
  return true;
}

const float Lamp::ac_power=60.0;

void Node::setData(Lamp  nextData){
  data=nextData;
}

void Node:: setNext(Node* nextNode){
  pnext=nextNode;
}

Lamp Node:: Data(){
  return data;
}
Node* Node::Next(){
  return pnext;
}

void List::Print(){
  printf("printing!");
  Node *tmp=head;
  /*
 if(tmp ==NULL){  //if no contents in list
   std::cout<<"EMPTY"<<std::endl;
    return;
  }
 if(tmp->Next() ==NULL){ //if only 1 obj in list
   std::cout<< tmp->Data();
   std::cout<< "NULL"<< std::endl;
 }

 else{
   //more than one object
   do{
     std::cout << tmp->Data();
     std::cout << "-->";
   tmp= tmp->Next();
 }

 while(tmp!=NULL);
 std::cout<<"NULL"<< std::endl;

 }
  */ 

}

void List::Append(Lamp data){

  //make new node and set data
  Node* newNode= new Node();
  newNode-> setData(data);
  newNode-> setNext(NULL);

  Node *tmp=head;
  if(tmp !=NULL) {
    while(tmp->Next() !=NULL) { //loop through to find end of list, as long as the next isn't null, then it isnt the end of the list
      tmp =tmp->Next();
	}
    tmp->setNext(newNode);
  }
  else{
    head=newNode; //need to initialize the head of the list if first
  }
}

#include "foo.h"
#include <string.h>

Lamp::Lamp(float arg){
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
  brand= new char[100];
  strcpy(brand,arg);
  return true;
}

bool Lamp :: debug(FILE* fp) {
  fprintf(fp, "Brand: %s \n Length: %f \n Height: %f \n Width: %f \n Watts: %f  State: %d", Lamp.brand, Lamp.length, Lamp.height, Lamp.width, Lamp.watts, Lamp.state);
  
  return true;
}
void Node::setData(Lamp  nextData){
  data=nextData;
}

void Node:: setNext(Node* nextNode){
  next=nextNode;
}
Lamp Node:: Data(){
  return data;
}
Node* Node::Next(){
  return next;
}

void List::Print(){

  Node *tmp=head;
 
 if(tmp ==NULL){  //if no contents in list
    cout<<"EMPTY"<<endl;
    return;
  }
 if(tmp->Next() ==NULL){ //if only 1 obj in list
   cout<< tmp->Data();
   cout<< "NULL"<< endl;
 }
 else{
   //more than one object
   do<< tmp->Data();
   tmp= tmp->Next();
 }
 while(tmp!=NULL);
 cout<<"NULL"<< endl

   }


void List::Append(Node data){

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
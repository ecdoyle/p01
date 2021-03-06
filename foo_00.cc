// Include foo.h so it links properly
#include "foo.h"


// Sets values for the Lamp constructor. These values were given to us
// in the prompt, basically everything was set to -1 and the state
// was set to OFF
Lamp::Lamp(){
  length=-1;
  height=-1;
  width=-1;
  watts=-1;
  state= OFF;
}

// Contents of the Lamp destructor. This deletes the content of brand
// if it is not NULL already. This cleans up the memory used by the
// class. 
Lamp::~Lamp(){
   if(brand !=(char*) NULL){
    delete [] brand;
    }
}


// Contents of the set_brand method of Lamp class that returns bool
// input is a char* arg, which is the brand given by the command line
// This method allocates space for the brand and then copies the content
// of the input argument and places it in the brand associated with that
// insance of the class and then returns true
bool Lamp :: set_brand(char* arg){
  brand= new char[100];
  strcpy(brand,arg);
  return true;
}


// Contents of the debug methof of Lamp class that returns bool
// input is where it should be printed( in foo.cc it is used as
// stdout) and then return true  
bool Lamp :: debug(FILE* fp) {
   fprintf(fp, "Brand: %s \n Length: %f \n Height: %f \n Width: %f \n Watts: %fn ", brand,length, height,width, watts);
   printf("hey");
   return true;
}

// constant float attribute of class Lamp is set to 60.0
const float Lamp::ac_power=60.0;


// set Data method of class Node takes input of Lamp and sets
// the data to it 
void Node::setData(Lamp  nextData){
  data=nextData;
}


// set next method of class Node takes node pointer and 
// sets the reference for the next node to be it
void Node:: setNext(Node* nextNode){
  pnext=nextNode;
}

// data method of class Node returns the data as a lamp
Lamp Node:: Data(){
  return data;
}


// next method of class Node returns the node pointer to 
// next on list
Node* Node::Next(){
  return pnext;
}


// print method of class list should print the contents of 
// the linked list of type lamp 
void List::Print(){
  /* 
  Node *tmp=head;
  
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


// Append method of class list takes in data in the form
// of Lamp and sets that data to the data content of the next
// node of th elinked list and returns void. It does this by
// using the methods setData and setNext. setData puts the Lamp
// data into the correct spot, and the setNext method moves the
// reference to the end of the list to the next spot 
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
    head=newNode;
  }
}


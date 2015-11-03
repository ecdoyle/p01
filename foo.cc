// Must include the header file in order to link the program correctly
#include "foo.h"

// We want the main program to take command line arguments so we 
// write it to take argc (number of command line arguments) amd 
// argv (the actual contents of the command line arguments)
int main(int argc, char** argv){

  // initializing the variable to loop through the Lamp array content
  int i;

  // PICONE APPROVED THIS VALUE AT 2:30 PM ON MONDAY, NOVEMBER 2ND 2015 
  // AT HIS OFFICE WITH RAQUEL, CLUUUIR AND DANA AS WITNESSES
  // SINCE THIS WAS COMPILED ON A MAC AND IT CANNOT DO DYNMAIC SIZED ARRAY
  Lamp lmp[999]; 

  //initializing the list of class List for the singly linked list
  List list;

  // initializing the loop to loop through the command line arguments 
  // for which we want to store argv[1] and above as the brands of the 
  // lamps. Since argc also includes the name of the program, and the loop
  // is starting at 0, then we want it to stop at argc-1
  for(i=0;i<(argc-1); i++){  
    
    // For each of the command line arguments we want to set the brand
    // since set_brand is a method of class Lamp, we need to access it by
    // setting the corresponding lamp value of the array, to the correct
    // command line argument, starting with argv[1] since argv[0] is the 
    // program. Since the loop starts at i=0 we then assign the lmp index
    // to be equal to i, and the argv index to be i+1
    lmp[i].set_brand(argv[i+1]);
    
    // After setting the brand for the lamp we would like to add it to 
    // the linked list. We do this by accessing the List method Append
    // Append takes data of type 'Lamp' so we can pass it the lmp 
    list.Append(lmp[i]);
 
   }
  
  // Next we want to print the data content of the list, so we loop
  // through the contents and call the debug method
  for(i=0; i<(argc-1); i++){
    
    // the Debug method is of the class Lamp so we access it that way
    lmp[i].debug(stdout);
    }
  
  // Instantiation said that we would return an int, so we return 0
  return 0;
}

//EOF

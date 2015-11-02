#include "foo.h"

int main(int argc, char** argv){

  int i;
  Lamp lmp[999]; //PICONE APPROVED THIS VALUE AT 2:30 PM ON MONDAY, NOVEMBER 2ND, 2015 AT HIS OFFICE WITH RAQUEL, CLUUUUIR AND DANA AS WITNESSES
  
  Lamp ldata[999];
  List list;

  for(i=0;i<argc; i++){  
                       //loop goes from 0 to less than argc because argc is the number of command line arguments, where the first one is the program name 
    
   lmp[i].set_brand(argv[i+1]); 
                               //set_brand has to access argc[i+1] because if it too started at i=0 then you would be attempting to set the brand to a value that really is the program name
   //ldata[i]= lmp[i]; 
   //if pointer then use ->
   list.Append(lmp[i]);
   //need to print everything 
  }
  for(i=0; i<argc; i++){
    lmp[i].debug(stdout);
  }
  return 0;
}

//EOF
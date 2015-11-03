#include "foo.h"

int main(int argc, char** argv){

  int i;
  Lamp lmp[999]; //PICONE APPROVED THIS VALUE AT 2:30 PM ON MONDAY, NOVEMBER 2ND, 2015 AT HIS OFFICE WITH RAQUEL, CLUUUUIR AND DANA AS WITNESSES
  
  List list;
  
 //check to see if reading arguments in correctly
  printf("%d \n", argc);
  
  printf("%s \n", argv[1]);
  

  for(i=0;i<argc; i++){  
                       //loop goes from 0 to less than argc because argc is the number of command line arguments, where the first one is the program name 
    printf("%d \n", i); 
    lmp[i].set_brand(argv[i+1]);
    printf("argv[i+1] = %s \n", argv[i+1]);
                               //set_brand has to access argc[i+1] because if it too started at i=0 then you would be attempting to set the brand to a value that really is the program name
    
   //if pointer then use ->
   // list.Append(lmp[i]);
   //need to print everything 
  }
  /*
  for(i=0; i<argc; i++){
    lmp[i].debug(stdout);
    }
  */
  printf("yay! \n");
  return 0;
}

//EOF

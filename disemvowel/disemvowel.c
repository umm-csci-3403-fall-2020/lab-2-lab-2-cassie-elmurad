#include <stdlib.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  char *newString;
  int i = 0;
  while(str[i] != '\0'){
     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
        i++; 
     } else{
        
	     
     }

  }// end while 
  return (char*) "";
}

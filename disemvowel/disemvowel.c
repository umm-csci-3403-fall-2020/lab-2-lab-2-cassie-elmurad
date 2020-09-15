#include <stdlib.h>
#include<cstring>
#include<ctype.h>
#include "disemvowel.h"

int vowelCheck(char *str){
char letter;
int i =0;
  int stringLength = strlen(str);
  letter = tolower(str[i]);
  if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ){
        stringLength--;
  }
      return stringLength;
}


char *disemvowel(char *str) {
  char *newString, oldletter;
  int i =0, j=0, newStringLength=0;
  // string length gets plus one because of null terminator
  newStringLength = vowelCheck(str);
  newString = (char*) calloc(newStringLength+1, sizeof(char));
  while(str[i] != '\0'){
	oldletter = str[i];
     if(oldletter == 'a' || oldletter == 'e' || oldletter == 'i' || oldletter == 'o' || oldletter == 'u' ){	
	i++;
     } else{ 
	newString[j] = str[i];
 	j++;
	i++;
	     
     }
     // Add null thing to end 
     newString[newStringLength+1] = '\0';   
  }
  return newString;
}



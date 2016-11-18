#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(){

  printf("Whaddya wanna run, run anything, run anything:\t");
  char read[256];
  char * s = read;
  fgets(read, sizeof(read), stdin);
  s = strsep(&s, "\n"); //strip \n - &s gives pointer to a string. Also turns \n into a null value, which is necessary for later
  
  char * commands[100];
  int ctr = 0;
  while(commands[ctr] = strsep(&s, " ")){
    ctr++;
  }

  printf("Running %s\n", commands[0]);
  
  execvp(commands[0], commands);
  
  return 0;
}

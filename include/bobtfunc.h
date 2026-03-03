#include <string.h>
#include <stdio.h>

int test(int a, int b){
     return a+b;
}


int isItBoBot(char greeter[],char name[]){
     char chatStarter[] = "hay";
     char nameForBo[] = "bobot"; 

     if(strcmp(chatStarter,greeter) == 0){
          //later code TODO
     }else{
          printf("Sysyem fail on greeter\n");
          return 1;
     }
     if(strcmp(nameForBo,name) == 0){
          //later code TODO
     }else{
          printf("Sysyem fail on name \n");
          return 1;
     }
     return 0;
}
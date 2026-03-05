
//system fiels
#include <stdbool.h>

//local hedder fiels
#include "../include/bobtfunc.h"


//definds and non changing vars



//call functions 
int systemTest();
int actvateBoBot();
int mainLoop();


//program wide vars
int programEnd = false;

int main(int argc, char const *argv[])
{
    //vars
    int testCallPorF;

    //enter main loop for the code

    // comit test
    testCallPorF = systemTest();
    if(testCallPorF == 0){
        printf("all tests pass\n");
    }else{
        return testCallPorF;
    }
    
    if(int startreading = actvateBoBot() == 4);{
        mainLoop();
    }
    return 0;
}



//json file fore example


int systemTest()
{
    char name[] = "bobot";
    char greater[] = "hay";
    printf("TESTING SYSTEMS\n");



    int passGreter = isItBoBot(greater,name);
    if(passGreter == 0){
        printf("Test Pass\n");
    }else{
        return 1;
    }
    return 0;
}

int mainLoop(){
    int dontClose = 0;
    int closeProgram = 0;
    while(dontClose == 0){
        printf("hello world !!!\n");
        closeProgram++;
        if(closeProgram == 15){
            dontClose = 1;
        }
    }
}


/*
    In this functoin we call to see if the name the user type is the name botbot in that spelling so that it is readable to the code.
    once this is done it will return a vall of pass or 4 saying that it has pass reconisasion and ready for the next part.


*/
int actvateBoBot(){
    char name[5];
    char caller[4];
    scanf("%s", &caller);
    char idc = getchar();
    scanf("%s", &name);
    
    int passBoBot = isItBoBot(caller,name);
    if(passBoBot == 0){
        printf("Hello user, what do you need?\n");
        return 4;
    }
    return 1;
}

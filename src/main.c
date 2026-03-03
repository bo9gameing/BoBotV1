
//system fiels
#include <stdbool.h>

//local hedder fiels
#include "../include/bobtfunc.h"


//definds and non changing vars



//call functions 
int startCall();
int actvateBoBot();



//program wide vars
int programEnd = false;

int main(int argc, char const *argv[])
{
    //vars
    int testCallPorF;

    //enter main loop for the code

    // comit test
    testCallPorF = startCall();
    if(testCallPorF == 0){
        printf("all tests pass\n");
    }else{
        return testCallPorF;
    }
    actvateBoBot();
    return 0;
}



//json file fore example


int startCall()
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




/*
    In this functoin we call to see if the name the user type is the name botbot in that spelling so that it is readable to the code.
    once this is done it will return a vall of pass or 4 saying that it has pass reconisasion and ready for the next part.


*/
int actvateBoBot(){
    char name[5];
    scanf("%s", &name);
    int passBoBot = isItBoBot("hay",name);
    if(passBoBot == 0){
        printf("Hello user\n");
        return 4;
    }
}

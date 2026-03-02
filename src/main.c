#include <stdio.h>
#include "../include/botest.h"


int startCall();


int main(int argc, char const *argv[])
{
    //vars
    int testCallPorF;



    // comit test
    testCallPorF = startCall();
    return testCallPorF;
}






int startCall()
{
    printf("TESTING SYSTEMS\n");
    int pass = test(1,2);
    if(pass == 3){
        return 0;
    }else{
        return 5;
    }
    
}

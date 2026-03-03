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
    char name[] = "bobot";
    char greater[] = "hay";
    printf("TESTING SYSTEMS\n");



    int passGreter = isItBoBotTest(greater,name);
    if(passGreter == 0){
        printf("Test Pass\n");
    }else{
        return 1;
    }
    return 0;
}

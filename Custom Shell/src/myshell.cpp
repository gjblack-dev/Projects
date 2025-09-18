#include <iostream>
#include <cstring>
#include "param.hpp"
using namespace std;



int main(int argc, char **argv){
    Param *param;
    string inputLine;
    int isDebug = 0;

    if(argc > 1){
        if(strcmp(argv[1], "-Debug") == 0){
            isDebug = 1;
        }
    }

    while(true){
    cout << "$$$ ";
    getline(cin, inputLine);

    char* input = new char[inputLine.length() + 1]; 
    strcpy(input, inputLine.c_str()); 

    Param *param = new Param(input);


     if(isDebug == 1)
    param->printParams();  
    delete[] input;
    }
    

    delete param;
    return EXIT_SUCCESS;
}
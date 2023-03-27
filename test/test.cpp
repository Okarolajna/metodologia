#include "../src/code.hpp"

#include <iomanip>
#include <iostream>
using namespace std;

int main(){

if(multiple(1) == 0){
    cout << "The number must be bigger than 0!" << endl;
    return 0;
}

if(multiple(0) < 0){
    cout << "The number must be bigger than 0!" << endl;
    return 0;
}


cout << "OK" << endl;


    return 0;
}

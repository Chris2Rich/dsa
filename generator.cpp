#include <string>
#include <vector>
#include <future>
#include <thread>
#include <iostream>
#include <math.h>

std::string truepassword = "Test";

bool checkpassword(std::string attempt){
    return (attempt == truepassword);
}

std::string passwordgenerator(int maxsize){
    for(char i = 0; i < 256; i++){
        
    }
    return "";
}

int main(){
    std::cout << pow(256, 125);
    return 0;
}
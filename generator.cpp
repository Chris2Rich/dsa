#include <string>
#include <vector>
#include <future>
#include <thread>
#include <iostream>
#include <math.h>

int maxsize = 4;
std::string password = "Test";

bool tester(std::string s){
    return (s == password) ? true : false;
}

std::string cracker(){
    std::string temp(maxsize,char(0));
    char* ptr = temp.end()-1;
    while(ptr != temp.begin() && temp[0] != char[256]){
        if(tester(temp)){
            return temp;
        }
        
    }
}

int main(){
    std::cout << cracker("");

    return 0;
}
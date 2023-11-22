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
    auto ptr = temp.end()-1;
    while(ptr != temp.begin() && temp[0] != char(256)){
        if(tester(temp)){
            return temp;
        }
        if(temp[temp.size()-1] != char(256)){
            
        }
    }
}

int main(){
    std::cout << cracker();

    return 0;
}

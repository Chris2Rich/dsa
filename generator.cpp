#include <string>
#include <vector>
#include <future>
#include <thread>
#include <iostream>
#include <math.h>

int maxsize = 4;
std::string password = *new std::string(maxsize-1,char(0)) + char(97);

bool tester(std::string s){
    return (s == password) ? true : false;
}

void increment(std::string* s, int itr){
    if(s->operator[](itr) != char(255)){
        s->operator[](itr)++;
    }
    else{
        s->operator[](itr) = char(0);
        increment(s, itr-1);
    }
}

std::string cracker(){
    std::string temp(maxsize, char(0));
    std::string limit(maxsize, char(255));
    
    while(temp != limit){
        if(tester(temp)){
            return temp;
        }
        if(temp[temp.size()-1] != char(255)){
            increment(&temp,temp.size()-1);
        }
    }
    
    return "Attempt Failed";
}

int main(){
    std::cout << cracker();

    return 0;
}

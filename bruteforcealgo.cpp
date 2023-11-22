#include <string>
#include <vector>
#include <thread>
#include <iostream>

int maxsize = 3;
std::string password = "tef";

signed char cmax(255);
signed char cmin(0);

bool tester(std::string s){
    return (s == password) ? true : false;
}

inline void increment(std::string* s, int itr){
    if(s->operator[](itr) != cmax){
        s->operator[](itr)++;
    }
    else{
        s->operator[](itr) = cmin;
        increment(s, itr+1);
    }
}

std::string cracker(){
    std::string temp(maxsize, cmin);
    std::string limit(maxsize, cmax);
    
    while(temp != limit){
        
        if(tester(temp)){
            return temp;
        }
        else{
            increment(&temp,0);
        }
    }
    
    return "Attempt Failed";
}

int main(){
    std::cout << cracker();

    return 0;
}

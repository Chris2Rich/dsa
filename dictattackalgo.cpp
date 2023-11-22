#include <string>
#include <vector>
#include <thread>
#include <iostream>

int wordcount = 3;
std::string password = "ascammertest";
std::vector<std::string> dictionary {"a","scammer","brain","fart","test","eat"};

bool tester(std::vector<std::string*> s){
    std::string ans = "";
    for(int i = 0; i< s.size();i++){
        ans+= *s[i];
    }
    return (ans == password) ? true : false;
}

void increment(std::vector<std::string*>* s, int itr){
    if(*s->operator[](itr) != dictionary[dictionary.size()-1]){
        s->operator[](itr)++;
    }
    else{
        s->operator[](itr) = &dictionary[0];
        increment(s, itr+1);
    }
}

std::string cracker(){
    std::vector<std::string*> temp(wordcount, &dictionary[0]);
    std::vector<std::string*> limit(wordcount, &dictionary[0] + dictionary.size());
    
    while(temp != limit){
        
        if(tester(temp)){
            std::string ans = "";
            for(int i = 0; i < temp.size(); i++){
                ans += *temp[i];
            }
            return ans;
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

#include <iostream>
#include <vector>

template <typename T>
bool is_subsequence(std::vector<T> a, std::vector<T> b){
    typename std::vector<T>::iterator ptr = b.begin();
    for (int i = 0; i < a.size(); i++){
        if (a[i] == *ptr){
            ptr++;
        }
    }
    return ptr == b.end();
}

int main() {
    std::vector<int> a {1,2,3,4,5};
    std::vector<int> b {2,4,5};
    
    std::cout << is_subsequence(a,b);

    return 0;
}

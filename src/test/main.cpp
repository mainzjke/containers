#include <iostream>
#include <forward-list.hpp>
#include <list>
#include <double-linked-list.hpp>
#include <vector>

int main(){
    sml::list<int> list;
    for (int i = 0; i < 5; ++i){
        list.push_back(i);
    }

    auto it = list.begin();
    for (int i = 0 ; i < 100; ++i){
        std::cout << *it << std::endl;
        ++it;
    }
    auto iter = list.end();
    --iter;
    --iter;
    std::cout << *iter << std::endl;
}

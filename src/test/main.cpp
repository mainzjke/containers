#include <iostream>
#include <forward-list.hpp>
#include <forward_list>

int main(){
    sml::forward_list<int> list;
    list.push_front(100);
    list.push_front(120);
    list.push_front(110);

    for (auto it = list.begin(); it != list.end(); ++it){
        std::cout << *(it) << std::endl;
    }
    list.pop_front();
    std::cout << std::endl;
    for (auto it = list.begin(); it != list.end(); ++it){
        std::cout << *(it) << std::endl;
    }

    auto iter = list.begin();
    std::cout << std::endl;
    list.insert_after(iter, 150);
    for (auto it = list.begin(); it != list.end(); ++it){
        std::cout << *(it) << std::endl;
    }
}

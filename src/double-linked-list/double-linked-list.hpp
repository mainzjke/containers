#pragma once
#include <iostream>
#include <allocator.hpp>
#include <memory>

namespace sml {

template <typename T, typename Alloc = sml::Allocator<T>>
class list{

    struct Node{
        T data;
        std::shared_ptr<Node> next;
        std::shared_ptr<Node> prev;
        explicit Node(const T&value) : data(value), next(nullptr), prev(nullptr){}
    };

public:
    class iterator{
        friend class list;

    public:
        iterator(std::shared_ptr<Node> node): current(node){}
        T& operator*(){
            return current->data;
        }

        bool operator != (const iterator &other) const {
            return current != other.current;
        }

        bool operator == (const iterator &other) const {
            return (*this != other);
        }

        iterator& operator++(){
           current = current->next;
           return *this;
        }

        iterator operator++(int){
            iterator tmp = *this;
            current = current->next;
            return tmp;
        }

        iterator operator--(){
            current = current->prev;
            return *this;
        }
    private:
        std::shared_ptr<Node> current;
    };

    list() :alloc(), head(alloc.allocate(1)){
        alloc.construct(head.get(), T());
        head->next = head;
        head->prev = head;
    }
    ~list(){}

    iterator begin(){
        return iterator(head->next);
    }
    iterator end(){
        return iterator(head);
    }

    void push_back(const T& value){
        std::shared_ptr<Node> node(alloc.allocate(1));
        alloc.construct(node.get(), value);
        std::shared_ptr<Node> lastNode = head->prev;
        lastNode->next = node;
        node->prev = lastNode;
        node->next = head;
        head->prev = node;
        //! like std::list
        head->data = value;
    }

private:
    [[no_unique_address]]typename Alloc::template rebind<Node>::other alloc;
    std::shared_ptr<Node> head;
};

} //! <---- end namespace sml

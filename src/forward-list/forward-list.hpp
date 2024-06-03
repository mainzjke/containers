#pragma once
#include <iostream>
#include <allocator.hpp>


namespace sml {

template <typename T, typename Alloc = sml::Allocator<T>>
class forward_list{

    struct Node{
        T data;
        Node *next;
        explicit Node(const T&value) : data(value), next(nullptr){}
    };

    class iterator{
        friend class forward_list;

    public:
        iterator(Node* node): current(node){}
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
    private:
        Node * current;
    };

public:
    forward_list() :alloc(), head(alloc.allocate(1)){
        alloc.construct(head, T());
        head->next = head;
    }
    ~forward_list(){
        while(head != head->next){
            Node * tmp = head->next;
            head->next = tmp->next;
            alloc.destroy(tmp);
            alloc.deallocate(tmp);
        }
        alloc.destroy(head);
        alloc.deallocate(head);
    }

    iterator begin(){
        return iterator(head->next);
    }
    iterator end(){
        return iterator(head);
    }

    void push_front(const T& value){
        Node *node = alloc.allocate(1);
        alloc.construct(node, value);
        node->next = head->next;
        head->next = node;
        head->data = value;
    }

    iterator insert_after(iterator pos, const T& value){
        Node * node = alloc.allocate(1);
        alloc.construct(node, value);
        node->next = pos.current->next;
        pos.current->next = node;
    }

    T& front() {
        if (head == head->next){
            throw::std::out_of_range("List is empty");
        }
        else
            head->next->data;
    }

    void pop_front(){
        if (head == head->next){
            throw std::out_of_range("List is empty");
        }
        Node *tmp = head->next;
        head->next = tmp->next;
        alloc.destroy(tmp);
        alloc.deallocate(tmp);
    }

    bool empty(){
        return head == head->next;
    }

private:
    [[no_unique_address]]typename Alloc::template rebind<Node>::other alloc;
    Node* head;

};

} //! <---- end namespace sml

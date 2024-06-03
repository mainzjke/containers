#pragma once
#include <iostream>
#include <allocator.hpp>

namespace sml  {

template <typename T, typename Allocator = sml::Allocator<T>>
class vector{
public:


private:
    Allocator alloc_;
    T * data_;
    std::size_t cap_;
    std::size_t sz_;
};

}


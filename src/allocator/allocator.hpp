#ifndef ALLOCATOR_HPP
#define ALLOCATOR_HPP

#include <iostream>
#include <memory>

namespace sml {
template <typename T>
struct Allocator{
    T* allocate(std::size_t n){
        return static_cast<T*>(std::malloc(n * sizeof(T)));
    }

    template<typename U, typename... Args>
    void construct(U* p, Args&&... args){
        new(p) U(std::forward<Args>(args)...);
    }

    void destroy(T*p){
        p->~T();
    }

    void deallocate(T *p , std::size_t n = 0) noexcept{
        free(p);
    }

    template <typename U>
    struct rebind{
        using other = Allocator<U>;
    };
    
};

} //! <--- end namespace sml

#endif // ALLOCATOR_HPP

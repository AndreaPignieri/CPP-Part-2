#include "derived.hh"

Base **derivedFactory(size_t size)
{
    Base **arr = new Base*[size];

    for (size_t idx = 0; idx != size; ++idx)
        arr[idx] = new Derived();
    
    return arr;
}
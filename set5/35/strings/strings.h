#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <string>
#include <vector>

class Strings
{
    std::vector<std::string> d_str;

    public:
        Strings() = default;     //default constructor
        Strings(int argc, char **argv);    // 2.cc
        Strings(char **environLike);       // 3.cc

        size_t size() const;   //current no. of strings
        size_t capacity() const;  //current storage capacity
        void resize(size_t newSize);  //change storage size
        void reserve(size_t newCap);  //change storage capacity
        
        //return indicated string, verify idx in range
        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);
        
        //add a std::string to the String object
        Strings &operator+=(std::string const &str);
        
        //return indicated string
        Strings const &operator[](size_t idx) const;
        Strings &operator[](size_t idx);

};
//inline definitions:
inline size_t Strings::size() const
{                                           
    return d_str.size();
}

inline size_t Strings::capacity() const
{                                           
    return d_str.capacity();
}

inline void Strings::resize(size_t newSize)
{                                           
    d_str.resize(newSize);
}

inline void Strings::reserve(size_t newCap)
{                                           
    d_str.reserve(newCap);
}

inline std::string const &Strings::operator[](size_t idx) const
{
    return d_str[idx];
}

inline std::string &Strings::operator[](size_t idx)
{
    return d_str[idx];
}
#endif


#include "strings.ih"

void Strings::swap(Strings &other)
{
    std::swap(d_shared, other.d_shared);
    std::swap(d_size, other.d_size);
    std::swap(d_str, other.d_str);
}

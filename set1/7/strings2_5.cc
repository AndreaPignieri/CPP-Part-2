#include "strings.ih"

void Strings::add(std::string const &next)
{
    std::string *newData = new std::string[d_size + 1];

    for (size_t idx = 0; idx < d_size; ++idx)
    {
        newData[idx] = d_str[idx];
    }

    newData[d_size] = next;

    delete[] d_str;
    d_str = newData;
    ++d_size;
}
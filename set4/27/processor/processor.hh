#ifndef PROCESSOR_HH
#define PROCESSOR_HH

#include "../base/base.hh"

class Processor : public Base
{
    public:
    // The enum class Msg is available for its members but not outside of this class
    Msg message;
};

#endif

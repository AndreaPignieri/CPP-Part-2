#include "../headers/msg.ih"


int main()
{
    show(Msg::NONE);
    show(Msg::NONE | Msg::EMERG);
    show(Msg::ALERT | Msg::CRIT);
    show(Msg::ALL   & (Msg::ERR | Msg::WARNING));
    show(~Msg::NOTICE);
}
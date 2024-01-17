#include "logs.h"

std::ostream& logs::msg(void)
{
    return message;
}

void logs::error(void)
{
    std::cout << "DBG; Internal error:" << message.str() << std::endl;
    throw std::runtime_error(message.str());
}

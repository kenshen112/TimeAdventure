#pragma once
#include <iostream>
#include <string.h>
#include "json.hpp"
class Flag
{
private:
    int ID;
    std::string flag;
    bool isActive;
public:

    Flag();
    Flag(nlohmann::json);
    void activateFlag();
    void deactivateFlag();
    ~Flag();
};

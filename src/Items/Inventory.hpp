#pragma once
#include <iostream>
#include <map>

#include "ItemData.hpp"

class Inventory
{
private:
    std::map<int, ItemData> itemList;

    int maxSize = 99;
    int currentSize = 0;

    public:
    void Add(ItemData i);
    void Use();
};
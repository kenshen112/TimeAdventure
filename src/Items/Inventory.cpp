#include "Inventory.hpp"

void Inventory::Add(ItemData i)
{
    if (currentSize < maxSize)
    {
        itemList.emplace(currentSize, i);
        currentSize++;
    }
}


void Inventory::Use()
{

}

#pragma once
#include <iostream>

enum ItemType { HEALING, DAMAGING }; // For later if I have other types like Key Item 
enum AreaOfEffect { HEALTH, STRENGTH, MAGIC, SPEED };


struct ItemBuffer // For another game potentially
{

     int Buff;
     ItemType Type;
     AreaOfEffect Effect;

    ItemBuffer()
    {

    }

    ~ItemBuffer()
    {

    }
};


struct ItemData
{ 
    std::string itemName;
    int itemID;
    int cost;

    ItemBuffer Effect;

    int MaxAmount = 99;

    int Amount = 0;

    void Use();
};
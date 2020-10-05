    #pragma once

    #include <iostream>
    #include <fstream>
    #include <filesystem>
    #include <map>

    #include "ItemData.hpp"
    #include "Inventory.hpp"
    class Item
    {
    private:
        std::map<int, ItemData> items;
        Inventory inventory;

        std::string filePath = "Assets/Items.json";
        std::string jsonData;

        std::filesystem::path file;
        std::ifstream in;

    public:
        void Initalize();
        void Use(int ItemID);
        ItemData GetItem(int ItemID);
        void AddToInventory(int ItemID);
    };


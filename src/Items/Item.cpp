#include "Item.h"


    void Item::Initalize()
    {
        if (std::filesystem::exists(filePath))
        {
            in.open(filePath);
            //_Items = JsonConvert.DeserializeObject<Dictionary<int, ItemData>>(jsonData);
        }
    }

    void Item::Use(int ItemID)
    {
        if (!items.empty())
        {
            items[ItemID].Use();
        }
    }


    ItemData Item::GetItem(int ItemID)
    {
        return items[ItemID];
    }

    void Item::AddToInventory(int ItemID)
    {
        if (items[ItemID].Amount < items[ItemID].MaxAmount)
        {
            inventory.Add(items[ItemID]);
            items[ItemID].Amount++;
        }
    }


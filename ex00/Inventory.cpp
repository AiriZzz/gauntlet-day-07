#include "Inventory.hpp"

void Inventory::add(const std::string& item){
    m_items.push_back(item);
}

int Inventory::count() const{
    return static_cast<int>(m_items.size());
}

bool Inventory::has(const std::string& item)const{

    std::string target = item;
    
    for(std::string item : m_items)
    {
        if(item == target )
        {
           return true;
        }
    }
    return false;
}
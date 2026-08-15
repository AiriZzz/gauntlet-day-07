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
           return false;
        }
    }
    return false;
}

void Inventory::remove(const std::string& item){
    
    std::string target = item;
    for(auto it = m_items.begin() ; it != m_items.end();)
    {
        if(*it == target ) it = m_items.erase(it);
        else    ++it;
    }
}
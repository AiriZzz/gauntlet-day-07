#pragma once
#include <string>
#include <vector>

class Inventory {
    public:
      void add(const std::string& item){m_items.push_back(item);};
      int count()const{return 0;};
    
    private:
    std::vector<std::string> m_items;
};
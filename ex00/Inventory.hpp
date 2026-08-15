#pragma once
#include <string>
#include <vector>

class Inventory {
public:
    void add(const std::string& item);
    int  count() const;
    bool has(const std::string& item) const;
private:
    std::vector<std::string> m_items;
    bool m_hasItem;
};
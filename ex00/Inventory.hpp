#pragma once
#include <string>
#include <vector>

class Inventory {
public:
    void add(const std::string& item);
    int  count() const;
    bool has(const std::string& item) const;
    void remove(const std::string& item);   // absent item: no-op, cycle 4 proves it
private:
    std::vector<std::string> m_items;
};
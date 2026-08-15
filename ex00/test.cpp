#include "Inventory.hpp"
#include "catch_amalgamated.hpp"

// Writing this first tells you Inventory needs add() and count(), and nothing more yet.

TEST_CASE("adding an item raises the count") {
    Inventory inv;
    std::string potion = "potion";
    inv.add(potion);
    CHECK(inv.count() == 1);
}
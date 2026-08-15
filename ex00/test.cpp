#include "Inventory.hpp"
#include "catch_amalgamated.hpp"

// Writing this first tells you Inventory needs add() and count(), and nothing more yet.

TEST_CASE("adding an item raises the count") {
    Inventory inv;
    inv.add("potion");
    CHECK(inv.count() == 1);
}

TEST_CASE("finds an added item and rejects a missing one") {
    Inventory inv;
    REQUIRE(inv.count()==0);
    CHECK(inv.has("head"));
}


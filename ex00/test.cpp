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
    inv.add("potion");
    CHECK(inv.has("potion"));
    CHECK_FALSE(inv.has("head"));
}

TEST_CASE("removing an item drops the count and has() stops finding it"){

    Inventory inv;
    inv.add("potion");
    inv.add("heads");
    inv.remove("potion");
    CHECK_FALSE(inv.has("potion"));
    CHECK(inv.count()==1);
}
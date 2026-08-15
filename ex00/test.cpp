#include "Inventory.hpp"
#include "catch_amalgamated.hpp"

// Writing this first tells you Inventory needs add() and count(), and nothing more yet.

TEST_CASE("finds an added item and rejects a missing one") {
    Inventory inv;
    CHECK(inv.has("potion"));
    CHECK(inv.has("head"));
}
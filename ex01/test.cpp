#include "Inventory.hpp"
#include "catch_amalgamated.hpp"

// Writing this first tells you Inventory needs add() and count(), and nothing more yet.
struct InventoryFixture {
    Inventory inv;                 // Catch2 builds a FRESH instance for every test below
    InventoryFixture() { inv.add("potion"); inv.add("sword"); }
};

TEST_CASE_METHOD(InventoryFixture, "adding an item raises the count") {
    CHECK(inv.count() == 2);
}

TEST_CASE_METHOD(InventoryFixture, "finds an added item and rejects a missing one") {
    CHECK(inv.has("sword"));
    CHECK_FALSE(inv.has("head"));
}

TEST_CASE_METHOD(InventoryFixture,"removing an item drops the count and has() stops finding it"){
    inv.remove("potion");
    CHECK_FALSE(inv.has("potion"));
    CHECK(inv.count()==1);
}

TEST_CASE_METHOD(InventoryFixture,"removing a missing item is a no-op: count unchanged, other items untouched"){
    inv.remove("elixir");
    REQUIRE(inv.count()==2);
    CHECK(inv.has("potion"));
}
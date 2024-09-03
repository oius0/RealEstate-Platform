// PropertyControllerTest.cpp
#include "gtest/gtest.h"
#include "../src/Database.h"
#include "../src/PropertyController.h"

class PropertyControllerTest : public ::testing::Test {
protected:
    Database db{ "test_db" };
    PropertyController controller{ &db };

    void SetUp() override {
        db.insertRecord("properties", "Property1");
    }
};

TEST_F(PropertyControllerTest, ListPropertiesTest) {
    controller.listProperties();
    // Verify through console output or adapt to mock the database call.
}

TEST_F(PropertyControllerTest, AddPropertyTest) {
    controller.addProperty("New Property Details");
    // Assert using fetch records from db mock.
}

TEST_F(PropertyControllerTest, RemovePropertyTest) {
    controller.removeProperty("1");
    // Assert using fetch to check removal.
}

// DatabaseTest.cpp
#include "gtest/gtest.h"
#include "../src/Database.h"

TEST(DatabaseTest, InsertRecordTest) {
    Database db("test_db");
    EXPECT_TRUE(db.insertRecord("properties", "Property Details"));
}

TEST(DatabaseTest, FetchRecordsTest) {
    Database db("test_db");
    auto records = db.fetchRecords("SELECT * FROM properties");
    EXPECT_EQ(records.size(), 3);
    EXPECT_EQ(records[0], "Record1");
}

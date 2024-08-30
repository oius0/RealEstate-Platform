// Database.h
#pragma once
#include <string>
#include <vector>

class Database {
public:
    Database(const std::string& dbName);
    void connect();
    void executeQuery(const std::string& query);
    std::vector<std::string> fetchRecords(const std::string& query);
    bool insertRecord(const std::string& table, const std::string& values);
    bool updateRecord(const std::string& table, const std::string& values, const std::string& condition);
    bool deleteRecord(const std::string& table, const std::string& condition);
private:
    std::string databaseName;
};

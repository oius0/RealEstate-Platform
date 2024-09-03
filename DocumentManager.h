// DocumentManager.h
#pragma once
#include "Database.h"
#include <string>

class DocumentManager {
public:
    DocumentManager(Database* db);
    void createLeaseDocument(const std::string& propertyID, const std::string& tenantID);
    void storeDocument(const std::string& documentPath);
    void updateDocument(const std::string& documentID, const std::string& newContent);
private:
    Database* database;
};
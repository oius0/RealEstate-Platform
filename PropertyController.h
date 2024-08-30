// PropertyController.h
#pragma once
#include "Database.h"
#include <string>

class PropertyController {
public:
    PropertyController(Database* db);
    void listProperties();
    void addProperty(const std::string& propertyDetails);
    void updateProperty(const std::string& propertyID, const std::string& updatedDetails);
    void removeProperty(const std::string& propertyID);
private:
    Database* database;
};

// PropertyController.cpp
#include "PropertyController.h"
#include <iostream>

PropertyController::PropertyController(Database* db) : database(db) {}

void PropertyController::listProperties() {
    std::cout << "Listing all properties..." << std::endl;
    auto records = database->fetchRecords("SELECT * FROM properties");
    for (const auto& record : records) {
        std::cout << record << std::endl;
    }
}

void PropertyController::addProperty(const std::string& propertyDetails) {
    std::cout << "Adding property: " << propertyDetails << std::endl;
    database->insertRecord("properties", propertyDetails);
}

void PropertyController::updateProperty(const std::string& propertyID, const std::string& updatedDetails) {
    std::cout << "Updating property: " << propertyID << " with details: " << updatedDetails << std::endl;
    database->updateRecord("properties", updatedDetails, "id = " + propertyID);
}

void PropertyController::removeProperty(const std::string& propertyID) {
    std::cout << "Removing property: " << propertyID << std::endl;
    database->deleteRecord("properties", "id = " + propertyID);
}

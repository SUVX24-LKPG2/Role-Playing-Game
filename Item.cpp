#include <string>
#include <string_view>
#include "Item.h"

std::string name;
std::string description;

Item::Item(std::string_view name, std::string_view description) {
    this->name = name;
    this->description = description;
}

Item::Item::~Item() {}

std::string_view Item::getName() const {
    return name;
}

std::string_view Item::getDescription() const {
    return description;
}

void Item::setName(std::string_view name) {
    this->name = name;
}

void Item::setDescription(std::string_view description) {
    this->description = description;
}

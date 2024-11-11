#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <string_view>

class Item
{
private:
    std::string name;
    std::string description;

public:
    Item(std::string_view name, std::string_view description);
    ~Item();

    std::string_view getName() const;
    std::string_view getDescription() const;
    std::string_view setName(std::string_view name);
    std::string_view setDescription(std::string_view description);
};

#endif // ITEM_H
#ifndef POTIONS_H
#define POTIONS_H

#include <string>

class Potions
{
private:
    std::string m_name;
    std::string m_Type;
    int m_Amount;

public:
    Potions(const std::string& name, const std::string& type, int amount) 
        : m_name(name), m_Type(type), m_Amount(amount) {}
    ~Potions();

    int getAmount() const;
};

#endif // POTIONS_H
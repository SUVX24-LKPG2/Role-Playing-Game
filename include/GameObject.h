#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include <iostream>
#include <string>
#include <string_view>

class GameObject {
protected:
    std::string m_name;

public:
    GameObject(const std::string_view name) 
        : m_name(name) {}

    virtual ~GameObject() {}
    virtual void handleInput(char input);
    virtual void update();
    virtual void render() const;
};

#endif // GAMEOBJECT_HPP
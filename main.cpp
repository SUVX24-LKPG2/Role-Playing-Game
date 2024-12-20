#include "Combat.h"
#include "EntityCreator.h"
#include "Mage.h"
#include "Player.h"
#include "Room.h"
#include "Utils.h"
#include "Warrior.h"
#include <iostream>
#include <memory>
#include <random>
#include <string>

int main()
{
    srand(time(0));

    // Create a player object
    std::shared_ptr<Player> player;

    Utils::clearScreen();

    enum PlayerClass { WARRIOR = 1, MAGE = 2 };
    std::cout << "1 - Warrior (Klasse Krigare)" << std::endl;
    std::cout << "2 - Mage (Karl Trollkarl)" << std::endl;
    std::cout << "Choose your class: ";
    int choice;
    std::cin >> choice;

    switch (choice)
    {
    case WARRIOR:
        player = std::make_shared<Warrior>("Klasse Krigare");
        break;

    case MAGE:
        player = std::make_shared<Mage>("Karl Trollkarl");
        break;

    default:
        break;
    }

    // Add a few health potions to the player
    player->setHealthPotions(5);

    // Create rooms
    Room room1("Room 1", "A dark room with a door to the north.");
    Room room2("Room 2", "Monster Lair");
    Room room3("Room 3", "Monster Lair2");
    Room room4("Room 4", "Monster Lair3");

    // Add enemies to the rooms
    room2.addEnemy(EntityCreator::createRandomEnemy());
    room3.addEnemy(EntityCreator::createRandomEnemy());
    room4.addEnemy(EntityCreator::createRandomEnemy());

    // Create a vector of rooms
    std::vector<Room> rooms = { room1, room2, room3, room4 };
    size_t currentRoomIndex = 0;

    // Game loop, there's still much to do here
    while(player->getHealth() > 0) {
        Utils::clearScreen();
        Room& currentRoom = rooms[currentRoomIndex];
        //std::cout << "You are in " << currentRoom.getName() << std::endl;
        //std::cout << currentRoom.getDescription() << std::endl;
        Utils::printStringWithPause(currentRoom.getDescription());
        Utils::pauseForSeconds(1);

        // Display enemies in the room
        currentRoom.displayEnemies();

        bool lastRoom = currentRoomIndex == rooms.size() - 1;
        // Start combat if there are enemies in the room
        if(!currentRoom.getEnemies().empty()) {
            Combat::start(*player, *currentRoom.getEnemies().front(), lastRoom);
        }

        std::cout << std::endl;
        std::cout << "Move to the next room? (y/n): ";
        std::string move;
        std::cin >> move;

        if (move == "y" && currentRoomIndex < rooms.size() - 1) {
            currentRoomIndex++;
        } else {
            break;
        }
    }

    if (currentRoomIndex == rooms.size() - 1) {
        Utils::clearScreen();
        Utils::printStringWithPause("Thank you " + player->getName() + " but our princess is in another castle!");
    } else {
        Utils::clearScreen();
        Utils::printStringWithPause("You died!");
    }

    return 0;
}
cmake_minimum_required(VERSION 3.17)

project(TimeAdventure)
#set(TARGET TimeAdventure)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)
include_directories(src)

set(HEADERS src/Actions.h src/CommandParser.h src/GameManager.h src/Common.h src/Npc.h src/Player.h src/PrintHelper.h src/Room.h src/json.hpp src/Room.h src/Flag.h src/Items/ItemData.hpp src/Items/Item.h src/Items/Inventory.hpp)
set(SOURCES src/Actions.cpp src/CommandParser.cpp src/Flag.cpp src/GameManager.cpp src/main.cpp src/Player.cpp src/PrintHelper.cpp src/Room.cpp src/Items/ItemData.cpp src/Items/Item.cpp src/Items/Inventory.cpp)


add_executable(TimeAdventure ${SOURCES} ${HEADERS})
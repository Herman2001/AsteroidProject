cmake_minimum_required(VERSION 3.14)
project(Astroids)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
        Asteroid.cpp
        Asteroid.h
        Bullet.cpp
        Bullet.h
        Player.cpp
        Player.h
        Game.cpp
        Game.h
        CollisionManager.cpp
        CollisionManager.h
        UI.cpp
        UI.h
        baseClass.cpp
        baseClass.h
        baseClass.cpp
        baseClass.h
        baseClass.cpp
        baseClass.cpp
)
add_executable(Astroids ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Astroids sfml-system sfml-window sfml-graphics sfml-audio sfml-network)


#include <graphx.h>

#ifndef ENTITY_D
#define ENTITY_D

class Entity {
public:
    int posx, posy;

    Entity();
    Entity(int posx, int posy): posx(posx), posy(posy) {}

    virtual void draw() = 0;
    virtual void update() = 0;

    virtual ~Entity() = default;
};

#endif
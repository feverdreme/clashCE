#include <graphx.h>

#ifndef ENTITY_D
#define ENTITY_D

class Entity {
public:
    int posx, posy;

    Entity();
    Entity(int posx, int posy): posx(posx), posy(posy) {}

    void draw();
    void update();
};

#endif
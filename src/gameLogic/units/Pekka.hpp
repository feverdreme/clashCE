#include <gfx.h>

#include "../gfx/gfx.h"
#include "../Entity.hpp"

class Pekka : public Entity {
private:
    const gfx_sprite_t* SPRITE = pekkasprite;

public:
    Pekka(int posx, int posy): Entity(posx, posy) {}

    void draw() {
        gfx_TransparentSprite_NoClip(SPRITE, posx, posy);
    }

    void update() {
        posx++;
    }
};
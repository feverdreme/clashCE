#include <gfx/gfx.h>

#include "gfx/gfx.h"

#include "gameLogic/units/Pekka.hpp"
#include "gameLogic/EntityGroup.hpp"

#define waitKeyPress() while (!os_GetCSC());

/*
 *--------------------------------------
 * Program Name:
 * Author:
 * License:
 * Description:
 *--------------------------------------
*/

const int MSDELAY = 10;

DynamicEntityGroup pekkas (2);
// auto p = new Pekka(5, 6);

void loop() {
    gfx_FillScreen(1);

    gfx_Rectangle(0, 0, 200, 200);

    pekkas.draw();
    pekkas.update();
}


int main(void) {
    gfx_Begin();

    /* Set the palette for sprites */
    gfx_SetPalette(global_palette, sizeof_global_palette, 0);

    /* These were set in the image conversion file */
    gfx_SetTransparentColor(0);
    gfx_FillScreen(1);

    pekkas.push_back(new Pekka(5, 6));

    while(!os_GetCSC()){
        loop();
        delay(MSDELAY);
    }

    waitKeyPress();

    gfx_End();
    return 0;
}
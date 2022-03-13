#pragma once


//Game Engine class

class game
{
    private:

    //Private functions
    void initVariable();
    void initWindow();

    public:
    //Constructs + Destructs
        game();
        virtual ~game();

    //Fuctions
    void update();
    void render();
};
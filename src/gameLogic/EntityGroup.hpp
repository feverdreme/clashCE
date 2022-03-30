#include <string.h>
#include <../Entity.hpp>

// template <size_t size>
// class EntityGroup {
// private:
//     Entity group[size];

// public:
//     void draw() {
//         for (size_t i=0; i<size; i++) {
//             group[i].draw();
//         }
//     }

//     void update() {
//         for (size_t i=0; i<size; i++) {
//             group[i].update();
//         }
//     }
// };

class DynamicEntityGroup {
private:
    Entity** group;
    int size = 1;
    int used = 0;

    void allocate(int numEntries){
        size += numEntries;

        // new[] is broken currently        
        // Entity** newgroup = new Entity*[size]; 

        Entity** newgroup = reinterpret_cast<Entity**>(new char[size * sizeof(Entity*)]);

        memcpy(newgroup, group, used * sizeof(Entity*));
        
        delete[] group;
        group = newgroup;
    }

public:
    DynamicEntityGroup(int alloc){
        // group = new Entity*[alloc];
        group = reinterpret_cast<Entity**>(new char[alloc * sizeof(Entity*)]);
        size = alloc;
    }

    void push_back(Entity* ent){
        if (used + 1 > size) {
            allocate(used);
        }

        group[used] = ent;
        used++;
    }

    void pop_back() {
        delete group[used-1];
        used--; 
    }

    void draw() {
        for (int i = 0; i < used; i++) {
            group[i]->draw();
        }
    }

    void update() {
        for (int i = 0; i < used; i++) {
            group[i]->update();
        }
    }
};
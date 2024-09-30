#include "World.h"

#include <algorithm>

void World::AddObject(Object* object) {
    m_objects.push_back(object);
}

void World::RemoveObject(Object* object) {
    m_objects.erase(std::remove(m_objects.begin(), m_objects.end(), object), m_objects.end());
}


unsigned int World::getObjectsSize() {
    return m_objects.size();
}


Object* World::getObjectPtrAtIndex(unsigned int index) {
    return m_objects[index];
}

void World::Step(float dt) {
    ResolveCollisions(dt);

    for (Object* obj : m_objects) {
        obj->Force += obj->Mass * m_gravity; // Force = Mass * Acceleration

        obj->Velcoity += obj->Force / obj->Mass * dt; // Force / Mass = delta Velocity / time
        obj->Position += obj->Velcoity * dt;

        obj->Force = {0, 0};
    }

    m_stepIndex++;
}


/*
* I was trying to figure out how to collsion from this article
* https://winter.dev/articles/physics-engine
* However, I don't believe that this is the best way to go about this.
* You see this can cause unecessary computations and would generally
* be better if I used something like AABB detection.
* So I am considering changing this and straying away from the initial
* article stated above.
*/
void World::ResolveCollisions(float dt){
    // array of collsions here

    for (Object* a : m_objects) {
        for (Object* b : m_objects) {
            if (a == b)
                break;

            // Other stuff here
        }
        // Solve Collisions
    }
}
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
    for (Object* obj : m_objects) {
        obj->Force += obj->Mass * m_gravity; // Force = Mass * Acceleration

        obj->Velcoity += obj->Force / obj->Mass * dt; // Force / Mass = delta Velocity / time
        obj->Position += obj->Velcoity * dt;

        obj->Force = {0, 0};
    }

    m_stepIndex++;
}
#pragma once
#include "Vec.h"
#include "Object.h"
#include <vector>

class World
{
private:
    Vec2 m_gravity {0.0f, 9.81f};
    std::vector<Object*> m_objects;
    unsigned long long m_stepIndex;

public:
    void AddObject(Object* object);
    void RemoveObject(Object* object);

    unsigned int getObjectsSize();
    Object* getObjectPtrAtIndex(unsigned int index);

    void Step(float dt);

};
#pragma once
#include "Vec.h"
#include "Object.h"
#include <vector>

class World
{
private:
    Vec2 m_gravity {0, -9.81};
    std::vector<Object*> m_objects;
    unsigned long long m_stepIndex;

public:
    void AddObject(Object* object);
    void RemoveObject(Object* object);

    void Step(float dt);

};
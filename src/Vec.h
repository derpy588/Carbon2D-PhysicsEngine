#pragma once

struct Vec2
{
    float x {0};
    float y {0};
};

Vec2 operator*(Vec2 a, Vec2 b) {
    return {(a.x * b.x), (a.y * b.y)};
}


template <typename T>
Vec2 operator*(T a, Vec2 b) {
    return {(a * b.x), (a * b.y)};
}

template <typename T>
Vec2 operator*(Vec2 a, T b) {
    return {(a.x * b), (a.y * b)};
}

template <typename T>
Vec2 operator/(Vec2 a, T b) {
    return {(a.x / b), (a.y / b)};
}

Vec2 operator+=(Vec2 a, Vec2 b) {
    return {(a.x + b.x), (a.y + b.y)};
}

struct Vec3
{
    float x {0};
    float y {0};
    float z {0};
};
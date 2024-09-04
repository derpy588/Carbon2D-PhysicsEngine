#pragma once

struct Vec2
{
    float x {0};
    float y {0};

    // Vector-Vector Operators
    friend Vec2 operator+(Vec2& a, Vec2& b) { return {(a.x + b.x), (a.y + b.y)}; }
    friend Vec2 operator-(Vec2& a, Vec2& b) { return {(a.x - b.x), (a.y - b.y)}; }
    friend Vec2 operator*(Vec2& a, Vec2& b) { return {(a.x * b.x), (a.y * b.y)}; }
    friend Vec2 operator/(Vec2& a, Vec2& b) { return {(a.x / b.x), (a.y / b.y)}; }

    // Vector-Vector assignment operators
    friend Vec2 operator+=(Vec2& a, Vec2 b) { return a = a + b; }
    friend Vec2 operator-=(Vec2& a, Vec2 b) { return a = a - b; }
    friend Vec2 operator*=(Vec2& a, Vec2 b) { return a = a * b; }
    friend Vec2 operator/=(Vec2& a, Vec2 b) { return a = a / b; }
};



// scalar-vector operators
template <typename T>
Vec2 operator+(T a, Vec2 b) { return {(a + b.x), (a + b.y)}; }
template <typename T>
Vec2 operator-(T a, Vec2 b) { return {(a - b.x), (a - b.y)}; }
template <typename T>
Vec2 operator*(T a, Vec2 b) { return {(a * b.x), (a * b.y)}; }
template <typename T>
Vec2 operator/(T a, Vec2 b) { return {(a / b.x), (a / b.y)}; }

//Vector-scalar operators
template <typename T>
Vec2 operator+(Vec2 a, T b) { return {(a.x + b), (a.y + b)}; }
template <typename T>
Vec2 operator-(Vec2 a, T b) { return {(a.x - b), (a.y - b)}; }
template <typename T>
Vec2 operator*(Vec2 a, T b) { return {(a.x * b), (a.y * b)}; }
template <typename T>
Vec2 operator/(Vec2 a, T b) { return {(a.x / b), (a.y / b)}; }

// Vector-Scalar assignment operators
template <typename T>
Vec2 operator+=(Vec2& a, T b) { return a = a + b; }
template <typename T>
Vec2 operator-=(Vec2& a, T b) { return a = a - b; }
template <typename T>
Vec2 operator*=(Vec2& a, T b) { return a = a * b; }
template <typename T>
Vec2 operator/=(Vec2& a, T b) { return a = a / b; }

struct Vec3
{
    float x {0};
    float y {0};
    float z {0};

    // Vector-Vector Operators
    friend Vec3 operator+(Vec3 a, Vec3 b) { return {(a.x + b.x), (a.y + b.y), (a.z + b.z)}; }
    friend Vec3 operator-(Vec3 a, Vec3 b) { return {(a.x - b.x), (a.y - b.y), (a.z - b.z)}; }
    friend Vec3 operator*(Vec3 a, Vec3 b) { return {(a.x * b.x), (a.y * b.y), (a.z * b.z)}; }
    friend Vec3 operator/(Vec3 a, Vec3 b) { return {(a.x / b.x), (a.y / b.y), (a.z / b.z)}; }

    // Vector-Vector assignment operators
    friend Vec3 operator+=(Vec3& a, Vec3 b) { return a = a + b; }
    friend Vec3 operator-=(Vec3& a, Vec3 b) { return a = a - b; }
    friend Vec3 operator*=(Vec3& a, Vec3 b) { return a = a * b; }
    friend Vec3 operator/=(Vec3& a, Vec3 b) { return a = a / b; }
};


// scalar-vector operators
template <typename T>
Vec3 operator+(T a, Vec3 b) { return {(a + b.x), (a + b.y), (a + b.z)}; }
template <typename T>
Vec3 operator-(T a, Vec3 b) { return {(a - b.x), (a - b.y), (a - b.z)}; }
template <typename T>
Vec3 operator*(T a, Vec3 b) { return {(a * b.x), (a * b.y), (a * b.z)}; }
template <typename T>
Vec3 operator/(T a, Vec3 b) { return {(a / b.x), (a / b.y), (a / b.z)}; }

//Vector-scalar operators
template <typename T>
Vec3 operator+(Vec3 a, T b) { return {(a.x + b), (a.y + b), (a.z + b)}; }
template <typename T>
Vec3 operator-(Vec3 a, T b) { return {(a.x - b), (a.y - b), (a.z - b)}; }
template <typename T>
Vec3 operator*(Vec3 a, T b) { return {(a.x * b), (a.y * b), (a.z * b)}; }
template <typename T>
Vec3 operator/(Vec3 a, T b) { return {(a.x / b), (a.y / b), (a.z / b)}; }


// Vector-Scalar assignment operators
template <typename T>
Vec3 operator+=(Vec3& a, T b) { return a = a + b; }
template <typename T>
Vec3 operator-=(Vec3& a, T b) { return a = a - b; }
template <typename T>
Vec3 operator*=(Vec3& a, T b) { return a = a * b; }
template <typename T>
Vec3 operator/=(Vec3& a, T b) { return a = a / b; }
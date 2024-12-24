#include "engine/vector.h"
#include <cmath>

Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::magnitude() const {
    return std::sqrt(x * x + y * y);
}

Vector2 Vector2::normalized() const {
    float mag = magnitude();
    return (mag > 0) ? Vector2(x / mag, y / mag) : Vector2();
}

float Vector2::dot(const Vector2& other) const {
    return x * other.x + y * other.y;
}

Vector2 Vector2::operator+(const Vector2& other) const {
    return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator-(const Vector2& other) const {
    return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator*(float scalar) const {
    return Vector2(x * scalar, y * scalar);
}

Vector2 Vector2::operator/(float scalar) const {
    return (scalar != 0) ? Vector2(x / scalar, y / scalar) : Vector2();
}

bool Vector2::operator==(const Vector2& other) const {
    return x == other.x && y == other.y;
}

bool Vector2::operator!=(const Vector2& other) const {
    return !(*this == other);
}

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

float Vector3::magnitude() const {
    return std::sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::normalized() const {
    float mag = magnitude();
    return (mag > 0) ? Vector3(x / mag, y / mag, z / mag) : Vector3();
}

float Vector3::dot(const Vector3& other) const {
    return x * other.x + y * other.y + z * other.z;
}

Vector3 Vector3::cross(const Vector3& other) const {
    return Vector3(
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x
    );
}

Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(float scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

Vector3 Vector3::operator/(float scalar) const {
    return (scalar != 0) ? Vector3(x / scalar, y / scalar, z / scalar) : Vector3();
}

bool Vector3::operator==(const Vector3& other) const {
    return x == other.x && y == other.y && z == other.z;
}

bool Vector3::operator!=(const Vector3& other) const {
    return !(*this == other);
}

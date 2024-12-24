#include "engine/vector.h"
#include <cmath>

Vector2::Vector2(float x, float y) : _x(x), _y(y) {}

float Vector2::magnitude() const {
    return std::sqrt(_x * _x + _y * _y);
}

Vector2 Vector2::normalized() const {
    float mag = magnitude();
    return (mag > 0) ? Vector2(_x / mag, _y / mag) : Vector2();
}

float Vector2::dot(const Vector2& other) const {
    return _x * other._x + _y * other._y;
}

Vector2 Vector2::operator+(const Vector2& other) const {
    return Vector2(_x + other._x, _y + other._y);
}

Vector2 Vector2::operator-(const Vector2& other) const {
    return Vector2(_x - other._x, _y - other._y);
}

Vector2 Vector2::operator*(float scalar) const {
    return Vector2(_x * scalar, _y * scalar);
}

Vector2 Vector2::operator/(float scalar) const {
    return (scalar != 0) ? Vector2(_x / scalar, _y / scalar) : Vector2();
}

bool Vector2::operator==(const Vector2& other) const {
    return _x == other._x && _y == other._y;
}

bool Vector2::operator!=(const Vector2& other) const {
    return !(*this == other);
}

Vector3::Vector3(float x, float y, float z) : _x(x), _y(y), _z(z) {}

float Vector3::magnitude() const {
    return std::sqrt(_x * _x + _y * _y + _z * _z);
}

Vector3 Vector3::normalized() const {
    float mag = magnitude();
    return (mag > 0) ? Vector3(_x / mag, _y / mag, _z / mag) : Vector3();
}

float Vector3::dot(const Vector3& other) const {
    return _x * other._x + _y * other._y + _z * other._z;
}

Vector3 Vector3::cross(const Vector3& other) const {
    return Vector3(
        _y * other._z - _z * other._y,
        _z * other._x - _x * other._z,
        _x * other._y - _y * other._x
    );
}

Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(_x + other._x, _y + other._y, _z + other._z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
    return Vector3(_x - other._x, _y - other._y, _z - other._z);
}

Vector3 Vector3::operator*(float scalar) const {
    return Vector3(_x * scalar, _y * scalar, _z * scalar);
}

Vector3 Vector3::operator/(float scalar) const {
    return (scalar != 0) ? Vector3(_x / scalar, _y / scalar, _z / scalar) : Vector3();
}

bool Vector3::operator==(const Vector3& other) const {
    return _x == other._x && _y == other._y && _z == other._z;
}

bool Vector3::operator!=(const Vector3& other) const {
    return !(*this == other);
}

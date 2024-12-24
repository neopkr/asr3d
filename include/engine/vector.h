#ifndef VECTOR_H
#define VECTOR_H

class Vector2 {
public:
    float _x, _y;

    Vector2(float x = 0.0f, float y = 0.0f);

    float magnitude() const;
    Vector2 normalized() const;
    float dot(const Vector2& other) const;

    Vector2 operator+(const Vector2& other) const;
    Vector2 operator-(const Vector2& other) const;
    Vector2 operator*(float scalar) const;
    Vector2 operator/(float scalar) const;
    bool operator==(const Vector2& other) const;
    bool operator!=(const Vector2& other) const;
};

class Vector3 {
public:
    float _x, _y, _z;

    Vector3(float x = 0.0f, float y = 0.0f, float z = 0.0f);

    float magnitude() const;
    Vector3 normalized() const;
    float dot(const Vector3& other) const;
    Vector3 cross(const Vector3& other) const;

    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator*(float scalar) const;
    Vector3 operator/(float scalar) const;
    bool operator==(const Vector3& other) const;
    bool operator!=(const Vector3& other) const;
};

#endif // VECTOR_H

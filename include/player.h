#include "engine/vector.h"

#include <iostream>
#include <map>
#include <GLFW/glfw3.h>

// Move to a different header file.
enum EntityTag {
    AIR = 0,
    PLAYER,
    GROUND,
    ENTITY,
    BLOCK,
    ENEMY
};

/**
 * @brief Entity : overrides
 * Remind use personal Vector3 or Vector2 on personal class
 */
class Entity {
public:
    int EntityID;
    const char* entityName = "e";
    bool isAlive;
    bool isGrounded;
    bool canJump;
    bool _movement = true; // Manage if the entity can move or not.
    std::map<int, EntityTag> entityTags; // Priority, tag

    virtual ~Entity() = default;
    virtual void Init() = 0;
    virtual void Update() = 0;
    virtual void Render() = 0;
    virtual void Destroy() = 0;
};

class Player : Entity {
public:
    Vector3 pos;
    Vector3 scale;
    float speed;
    GLFWwindow* _window;

    Player(GLFWwindow* _w);
    ~Player();

    void Init() override;
    void Update() override;
    void Render() override;
    void Destroy() override;

    void Move();
};
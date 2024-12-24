#include "player.h"

Player::Player(GLFWwindow* _w) : pos{0, 0, 0}, scale{1, 1, 1}, speed(0.1f), _window(_w) {
    this->entityTags[0] = EntityTag::PLAYER;
}

void Player::Init() {
    // Don't have init, use constructor instead.
    std::cout << "Player initialized at position (" << pos.x << ", " << pos.y << ", " << pos.z << ")" << std::endl;
}

void Player::Update() {
    Move();
}

void Player::Move() {
    if (glfwGetKey(_window, GLFW_KEY_W) == GLFW_PRESS) {
        pos.y += speed;
    }
    if (glfwGetKey(_window, GLFW_KEY_S) == GLFW_PRESS) {
        pos.y -= speed;
    }
    if (glfwGetKey(_window, GLFW_KEY_A) == GLFW_PRESS) {
        pos.x -= speed;
    }
    if (glfwGetKey(_window, GLFW_KEY_D) == GLFW_PRESS) {
        pos.x += speed;
    }
}

void Player::Render() {
    // i dont fucking know why this isnt working, glEnable is called from window.h so tf
    /**
    glPushMatrix();
    glTranslatef(pos.x, pos.y, pos.z);
    glColor3f(1.0f, 1.0f, 1.0f); // White color
    glBegin(GL_QUADS);

    // Front face
    glVertex3f(-0.5f * scale.x, -0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(0.5f * scale.x, -0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(0.5f * scale.x, 0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(-0.5f * scale.x, 0.5f * scale.y, 0.5f * scale.z);

    // Back face
    glVertex3f(-0.5f * scale.x, -0.5f * scale.y, -0.5f * scale.z);
    glVertex3f(0.5f * scale.x, -0.5f * scale.y, -0.5f * scale.z);
    glVertex3f(0.5f * scale.x, 0.5f * scale.y, -0.5f * scale.z);
    glVertex3f(-0.5f * scale.x, 0.5f * scale.y, -0.5f * scale.z);

    // Left face
    glVertex3f(-0.5f * scale.x, -0.5f * scale.y, -0.5f * scale.z);
    glVertex3f(-0.5f * scale.x, -0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(-0.5f * scale.x, 0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(-0.5f * scale.x, 0.5f * scale.y, -0.5f * scale.z);

    // Right face
    glVertex3f(0.5f * scale.x, -0.5f * scale.y, -0.5f * scale.z);
    glVertex3f(0.5f * scale.x, -0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(0.5f * scale.x, 0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(0.5f * scale.x, 0.5f * scale.y, -0.5f * scale.z);

    // Top face
    glVertex3f(-0.5f * scale.x, 0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(0.5f * scale.x, 0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(0.5f * scale.x, 0.5f * scale.y, -0.5f * scale.z);
    glVertex3f(-0.5f * scale.x, 0.5f * scale.y, -0.5f * scale.z);

    // Bottom face
    glVertex3f(-0.5f * scale.x, -0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(0.5f * scale.x, -0.5f * scale.y, 0.5f * scale.z);
    glVertex3f(0.5f * scale.x, -0.5f * scale.y, -0.5f * scale.z);
    glVertex3f(-0.5f * scale.x, -0.5f * scale.y, -0.5f * scale.z);

    glEnd();
    glPopMatrix();
    */
}

void Player::Destroy() {
    std::cout << "Destroy player" << std::endl;
}

Player::~Player() {
    std::cout << "~Destroy player" << std::endl;

}
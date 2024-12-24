#ifndef SCENE_H
#define SCENE_H

class Scene {
public:
    virtual ~Scene() = default;
    virtual void Init() = 0;
    virtual void Update(float deltaTime) = 0;
    virtual void Render() = 0;
    virtual void Destroy() = 0;
};

#endif
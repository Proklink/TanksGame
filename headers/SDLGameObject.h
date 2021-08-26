#ifndef SDLGameObject_H
#define SDLGameObject_H

#include "GameObject.h"
#include "TextureManager.h"
#include "Vector2D.h"


class SDLGameObject : public GameObject
{
    public:
        SDLGameObject(const LoaderParams* pParams);
        virtual void Draw() override;
        virtual void Update(float deltatime){};
        virtual void ProcessInput(){};
    protected:
        Vector2D position;
        int width;
        int height;
        int currentRow;
        int currentFrame;
        std::string textureID;
};
#endif
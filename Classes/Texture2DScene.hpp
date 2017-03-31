//
//  Texture2DScene.hpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/31.
//
//

#ifndef Texture2DScene_hpp
#define Texture2DScene_hpp

#include "cocos2d.h"
USING_NS_CC;

class Texture2DScene : public Layer {
public:
    static Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(Texture2DScene);
};

#endif /* Texture2DScene_hpp */

//
//  SpriteBatchNodeScene.hpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/31.
//
//

#ifndef SpriteBatchNodeScene_hpp
#define SpriteBatchNodeScene_hpp

#include "cocos2d.h"
USING_NS_CC;

class SpriteBatchNodeScene : public Layer {
public:
    static Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(SpriteBatchNodeScene);
};

#endif /* SpriteBatchNodeScene_hpp */

//
//  ManySpriteScene.hpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/29.
//
//

#ifndef ManySpriteScene_hpp
#define ManySpriteScene_hpp

#include "cocos2d.h"

USING_NS_CC;

class ManySpriteScene : public Layer {
public:
    static Scene * createScene();
    
    virtual bool init();
    
    CREATE_FUNC(ManySpriteScene);
};

#endif /* ManySpriteScene_hpp */

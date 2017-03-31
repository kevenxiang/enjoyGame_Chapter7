//
//  AutoBatchingScene.hpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/30.
//
//

#ifndef AutoBatchingScene_hpp
#define AutoBatchingScene_hpp

#include "cocos2d.h"
USING_NS_CC;

class AutoBatchingScene : public Layer {
public:
    static Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(AutoBatchingScene);
};

#endif /* AutoBatchingScene_hpp */

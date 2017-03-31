//
//  SecondLayerScene.hpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/30.
//
//

#ifndef SecondLayerScene_hpp
#define SecondLayerScene_hpp

#include "cocos2d.h"
USING_NS_CC;

class SecondLayerScene : public Layer {
public:
    SecondLayerScene();
    ~SecondLayerScene();
    CREATE_FUNC(SecondLayerScene);
    virtual bool init();
};

#endif /* SecondLayerScene_hpp */

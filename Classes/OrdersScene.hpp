//
//  OrdersScene.hpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/30.
//
//

#ifndef OrdersScene_hpp
#define OrdersScene_hpp

#include "cocos2d.h"
USING_NS_CC;

class OrdersScene : public Layer {
public:
    static Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(OrdersScene);

};

#endif /* OrdersScene_hpp */

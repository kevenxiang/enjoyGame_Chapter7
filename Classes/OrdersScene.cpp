//
//  OrdersScene.cpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/30.
//
//

#include "OrdersScene.hpp"
#include "SecondLayerScene.hpp"

Scene *OrdersScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = OrdersScene::create();
    
    scene->addChild(layer);
    
    auto secondLayer = SecondLayerScene::create();
    scene->addChild(secondLayer);
    
    return scene;
}

bool OrdersScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //创建一个精灵，它比较文雅
    auto sprite1 = Sprite::create("sprite1.png");
    sprite1->setPosition(Point(240, 160));
    this->addChild(sprite1);
    
    auto sprite2 = Sprite::create("sprite2.png");
    sprite2->setPosition(Point(200, 160));
    this->addChild(sprite2);
    
    //将第一个精灵和第二个精灵对换，现在第一个精灵显示在最上面
//    sprite1->setLocalZOrder(2);
//    sprite2->setLocalZOrder(1);
    
//    sprite1->setLocalZOrder(1);
//    sprite2->setLocalZOrder(1);
//    
    sprite1->setGlobalZOrder(2);
//    sprite2->setGlobalZOrder(1);
    
    return true;
}






















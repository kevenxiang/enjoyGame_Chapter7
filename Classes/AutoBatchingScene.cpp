//
//  AutoBatchingScene.cpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/30.
//
//

#include "AutoBatchingScene.hpp"

Scene *AutoBatchingScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = AutoBatchingScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool AutoBatchingScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //创建很多精灵
    for (int i = 0; i < 14100; i++) {
        auto xiaoruo = Sprite::create("sprite0.png");
        xiaoruo->setPosition(Point(CCRANDOM_0_1() * 480, 120 + CCRANDOM_0_1() * 300));
        this->addChild(xiaoruo);
        xiaoruo->setGlobalZOrder(1);
        
        xiaoruo = Sprite::create("sprite1.png");
        xiaoruo->setPosition(Point(CCRANDOM_0_1() * 480, 120 + CCRANDOM_0_1() * 300));
        this->addChild(xiaoruo);
        xiaoruo->setGlobalZOrder(2);
    }
    
    return true;
}
















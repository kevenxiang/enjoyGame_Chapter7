//
//  ManySpriteScene.cpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/29.
//
//

#include "ManySpriteScene.hpp"

Scene * ManySpriteScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = ManySpriteScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool ManySpriteScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //创建很多精灵
    for (int i = 0; i < 14100; i++) {
        auto xiao = Sprite::create("sprite0.png");
        xiao->setPosition(Point(CCRANDOM_0_1()*480, 120 + CCRANDOM_0_1() * 300));
        this->addChild(xiao);
    }
    
    return true;
}





















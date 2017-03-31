//
//  SecondLayerScene.cpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/30.
//
//

#include "SecondLayerScene.hpp"

SecondLayerScene::SecondLayerScene() {

}

SecondLayerScene::~SecondLayerScene() {

}

bool SecondLayerScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    auto sprite3 = Sprite::create("sprite3.png");
    sprite3->setPosition(Point(240, 160));
    this->addChild(sprite3);
    
    return true;
}

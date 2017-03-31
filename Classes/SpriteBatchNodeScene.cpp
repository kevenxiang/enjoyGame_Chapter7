//
//  SpriteBatchNodeScene.cpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/31.
//
//

#include "SpriteBatchNodeScene.hpp"

Scene *SpriteBatchNodeScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = SpriteBatchNodeScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool SpriteBatchNodeScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //创建批次渲染对象，并添加到场景中
    SpriteBatchNode *batchNode = SpriteBatchNode::create("sprite.png");
    this->addChild(batchNode);
    
    //创建很多个精灵
    for (int i = 0; i < 999; i++) {
        auto xiaoruo = Sprite::create("sprite.png");
        xiaoruo->setPosition(Point(CCRANDOM_0_1() * 480, 120+CCRANDOM_0_1()*200));
        
        //将精灵添加到batchNode对象
        batchNode->addChild(xiaoruo);
    }
    
    return true;
}













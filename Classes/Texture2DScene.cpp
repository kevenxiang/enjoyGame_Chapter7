//
//  Texture2DScene.cpp
//  enjoyGame_Chapter7
//
//  Created by xiang on 2017/3/31.
//
//

#include "Texture2DScene.hpp"

Scene *Texture2DScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = Texture2DScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool Texture2DScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    auto sp1 = Sprite::createWithSpriteFrame(SpriteFrame::create("sprite.png", Rect(0, 0, 20, 20)));
    auto sp2 = Sprite::create("sprite.png");
    
    sp1->setPosition(Point(100, 200));
    sp2->setPosition(Point(250, 200));
    this->addChild(sp1);
    this->addChild(sp2);
    
    //获取两个精灵的纹理对象
    Texture2D *t1 = sp1->getTexture();
    Texture2D *t2 = sp2->getTexture();
    
    log("%d", t1==t2);
    
    return true;
}

















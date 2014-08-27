//
//  MainScene.h
//  ChatNoir
//
//  Created by Joji Watanabe on 2014/08/27.
//
//

#ifndef __ChatNoir__MainScene__
#define __ChatNoir__MainScene__

#include <iostream>
#include "cocos2d.h"

class MainScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    void menuCloseCallback(cocos2d::Ref* pSender);

    CREATE_FUNC(MainScene);
};


#endif /* defined(__ChatNoir__MainScene__) */

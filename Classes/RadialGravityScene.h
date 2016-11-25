//
//  RadialGravityScene.h
//  RadialGravity
//
//  Copyright Nick Vellios 2010. All rights reserved.
//
//	nick@vellios.com
//	http://www.Vellios.com - iPhone Development Resource (Tutorials and Open Source)
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"

// HelloWorld Layer
@interface RadialGravity : CCLayer
{
	b2World* world;
	GLESDebugDraw *m_debugDraw;
	b2Fixture* planet; // This will be a static body - Nick
}

// returns a Scene that contains the HelloWorld as the only child
+(id) scene;

// adds a new sprite at a given coordinate
-(void) addNewSpriteWithCoords:(CGPoint)p;

@end

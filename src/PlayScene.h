#pragma once
#ifndef __PLAY_SCENE__
#define __PLAY_SCENE__

#include "Scene.h"
#include "Plane.h"
#include "Player.h"
#include "Button.h"
#include "Obstacle.h"
#include "DebugKeys.h"

class PlayScene : public Scene
{
public:
	PlayScene();
	~PlayScene();

	// Scene LifeCycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;
private:
	glm::vec2 m_mousePosition;

	Plane* m_pPlaneSprite;
	Player* m_pPlayer;
	bool m_playerFacingRight;

	bool m_bDebugMode, m_bPatrolMode; 

	bool m_bDebugKeys[NUM_OF_DEBUGKEYS];

	bool m_bHpressed;

	Obstacle* m_pObstacle;
	
};

#endif /* defined (__PLAY_SCENE__) */
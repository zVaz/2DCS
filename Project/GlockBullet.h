#pragma once
#include "IBullet.h"
class GlockBullet :
	public IBullet
{
public:
	GlockBullet(std::string id, sf::Vector2f startPos, sf::Vector2f direction, float rotation);
	~GlockBullet();
};


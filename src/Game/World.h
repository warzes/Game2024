#pragma once

#include "Map.h"

class World
{
public:
	bool Create();
	void Destroy();

	void Update(float deltaTime);
	void Draw(const Viewport& view);

private:
	Map m_map;
};
#pragma once

#include "Graphics.h"
#include <assert.h>
#include "Dude.h"

class Goal
{
public:
	void Init(int in_x, int in_y);
	//void Update();
	void Draw(Graphics& gfx) const;
	bool isTouched = false;
	void ProcessConsumption(const Dude& dude);

private:
	int x;
	int y;

	static constexpr int width = 24;
	static constexpr int height = 24;
	
	bool initialized = false;
};
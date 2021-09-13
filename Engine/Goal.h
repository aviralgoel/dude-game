#pragma once

#include "Graphics.h"
#include <assert.h>
#include "Dude.h"
#include <random>

class Goal
{
public:
	void Init(int in_x, int in_y);
	//void Update();
	void Draw(Graphics& gfx, int r, int b, int g) const;
	bool isTouched = false;
	void ProcessConsumption(const Dude& dude);
	int r = 1, g = 1, b = 1;
	

private:
	int x;
	int y;

	static constexpr int width = 24;
	static constexpr int height = 24;
	
	bool initialized = false;
};
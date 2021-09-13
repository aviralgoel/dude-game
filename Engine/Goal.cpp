#include "Goal.h"
#include "Graphics.h"
#include <assert.h>
#include "Dude.h"



void Goal::Init(int in_x, int in_y)
{	
	x = in_x;
	y = in_y;
}

void Goal::Draw(Graphics& gfx, int r, int b, int g) const
{
	for (int i = 0+x; i < height+x; i++)
	{
		for (int j = 0+y; j < width+y; j++)
		{
			gfx.PutPixel(i, j, r, b, g);
		}
	}
}

void Goal::ProcessConsumption(const Dude& dude)
{
	const int duderight = dude.GetX() + dude.GetWidth();
	const int dudebottom = dude.GetY() + dude.GetHeight();
	const int goalright = x + width;
	const int goalbottom = y + height;

	if (duderight >= x &&
		dude.GetX() <= goalright &&
		dudebottom >= y &&
		dude.GetY() <= goalbottom)
	{
		isTouched = true;
		
	}
}



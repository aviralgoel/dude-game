#include "Poo.h"
#include "Graphics.h"
#include <assert.h>



void Poo::Init(int in_x, int in_y, int in_vx, int in_vy)
{
	assert(initialized == false);
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
}

void Poo::Update()
{
	x += vx;
	y += vy;

	const int right = x + width;
	if( x < 0 )
	{
		x = 0;
		vx = -vx;
	}
	else if( right >= Graphics::ScreenWidth )
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const int bottom = y + height;
	if( y < 0 )
	{
		y = 0;
		vy = -vy;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}
}

void Poo::ProcessConsumption( const Dude& dude )
{
	const int duderight = dude.GetX() + dude.GetWidth();
	const int dudebottom = dude.GetY() + dude.GetHeight();
	const int pooright = x + width;
	const int poobottom = y + height;

	if( duderight >= x &&
		dude.GetX() <= pooright &&
		dudebottom >= y &&
		dude.GetY() <= poobottom )
	{
		isEaten = true;
	}
}

void Poo::Draw( Graphics& gfx ) const
{
	gfx.PutPixel(0 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(5 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(6 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(7 + x, 0 + y, 8, 8, 5);
	gfx.PutPixel(8 + x, 0 + y, 17, 16, 14);
	gfx.PutPixel(9 + x, 0 + y, 7, 6, 5);
	gfx.PutPixel(10 + x, 0 + y, 13, 11, 10);
	gfx.PutPixel(11 + x, 0 + y, 18, 17, 15);
	gfx.PutPixel(12 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(13 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(14 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(15 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(16 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(17 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(18 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 0 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(5 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(6 + x, 1 + y, 16, 14, 13);
	gfx.PutPixel(7 + x, 1 + y, 50, 45, 40);
	gfx.PutPixel(8 + x, 1 + y, 208, 187, 166);
	gfx.PutPixel(9 + x, 1 + y, 255, 229, 203);
	gfx.PutPixel(10 + x, 1 + y, 225, 202, 179);
	gfx.PutPixel(11 + x, 1 + y, 98, 88, 78);
	gfx.PutPixel(12 + x, 1 + y, 7, 6, 6);
	gfx.PutPixel(13 + x, 1 + y, 5, 5, 4);
	gfx.PutPixel(14 + x, 1 + y, 18, 16, 14);
	gfx.PutPixel(15 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(16 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(17 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(18 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 1 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 2 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 2 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 2 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 2 + y, 6, 6, 3);
	gfx.PutPixel(4 + x, 2 + y, 16, 13, 12);
	gfx.PutPixel(5 + x, 2 + y, 12, 11, 10);
	gfx.PutPixel(6 + x, 2 + y, 53, 47, 42);
	gfx.PutPixel(7 + x, 2 + y, 244, 219, 194);
	gfx.PutPixel(8 + x, 2 + y, 255, 229, 203);
	gfx.PutPixel(9 + x, 2 + y, 255, 229, 203);
	gfx.PutPixel(10 + x, 2 + y, 255, 229, 203);
	gfx.PutPixel(11 + x, 2 + y, 255, 229, 203);
	gfx.PutPixel(12 + x, 2 + y, 226, 203, 180);
	gfx.PutPixel(13 + x, 2 + y, 250, 225, 199);
	gfx.PutPixel(14 + x, 2 + y, 115, 104, 92);
	gfx.PutPixel(15 + x, 2 + y, 4, 4, 3);
	gfx.PutPixel(16 + x, 2 + y, 14, 12, 10);
	gfx.PutPixel(17 + x, 2 + y, 18, 17, 14);
	gfx.PutPixel(18 + x, 2 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 2 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 2 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 2 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 2 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 2 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 3 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 3 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 3 + y, 12, 10, 10);
	gfx.PutPixel(3 + x, 3 + y, 34, 30, 27);
	gfx.PutPixel(4 + x, 3 + y, 205, 184, 163);
	gfx.PutPixel(5 + x, 3 + y, 255, 229, 203);
	gfx.PutPixel(6 + x, 3 + y, 255, 229, 203);
	gfx.PutPixel(7 + x, 3 + y, 255, 229, 203);
	gfx.PutPixel(8 + x, 3 + y, 255, 229, 203);
	gfx.PutPixel(9 + x, 3 + y, 255, 229, 203);
	gfx.PutPixel(10 + x, 3 + y, 255, 229, 203);
	gfx.PutPixel(11 + x, 3 + y, 255, 229, 203);
	gfx.PutPixel(12 + x, 3 + y, 255, 229, 203);
	gfx.PutPixel(13 + x, 3 + y, 255, 229, 203);
	gfx.PutPixel(14 + x, 3 + y, 254, 228, 202);
	gfx.PutPixel(15 + x, 3 + y, 237, 213, 189);
	gfx.PutPixel(16 + x, 3 + y, 251, 225, 200);
	gfx.PutPixel(17 + x, 3 + y, 80, 72, 63);
	gfx.PutPixel(18 + x, 3 + y, 7, 5, 5);
	gfx.PutPixel(19 + x, 3 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 3 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 3 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 3 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 3 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 4 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 4 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 4 + y, 13, 12, 11);
	gfx.PutPixel(3 + x, 4 + y, 222, 199, 177);
	gfx.PutPixel(4 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(5 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(6 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(7 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(8 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(9 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(10 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(11 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(12 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(13 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(14 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(15 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(16 + x, 4 + y, 255, 229, 203);
	gfx.PutPixel(17 + x, 4 + y, 140, 125, 111);
	gfx.PutPixel(18 + x, 4 + y, 12, 12, 11);
	gfx.PutPixel(19 + x, 4 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 4 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 4 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 4 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 4 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 5 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 5 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 5 + y, 60, 53, 48);
	gfx.PutPixel(3 + x, 5 + y, 255, 229, 203);
	gfx.PutPixel(4 + x, 5 + y, 255, 229, 203);
	gfx.PutPixel(5 + x, 5 + y, 255, 229, 203);
	gfx.PutPixel(6 + x, 5 + y, 215, 193, 171);
	gfx.PutPixel(7 + x, 5 + y, 211, 189, 168);
	gfx.PutPixel(8 + x, 5 + y, 255, 229, 203);
	gfx.PutPixel(9 + x, 5 + y, 255, 229, 203);
	gfx.PutPixel(10 + x, 5 + y, 237, 213, 189);
	gfx.PutPixel(11 + x, 5 + y, 183, 164, 146);
	gfx.PutPixel(12 + x, 5 + y, 224, 201, 178);
	gfx.PutPixel(13 + x, 5 + y, 255, 229, 203);
	gfx.PutPixel(14 + x, 5 + y, 239, 215, 190);
	gfx.PutPixel(15 + x, 5 + y, 128, 114, 101);
	gfx.PutPixel(16 + x, 5 + y, 143, 129, 115);
	gfx.PutPixel(17 + x, 5 + y, 17, 15, 13);
	gfx.PutPixel(18 + x, 5 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 5 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 5 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 5 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 5 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 5 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 6 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 6 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 6 + y, 93, 82, 74);
	gfx.PutPixel(3 + x, 6 + y, 255, 229, 203);
	gfx.PutPixel(4 + x, 6 + y, 255, 229, 203);
	gfx.PutPixel(5 + x, 6 + y, 218, 196, 174);
	gfx.PutPixel(6 + x, 6 + y, 29, 24, 17);
	gfx.PutPixel(7 + x, 6 + y, 38, 31, 19);
	gfx.PutPixel(8 + x, 6 + y, 99, 88, 73);
	gfx.PutPixel(9 + x, 6 + y, 128, 114, 99);
	gfx.PutPixel(10 + x, 6 + y, 33, 28, 20);
	gfx.PutPixel(11 + x, 6 + y, 86, 69, 36);
	gfx.PutPixel(12 + x, 6 + y, 32, 26, 16);
	gfx.PutPixel(13 + x, 6 + y, 151, 135, 117);
	gfx.PutPixel(14 + x, 6 + y, 201, 181, 160);
	gfx.PutPixel(15 + x, 6 + y, 33, 27, 15);
	gfx.PutPixel(16 + x, 6 + y, 85, 67, 30);
	gfx.PutPixel(17 + x, 6 + y, 30, 31, 22);
	gfx.PutPixel(18 + x, 6 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 6 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 6 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 6 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 6 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 6 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 7 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 7 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 7 + y, 93, 84, 74);
	gfx.PutPixel(3 + x, 7 + y, 219, 197, 174);
	gfx.PutPixel(4 + x, 7 + y, 109, 97, 82);
	gfx.PutPixel(5 + x, 7 + y, 28, 23, 16);
	gfx.PutPixel(6 + x, 7 + y, 176, 138, 58);
	gfx.PutPixel(7 + x, 7 + y, 244, 190, 79);
	gfx.PutPixel(8 + x, 7 + y, 158, 123, 51);
	gfx.PutPixel(9 + x, 7 + y, 142, 111, 47);
	gfx.PutPixel(10 + x, 7 + y, 215, 168, 69);
	gfx.PutPixel(11 + x, 7 + y, 254, 198, 82);
	gfx.PutPixel(12 + x, 7 + y, 215, 168, 69);
	gfx.PutPixel(13 + x, 7 + y, 49, 42, 31);
	gfx.PutPixel(14 + x, 7 + y, 201, 181, 160);
	gfx.PutPixel(15 + x, 7 + y, 70, 57, 31);
	gfx.PutPixel(16 + x, 7 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 7 + y, 15, 15, 10);
	gfx.PutPixel(18 + x, 7 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 7 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 7 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 7 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 7 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 7 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 8 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 8 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 8 + y, 93, 84, 74);
	gfx.PutPixel(3 + x, 8 + y, 149, 134, 119);
	gfx.PutPixel(4 + x, 8 + y, 78, 63, 30);
	gfx.PutPixel(5 + x, 8 + y, 229, 179, 74);
	gfx.PutPixel(6 + x, 8 + y, 254, 198, 82);
	gfx.PutPixel(7 + x, 8 + y, 254, 198, 82);
	gfx.PutPixel(8 + x, 8 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 8 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 8 + y, 254, 198, 82);
	gfx.PutPixel(11 + x, 8 + y, 254, 198, 82);
	gfx.PutPixel(12 + x, 8 + y, 232, 181, 75);
	gfx.PutPixel(13 + x, 8 + y, 38, 32, 23);
	gfx.PutPixel(14 + x, 8 + y, 201, 181, 160);
	gfx.PutPixel(15 + x, 8 + y, 70, 57, 31);
	gfx.PutPixel(16 + x, 8 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 8 + y, 26, 39, 39);
	gfx.PutPixel(18 + x, 8 + y, 79, 123, 127);
	gfx.PutPixel(19 + x, 8 + y, 79, 123, 127);
	gfx.PutPixel(20 + x, 8 + y, 49, 76, 78);
	gfx.PutPixel(21 + x, 8 + y, 10, 14, 14);
	gfx.PutPixel(22 + x, 8 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 8 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 9 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 9 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 9 + y, 93, 84, 74);
	gfx.PutPixel(3 + x, 9 + y, 149, 134, 119);
	gfx.PutPixel(4 + x, 9 + y, 119, 96, 45);
	gfx.PutPixel(5 + x, 9 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 9 + y, 171, 134, 55);
	gfx.PutPixel(7 + x, 9 + y, 224, 175, 72);
	gfx.PutPixel(8 + x, 9 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 9 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 9 + y, 142, 111, 46);
	gfx.PutPixel(11 + x, 9 + y, 252, 196, 81);
	gfx.PutPixel(12 + x, 9 + y, 233, 182, 75);
	gfx.PutPixel(13 + x, 9 + y, 37, 31, 23);
	gfx.PutPixel(14 + x, 9 + y, 200, 180, 159);
	gfx.PutPixel(15 + x, 9 + y, 71, 57, 31);
	gfx.PutPixel(16 + x, 9 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 9 + y, 19, 27, 27);
	gfx.PutPixel(18 + x, 9 + y, 55, 85, 87);
	gfx.PutPixel(19 + x, 9 + y, 55, 85, 87);
	gfx.PutPixel(20 + x, 9 + y, 119, 185, 190);
	gfx.PutPixel(21 + x, 9 + y, 35, 55, 57);
	gfx.PutPixel(22 + x, 9 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 9 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 10 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 10 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 10 + y, 93, 84, 74);
	gfx.PutPixel(3 + x, 10 + y, 149, 134, 119);
	gfx.PutPixel(4 + x, 10 + y, 119, 96, 45);
	gfx.PutPixel(5 + x, 10 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 10 + y, 90, 70, 29);
	gfx.PutPixel(7 + x, 10 + y, 180, 141, 58);
	gfx.PutPixel(8 + x, 10 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 10 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 10 + y, 26, 20, 8);
	gfx.PutPixel(11 + x, 10 + y, 244, 190, 79);
	gfx.PutPixel(12 + x, 10 + y, 253, 197, 82);
	gfx.PutPixel(13 + x, 10 + y, 48, 39, 22);
	gfx.PutPixel(14 + x, 10 + y, 44, 38, 28);
	gfx.PutPixel(15 + x, 10 + y, 136, 107, 47);
	gfx.PutPixel(16 + x, 10 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 10 + y, 19, 19, 14);
	gfx.PutPixel(18 + x, 10 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 10 + y, 0, 2, 2);
	gfx.PutPixel(20 + x, 10 + y, 80, 124, 128);
	gfx.PutPixel(21 + x, 10 + y, 55, 85, 87);
	gfx.PutPixel(22 + x, 10 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 10 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 11 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 11 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 11 + y, 88, 79, 70);
	gfx.PutPixel(3 + x, 11 + y, 145, 131, 115);
	gfx.PutPixel(4 + x, 11 + y, 119, 96, 45);
	gfx.PutPixel(5 + x, 11 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 11 + y, 90, 70, 29);
	gfx.PutPixel(7 + x, 11 + y, 180, 141, 58);
	gfx.PutPixel(8 + x, 11 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 11 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 11 + y, 26, 20, 8);
	gfx.PutPixel(11 + x, 11 + y, 244, 190, 79);
	gfx.PutPixel(12 + x, 11 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 11 + y, 211, 165, 68);
	gfx.PutPixel(14 + x, 11 + y, 48, 37, 15);
	gfx.PutPixel(15 + x, 11 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 11 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 11 + y, 31, 33, 24);
	gfx.PutPixel(18 + x, 11 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 11 + y, 2, 2, 2);
	gfx.PutPixel(20 + x, 11 + y, 80, 124, 128);
	gfx.PutPixel(21 + x, 11 + y, 55, 85, 87);
	gfx.PutPixel(22 + x, 11 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 11 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 12 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 12 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 12 + y, 11, 10, 9);
	gfx.PutPixel(3 + x, 12 + y, 7, 6, 6);
	gfx.PutPixel(4 + x, 12 + y, 119, 95, 43);
	gfx.PutPixel(5 + x, 12 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 12 + y, 90, 70, 29);
	gfx.PutPixel(7 + x, 12 + y, 180, 141, 58);
	gfx.PutPixel(8 + x, 12 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 12 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 12 + y, 26, 20, 8);
	gfx.PutPixel(11 + x, 12 + y, 244, 190, 79);
	gfx.PutPixel(12 + x, 12 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 12 + y, 216, 168, 70);
	gfx.PutPixel(14 + x, 12 + y, 54, 42, 17);
	gfx.PutPixel(15 + x, 12 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 12 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 12 + y, 31, 33, 24);
	gfx.PutPixel(18 + x, 12 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 12 + y, 2, 2, 2);
	gfx.PutPixel(20 + x, 12 + y, 80, 124, 128);
	gfx.PutPixel(21 + x, 12 + y, 55, 85, 87);
	gfx.PutPixel(22 + x, 12 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 12 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 13 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 13 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 13 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 13 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 13 + y, 119, 95, 43);
	gfx.PutPixel(5 + x, 13 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 13 + y, 90, 70, 29);
	gfx.PutPixel(7 + x, 13 + y, 180, 141, 58);
	gfx.PutPixel(8 + x, 13 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 13 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 13 + y, 26, 20, 8);
	gfx.PutPixel(11 + x, 13 + y, 244, 190, 79);
	gfx.PutPixel(12 + x, 13 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 13 + y, 216, 168, 70);
	gfx.PutPixel(14 + x, 13 + y, 54, 42, 17);
	gfx.PutPixel(15 + x, 13 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 13 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 13 + y, 31, 33, 24);
	gfx.PutPixel(18 + x, 13 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 13 + y, 2, 2, 2);
	gfx.PutPixel(20 + x, 13 + y, 80, 124, 128);
	gfx.PutPixel(21 + x, 13 + y, 55, 85, 87);
	gfx.PutPixel(22 + x, 13 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 13 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 14 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 14 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 14 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 14 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 14 + y, 119, 95, 43);
	gfx.PutPixel(5 + x, 14 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 14 + y, 90, 70, 29);
	gfx.PutPixel(7 + x, 14 + y, 180, 141, 58);
	gfx.PutPixel(8 + x, 14 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 14 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 14 + y, 26, 20, 8);
	gfx.PutPixel(11 + x, 14 + y, 244, 190, 79);
	gfx.PutPixel(12 + x, 14 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 14 + y, 216, 168, 70);
	gfx.PutPixel(14 + x, 14 + y, 54, 42, 17);
	gfx.PutPixel(15 + x, 14 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 14 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 14 + y, 31, 33, 24);
	gfx.PutPixel(18 + x, 14 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 14 + y, 2, 2, 2);
	gfx.PutPixel(20 + x, 14 + y, 80, 124, 128);
	gfx.PutPixel(21 + x, 14 + y, 55, 85, 87);
	gfx.PutPixel(22 + x, 14 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 14 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 15 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 15 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 15 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 15 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 15 + y, 119, 95, 43);
	gfx.PutPixel(5 + x, 15 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 15 + y, 90, 70, 29);
	gfx.PutPixel(7 + x, 15 + y, 180, 141, 58);
	gfx.PutPixel(8 + x, 15 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 15 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 15 + y, 26, 20, 8);
	gfx.PutPixel(11 + x, 15 + y, 244, 190, 79);
	gfx.PutPixel(12 + x, 15 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 15 + y, 216, 168, 70);
	gfx.PutPixel(14 + x, 15 + y, 54, 42, 17);
	gfx.PutPixel(15 + x, 15 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 15 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 15 + y, 31, 33, 24);
	gfx.PutPixel(18 + x, 15 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 15 + y, 2, 2, 2);
	gfx.PutPixel(20 + x, 15 + y, 80, 124, 128);
	gfx.PutPixel(21 + x, 15 + y, 55, 85, 87);
	gfx.PutPixel(22 + x, 15 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 15 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 16 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 16 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 16 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 16 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 16 + y, 119, 95, 43);
	gfx.PutPixel(5 + x, 16 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 16 + y, 90, 70, 29);
	gfx.PutPixel(7 + x, 16 + y, 180, 141, 58);
	gfx.PutPixel(8 + x, 16 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 16 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 16 + y, 26, 20, 8);
	gfx.PutPixel(11 + x, 16 + y, 244, 190, 79);
	gfx.PutPixel(12 + x, 16 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 16 + y, 216, 168, 70);
	gfx.PutPixel(14 + x, 16 + y, 54, 42, 17);
	gfx.PutPixel(15 + x, 16 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 16 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 16 + y, 31, 33, 24);
	gfx.PutPixel(18 + x, 16 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 16 + y, 2, 2, 2);
	gfx.PutPixel(20 + x, 16 + y, 80, 124, 128);
	gfx.PutPixel(21 + x, 16 + y, 55, 85, 87);
	gfx.PutPixel(22 + x, 16 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 16 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 17 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 17 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 17 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 17 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 17 + y, 119, 95, 43);
	gfx.PutPixel(5 + x, 17 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 17 + y, 90, 70, 29);
	gfx.PutPixel(7 + x, 17 + y, 180, 141, 58);
	gfx.PutPixel(8 + x, 17 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 17 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 17 + y, 26, 20, 8);
	gfx.PutPixel(11 + x, 17 + y, 244, 190, 79);
	gfx.PutPixel(12 + x, 17 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 17 + y, 216, 168, 70);
	gfx.PutPixel(14 + x, 17 + y, 54, 42, 17);
	gfx.PutPixel(15 + x, 17 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 17 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 17 + y, 13, 15, 11);
	gfx.PutPixel(18 + x, 17 + y, 9, 12, 12);
	gfx.PutPixel(19 + x, 17 + y, 4, 5, 5);
	gfx.PutPixel(20 + x, 17 + y, 81, 125, 129);
	gfx.PutPixel(21 + x, 17 + y, 54, 83, 86);
	gfx.PutPixel(22 + x, 17 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 17 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 18 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 18 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 18 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 18 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 18 + y, 119, 95, 43);
	gfx.PutPixel(5 + x, 18 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 18 + y, 92, 71, 30);
	gfx.PutPixel(7 + x, 18 + y, 182, 142, 59);
	gfx.PutPixel(8 + x, 18 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 18 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 18 + y, 28, 22, 9);
	gfx.PutPixel(11 + x, 18 + y, 246, 192, 79);
	gfx.PutPixel(12 + x, 18 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 18 + y, 218, 170, 70);
	gfx.PutPixel(14 + x, 18 + y, 56, 43, 18);
	gfx.PutPixel(15 + x, 18 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 18 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 18 + y, 29, 44, 44);
	gfx.PutPixel(18 + x, 18 + y, 89, 139, 143);
	gfx.PutPixel(19 + x, 18 + y, 89, 139, 143);
	gfx.PutPixel(20 + x, 18 + y, 131, 204, 210);
	gfx.PutPixel(21 + x, 18 + y, 23, 36, 37);
	gfx.PutPixel(22 + x, 18 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 18 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 19 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 19 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 19 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 19 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 19 + y, 119, 95, 43);
	gfx.PutPixel(5 + x, 19 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 19 + y, 225, 175, 73);
	gfx.PutPixel(7 + x, 19 + y, 247, 193, 80);
	gfx.PutPixel(8 + x, 19 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 19 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 19 + y, 217, 169, 70);
	gfx.PutPixel(11 + x, 19 + y, 254, 198, 82);
	gfx.PutPixel(12 + x, 19 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 19 + y, 253, 197, 82);
	gfx.PutPixel(14 + x, 19 + y, 219, 171, 71);
	gfx.PutPixel(15 + x, 19 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 19 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 19 + y, 14, 22, 21);
	gfx.PutPixel(18 + x, 19 + y, 43, 66, 68);
	gfx.PutPixel(19 + x, 19 + y, 43, 66, 68);
	gfx.PutPixel(20 + x, 19 + y, 17, 26, 28);
	gfx.PutPixel(21 + x, 19 + y, 11, 17, 18);
	gfx.PutPixel(22 + x, 19 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 19 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 20 + y, 119, 95, 43);
	gfx.PutPixel(5 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(6 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(7 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(8 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(9 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(10 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(11 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(12 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(13 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(14 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(15 + x, 20 + y, 254, 198, 82);
	gfx.PutPixel(16 + x, 20 + y, 180, 141, 58);
	gfx.PutPixel(17 + x, 20 + y, 22, 22, 16);
	gfx.PutPixel(18 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 20 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 21 + y, 20, 19, 13);
	gfx.PutPixel(5 + x, 21 + y, 44, 42, 27);
	gfx.PutPixel(6 + x, 21 + y, 44, 42, 27);
	gfx.PutPixel(7 + x, 21 + y, 44, 42, 27);
	gfx.PutPixel(8 + x, 21 + y, 44, 42, 27);
	gfx.PutPixel(9 + x, 21 + y, 44, 42, 27);
	gfx.PutPixel(10 + x, 21 + y, 44, 42, 27);
	gfx.PutPixel(11 + x, 21 + y, 63, 60, 38);
	gfx.PutPixel(12 + x, 21 + y, 217, 207, 133);
	gfx.PutPixel(13 + x, 21 + y, 89, 85, 55);
	gfx.PutPixel(14 + x, 21 + y, 202, 193, 123);
	gfx.PutPixel(15 + x, 21 + y, 46, 44, 28);
	gfx.PutPixel(16 + x, 21 + y, 31, 30, 19);
	gfx.PutPixel(17 + x, 21 + y, 26, 29, 22);
	gfx.PutPixel(18 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 21 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 22 + y, 10, 17, 18);
	gfx.PutPixel(5 + x, 22 + y, 115, 178, 184);
	gfx.PutPixel(6 + x, 22 + y, 129, 200, 206);
	gfx.PutPixel(7 + x, 22 + y, 129, 200, 206);
	gfx.PutPixel(8 + x, 22 + y, 129, 200, 206);
	gfx.PutPixel(9 + x, 22 + y, 129, 200, 206);
	gfx.PutPixel(10 + x, 22 + y, 129, 200, 206);
	gfx.PutPixel(11 + x, 22 + y, 136, 210, 217);
	gfx.PutPixel(12 + x, 22 + y, 149, 231, 238);
	gfx.PutPixel(13 + x, 22 + y, 146, 226, 233);
	gfx.PutPixel(14 + x, 22 + y, 149, 231, 238);
	gfx.PutPixel(15 + x, 22 + y, 126, 196, 202);
	gfx.PutPixel(16 + x, 22 + y, 33, 51, 53);
	gfx.PutPixel(17 + x, 22 + y, 5, 7, 9);
	gfx.PutPixel(18 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 22 + y, 0, 0, 0);
	gfx.PutPixel(0 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(1 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(2 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(3 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(4 + x, 23 + y, 9, 13, 13);
	gfx.PutPixel(5 + x, 23 + y, 6, 11, 11);
	gfx.PutPixel(6 + x, 23 + y, 5, 8, 8);
	gfx.PutPixel(7 + x, 23 + y, 5, 8, 8);
	gfx.PutPixel(8 + x, 23 + y, 5, 8, 8);
	gfx.PutPixel(9 + x, 23 + y, 5, 8, 8);
	gfx.PutPixel(10 + x, 23 + y, 5, 8, 8);
	gfx.PutPixel(11 + x, 23 + y, 5, 8, 8);
	gfx.PutPixel(12 + x, 23 + y, 5, 8, 8);
	gfx.PutPixel(13 + x, 23 + y, 5, 8, 8);
	gfx.PutPixel(14 + x, 23 + y, 5, 8, 8);
	gfx.PutPixel(15 + x, 23 + y, 5, 8, 9);
	gfx.PutPixel(16 + x, 23 + y, 11, 17, 17);
	gfx.PutPixel(17 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(18 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(19 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(20 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(21 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(22 + x, 23 + y, 0, 0, 0);
	gfx.PutPixel(23 + x, 23 + y, 0, 0, 0);

}

bool Poo::IsEaten() const
{
	return isEaten;
}

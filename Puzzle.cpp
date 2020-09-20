#include <bangtal.h>
using namespace bangtal;

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
bool isUsed[16];

//class Location {
//public:
//	int X, Y, XLen, YLen;
//
//	Location(int x, int y, int Xlen, int Ylen) : X(x), Y(y), XLen(Xlen), YLen(Ylen) {};
//};

class Location {
public:
	int X, Y;

	Location(int x, int y) : X(x), Y(y) {};
};

int main()
{
	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_ROOM_TITLE, false);

	auto scene = Scene::create("퍼즐맞추기", "센과치히로의행방불명/Images/배경.png");

	//int Xlen = 222;
	//int Ylen = 148;
	Location location[16] = {
		{183, 506},
		{404, 506},
		{625, 506},
		{846, 506},
		{183, 359},
		{404, 359},
		{625, 359},
		{846, 359},
		{183, 212},
		{404, 212},
		{625, 212},
		{846, 212},
		{183, 65},
		{404, 65},
		{625, 65},
		{846, 65},
	};

	auto piece1 = Object::create("센과치히로의행방불명/Images/1.png", scene);
	auto piece2 = Object::create("센과치히로의행방불명/Images/2.png", scene);
	auto piece3 = Object::create("센과치히로의행방불명/Images/3.png", scene);
	auto piece4 = Object::create("센과치히로의행방불명/Images/4.png", scene);
	auto piece5 = Object::create("센과치히로의행방불명/Images/5.png", scene);
	auto piece6 = Object::create("센과치히로의행방불명/Images/6.png", scene);
	auto piece7 = Object::create("센과치히로의행방불명/Images/7.png", scene);
	auto piece8 = Object::create("센과치히로의행방불명/Images/8.png", scene);
	auto piece9 = Object::create("센과치히로의행방불명/Images/9.png", scene);
	auto piece10 = Object::create("센과치히로의행방불명/Images/10.png", scene);
	auto piece11 = Object::create("센과치히로의행방불명/Images/11.png", scene);
	auto piece12 = Object::create("센과치히로의행방불명/Images/12.png", scene);
	auto piece13 = Object::create("센과치히로의행방불명/Images/13.png", scene);
	auto piece14 = Object::create("센과치히로의행방불명/Images/14.png", scene);
	auto piece15 = Object::create("센과치히로의행방불명/Images/15.png", scene);
	auto piece16 = Object::create("센과치히로의행방불명/Images/16.png", scene);

	ObjectPtr piece[16] = {
	piece1, piece2, piece3, piece4, piece5, piece6, piece7, piece8, piece9, piece10, piece11, piece12, piece13, piece14, piece15, piece16
	};

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 16; i++)
	{
		int index = -1;
		while (true)
		{
			index = rand() % 16;
			if (isUsed[index] == 0) break;
		}
		isUsed[index] = 1;
		int X = location[index].X;
		int Y = location[index].Y;
	}

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 16; i++)
	{
		int index = -1;
		while (true)
		{
			index = rand() % 16;
			if (isUsed[index] == 0) break;
		}
		isUsed[index] = 1;
		int x = location[index].X;
		int y = location[index].Y;
	}

	startGame(scene);

	return 0;
};
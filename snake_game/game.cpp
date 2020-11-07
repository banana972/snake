#include <iostream>
#include <cconio>

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { stop, left, right, up, down } dir;


void setup(void)
{
	gameOver = false;
	dir = stop;
	x = width / 2 - 1;
	y = height / 2 - 1;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void draw(void)
{
	system("clear");
	for (int i = 0; i < width + 1; i++)		// верхняя граница
		std::cout << '#';
	std::cout << std::endl;
	
	for (int i = 0; i < height; i++)		// нижняя граница
	{
		for (int j = 0; j < width; ++j)
		{
			if (j == 0 || j == width - 1)
				std::cout << '#';
			if (i == y && j == x)
				std::cout << '0';
			else if (i == fruitY && j == fruitX)
				std::cout << "f";
			else
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
	
	
	for (int i = 0; i < width + 1; i++)		// нижняя граница
		std::cout << '#';
	
	std::cout << std::endl;
}

void input(void)
{
	
}

void logic(void)
{
	
}

int main(void)
{
	setup();
	
	//while (!gameOver)
	//{
		draw();
		//input();
		//logic();
	//}
	return 0;
}

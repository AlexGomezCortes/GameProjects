#include <iostream>
#include "Scenes.h"
#include "Renderer.h"
#include "Game.h"

int main(int argc, char *argv[])
{
	Game* GameManager = new Game();
	GameManager->Run();

	return 0;
}
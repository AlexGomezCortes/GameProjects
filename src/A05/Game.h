#pragma once
#include <iostream>
#include "Menu.h"
#include "Play.h"

class Game
{
public:
	Game();
	~Game();

	Scenes* CurrentScene = nullptr;
	bool isRunning;

	void Run();
	void EventHandler();

private:

	//enum class Eventos{};
};


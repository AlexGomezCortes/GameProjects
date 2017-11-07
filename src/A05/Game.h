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
	
	void exit();

	void Run();
	
	void stopGame();

	template <typename T>
	void goTo(T newScene);
private:
	//enum class Eventos{};
};


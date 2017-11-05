#include "Game.h"

Game::Game()
{
	CurrentScene = new Menu();
	isRunning = true;
}


Game::~Game()
{
}

void Game::Run()
{

	while (isRunning)
	{
		EventHandler();
		Renderer::Instance()->Clear();
		CurrentScene->update();
		Renderer::Instance()->Render();
	}
}

void Game::EventHandler()
{
	SDL_Event evnt;

	while (SDL_PollEvent(&evnt))
	{
		switch (evnt.type)
		{
		case SDL_QUIT:
			isRunning = false;
			break;

		}
	}
}

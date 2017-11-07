#include "Game.h"

Game::Game()
{
	CurrentScene = new Menu();
}


Game::~Game()
{
}

void Game::Run()
{
	while (CurrentScene->Active())
	{
		if (CurrentScene->Change()) {
			delete CurrentScene;
			CurrentScene = new Play();
		}
		Renderer::Instance()->Clear();
		CurrentScene->eventHandler();
		CurrentScene->update();
		CurrentScene->draw();
		Renderer::Instance()->Render();

	}
}

void Game::stopGame()
{
	delete CurrentScene;
}

template <typename T>
void Game::goTo(T newScene)
{
	delete CurrentScene;
	CurrentScene = new T;
}



#pragma once
#include <SDL.h>
#include <iostream>
#include "Scenes.h"
#include "Constants.h"
#include "Renderer.h"

class Menu : public Scenes
{
public:
	Menu();
	~Menu();

	SDL_Texture* BackgorundMenu;
	std::string BackGroundMenuID;
	std::string MenuBGFolderPath;
	SDL_Rect MenuBGRect;

	void update() override;
};


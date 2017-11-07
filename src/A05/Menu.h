#pragma once
#include <SDL.h>
#include <iostream>
#include "Scenes.h"
#include "Constants.h"
#include "Renderer.h"
#include "Button.h"

class Menu : public Scenes
{
public:
	Menu();
	~Menu();

	

	void update() override;
	void draw() override;
	void eventHandler() override;
	bool Active() override;
	bool Change() override;

private:
	SDL_Texture* BackgorundMenu;
	std::string BackGroundMenuID;
	std::string MenuBGFolderPath;
	SDL_Rect MenuBGRect;

public:
	Button* play;
	Button* exit;

	
};


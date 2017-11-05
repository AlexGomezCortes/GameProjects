#pragma once
#include <SDL.h>
#include <iostream>
#include "Scenes.h"
#include "Constants.h"
#include "Renderer.h"


class Play : public Scenes
{
public:
	Play();
	~Play();

	std::string BackGroundPlayID;
	std::string PlayBGFolderPath;
	SDL_Rect PlayBGRect;

	SDL_Texture* PlayBGTexture;

	void update() override;
};


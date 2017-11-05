#pragma once

#include <SDL.h>
#include <iostream>
#include "Renderer.h"
#include "Constants.h"

class Gold  
{
public:
	Gold();
	~Gold();

	std::string GoldFolderPath;
	std::string GoldTextureID;
	SDL_Texture* GoldTexture;

	/*struct Rectangulo //no usamos SDL_Rect para desvincular esta clase de SDL
	{
		int x;
		int y;
		int width;
		int height;
	};*/

	//Rectangulo GoldRect;
	SDL_Rect RectGold;

	void LoadTexture();
    void RenderGold();

	void update();
};


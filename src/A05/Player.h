#pragma once
#pragma once
#include <SDL.h>
#include <iostream>
#include "Renderer.h"
#include "Constants.h"

class Player //Player hereda de Play que a su vez este hereda de Scenes, asi que cuando Scenes haga un new Play, a su vez este haga un new Player (y un new Gold)
{
public:
	Player();
	~Player();

	std::string PlayerTextureID;
	std::string PlayerFolderPath;
	SDL_Texture* PlayerTexture;
	Vector2 RectPos; //Estamos obligados a usar un vector para saber donde poner al rectangulo que recorre los sprites porque ella ha usado una funcion que determina el ancho y el alto del sprite 
	                  //la cual devuelve un vector

	/*struct Rectangulo //no usamos SDL_Rect para desvincular esta clase de SDL
	{
		int x;
		int y;
		int width;
		int height;
	};*/

	//Rectangulo PlayerRect;

	SDL_Rect RectPlayer;
	SDL_Rect RectPlayerSprite;

	void LoadTexture();
	void RenderPlayer();

	void update();

};


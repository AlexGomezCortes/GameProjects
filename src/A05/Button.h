#pragma once
#include <SDL.h>
#include <iostream>
#include"Renderer.h"
#include "Types.h"
#include "Constants.h"

class Button
{
public:
	Button();
	~Button();

	std::string TextID;
	std::string FontID;
	std::string Texto;
	std::string FontPath;
	Color colorete;
	int size;

	SDL_Rect TextRect;

	void CargarFuente();
	void RenderizarTexto();
	void ChangeFont(Font msg);
	void ChangeFontSize(int size);
	void ChangeColor(Color color);
	void ChangeMessage(std::string mensaje);
	void ChangePos(Vector2 newpos);
	void ChangeSize(Vector2 newsize);
	Vector2 getSize();
	bool onClick();



	
};


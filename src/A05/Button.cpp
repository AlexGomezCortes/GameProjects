#include "Button.h"



Button::Button()
{
	size = 50;
	FontPath = PATH_FONT + "saiyan.ttf";
	colorete={0,0,0,255};	
	FontID = "SAIYAN_" + std::to_string(size);
	TextRect.x = TextRect.y = 100;
	TextRect.w = TextRect.h = 100;
	Texto = "sample";
	TextID = MENU_TEXT_BUTTON_PLAY + Texto;
}

Button::~Button()
{
}

void Button::CargarFuente()
{
	Renderer::Instance()->LoadFont({FontID, FontPath, size});
	Renderer::Instance()->LoadTextureText(FontID, {TextID, Texto, colorete, TextRect.w, TextRect.h});
}

void Button::ChangeFont(Font msg)
{
	FontID = msg.id;
	FontPath = msg.path;
	size = msg.size;
}

void Button::ChangeFontSize(int size)
{
	this->size = size;
}

void Button::ChangeColor(Color color)
{
	colorete = color;
}

void Button::ChangeMessage(std::string mensaje)
{
	Texto = mensaje;
	TextID = MENU_TEXT_BUTTON_PLAY + Texto;
}

void Button::ChangePos(Vector2 newpos)
{
	TextRect.x = newpos.x;
	TextRect.y = newpos.y;
}

void Button::ChangeSize(Vector2 newsize)
{
	TextRect.w = newsize.x;
	TextRect.h = newsize.y;
}

void Button::RenderizarTexto()
{
	Renderer::Instance()->PushImage(TextID, TextRect);
}

Vector2 Button::getSize() {
	return{ TextRect.w, TextRect.h };
}

bool Button::onClick()
{
	int x, y;
	SDL_GetMouseState(&x, &y);

	if ((x >= TextRect.x && x <= TextRect.x + TextRect.w) && (y >= TextRect.y && y <= TextRect.y + TextRect.h))
	return true;
	
	return false;
}

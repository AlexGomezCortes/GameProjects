#include "Menu.h"



Menu::Menu()
{
	BackGroundMenuID = MENU_BG;
	MenuBGFolderPath= PATH_IMG + "bg.jpg";

	MenuBGRect.x = SCREEN_WIDTH / SCREEN_WIDTH;
	MenuBGRect.y = SCREEN_HEIGHT / SCREEN_HEIGHT;
	MenuBGRect.w = SCREEN_WIDTH;
	MenuBGRect.h = SCREEN_HEIGHT;

	Renderer::Instance()->LoadTexture(BackGroundMenuID, MenuBGFolderPath); //guaradmos el bg del menu en el map de texturas
	Renderer::Instance()->PushImage(MenuBGFolderPath, MenuBGRect); //asi solo que scene haga un new menu ya se carga el fondo
}


Menu::~Menu()
{
}

void Menu::update()
{
	Renderer::Instance()->PushImage(BackGroundMenuID, MenuBGRect);
}

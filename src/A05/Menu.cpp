#include "Menu.h"


Menu::Menu()
{
	BackGroundMenuID = MENU_BG;
	MenuBGFolderPath= PATH_IMG + "bg.jpg";

	MenuBGRect.x = 0;
	MenuBGRect.y = 0;
	MenuBGRect.w = SCREEN_WIDTH;
	MenuBGRect.h = SCREEN_HEIGHT;

	Renderer::Instance()->LoadTexture(BackGroundMenuID, MenuBGFolderPath); //guaradmos el bg del menu en el map de texturas
	Renderer::Instance()->PushImage(MenuBGFolderPath, MenuBGRect); //asi solo que scene haga un new menu ya se carga el fondo

	play = new Button();
	play->ChangeColor({ 0, 255, 0, 255 });
	play->ChangePos({ SCREEN_WIDTH / 2-(play->getSize().x)/2, SCREEN_HEIGHT / 2 - (play->getSize().y) / 2 });
	play->ChangeSize({ 100, 50 });
	play->ChangeMessage("Play");
	play->CargarFuente();

	exit = new Button();
	exit->ChangeColor({ 255, 0, 0, 255 });
	exit->ChangePos({ SCREEN_WIDTH / 2 - (exit->getSize().x) / 2, static_cast<int>(SCREEN_HEIGHT*1.25f) / 2 - (exit->getSize().y) / 2 });
	exit->ChangeSize({ 100, 50 });
	exit->ChangeMessage("Exit");
	exit->CargarFuente();

	myState = state::_run;
}


Menu::~Menu()
{
}

void Menu::update()
{

}

void Menu::draw()
{
	Renderer::Instance()->PushImage(BackGroundMenuID, MenuBGRect);
	play->RenderizarTexto();
	exit->RenderizarTexto();
}

void Menu::eventHandler()
{
	SDL_Event evnt;

	while (SDL_PollEvent(&evnt))
	{
		switch (evnt.type)
		{
		case SDL_QUIT:
			myState = state::_stop;
			break;
		case SDL_MOUSEBUTTONDOWN:
			switch (evnt.button.button) {
			case SDL_BUTTON_LEFT:
				if (play->onClick())
					myState = state::_change;
				else if(exit->onClick())
					myState = state::_stop;
				break;
			}
			break;

		}
	}
}

bool Menu::Active() {
	return (myState == state::_run || myState==state::_change);
}
bool Menu::Change() {
	return (myState == state::_change);
}
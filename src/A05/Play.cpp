#include "Play.h"



Play::Play()
{
	BackGroundPlayID = PLAY_BG;
	PlayBGFolderPath = PATH_IMG + "bgCastle.jpg";

	PlayBGRect.x = 0;
	PlayBGRect.y = 0;
	PlayBGRect.w = SCREEN_WIDTH;
	PlayBGRect.h = SCREEN_HEIGHT;

	Renderer::Instance()->LoadTexture(BackGroundPlayID, PlayBGFolderPath); //guaradmos el bg del play en el map de texturas
	Renderer::Instance()->PushImage(PlayBGFolderPath, PlayBGRect); //asi solo que scene haga un new play ya se carga el fondo

}


Play::~Play()
{
}

void Play::update()
{
}

void Play::draw()
{
	Renderer::Instance()->PushImage(BackGroundPlayID, PlayBGRect);
}

void Play::eventHandler()
{
}

bool Play::Active()
{
	return (myState == state::_run);
}

#include "Play.h"



Play::Play()
{
	BackGroundPlayID = PLAY_BG;
	PlayBGFolderPath = PATH_IMG + "bgCastle.png";

	PlayBGRect.x = SCREEN_WIDTH / SCREEN_WIDTH;
	PlayBGRect.y = SCREEN_HEIGHT / SCREEN_HEIGHT;
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

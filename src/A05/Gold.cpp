#include "Gold.h"



Gold::Gold()
{
	GoldFolderPath = PATH_IMG + +"gold";
	GoldTextureID = PLAY_GOLD;

	RectGold.x = 200;
	RectGold.y = 200;
	RectGold.w = 100;
	RectGold.h = 100;

	Renderer::Instance()->LoadTexture(GoldTextureID, GoldFolderPath);
}


Gold::~Gold()
{
}

void Gold::LoadTexture()
{
	Renderer::Instance()->PushImage(GoldTextureID, RectGold);
}

void Gold::RenderGold()
{


}

void Gold::update()
{
	//aqui se podria llamar a una funcion que calcule randomente (?) :') los rectangulos de las texturas
	Renderer::Instance()->PushImage(GoldTextureID, RectGold);
}

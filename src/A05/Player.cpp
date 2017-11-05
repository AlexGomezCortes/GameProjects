#include "Player.h"



Player::Player()
{
	PlayerTextureID = PLAYER_SPRITE;
	PlayerFolderPath = PATH_IMG + "spCastle";

	RectPlayer.x = 100; // 100 y 100 para tenerlo en pantalla mas que nada
	RectPlayer.y = 100;
	RectPlayer.w = 150;
	RectPlayer.h = 150;

	RectPos=Renderer::Instance()->GetTextureSize(PlayerFolderPath);
	RectPlayerSprite.w = RectPos.x;//x corresponde al width (fijate en la funcion que ella usa en renderer.cpp)
	RectPlayerSprite.h = RectPos.y; //y corresponde al height

	Renderer::Instance()->LoadTexture(PlayerTextureID, PlayerFolderPath); //Cargamos la textura del player en el map de texturas
}


Player::~Player()
{
}

void Player::LoadTexture()
{
	//PlayerTexture=Renderer::Instance()->m_textureData[PlayerTextureID];
	Renderer::Instance()->PushSprite(PlayerTextureID, RectPlayerSprite, RectPlayer);
}

void Player::update()
{

	Renderer::Instance()->PushSprite(PlayerTextureID, RectPlayerSprite, RectPlayer);
}

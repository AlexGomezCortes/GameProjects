#pragma once
#include <iostream>
#include <SDL.h>

class Scenes 
{
public:
	Scenes();
	~Scenes();

protected:
	enum class state{_run, _change, _stop};
	state myState;

public:
	virtual void update();
	virtual void eventHandler();
	virtual void draw();
	virtual bool Active();
	virtual bool Change();



	
};


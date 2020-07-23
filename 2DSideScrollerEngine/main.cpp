#include"pch.h"
#include<iostream> 
#include<SFML/Graphics.hpp>
#include"MainApplication.hpp"

int main()
{
	MainApplication app(sf::VideoMode(1280, 720), "Game Engine");

	app.run();

	return 0;
}

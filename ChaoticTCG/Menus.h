#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

class Menus
{
public:
	Menus();
	~Menus();
	void StartMenu();
	void Registration();
	void Profile();
	void MainMenu();
	void DeckBuilder();
	void DeckSelection();
	void HostJoin();


private:

};

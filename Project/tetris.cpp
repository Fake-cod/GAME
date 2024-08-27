#include<SFML/Graphics.hpp>
#include"game.h"
#include<chrono>
#include<iostream>
#include<SFML/Audio.hpp>
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(420, 610), "Tetris");
	window.setFramerateLimit(60);
	
	Font font;
	font.loadFromFile("Jersey10-Regular.ttf");

	Text text1,text2,text3,scoreText;

	text1.setFont(font);
	text1.setString("Score");
	text1.setCharacterSize(30);
	text1.setPosition(320, 2);
	text1.setFillColor(sf::Color::White);

	text2.setFont(font);
	text2.setString("Next");
	text2.setCharacterSize(30);
	text2.setPosition(320, 120);
	text2.setFillColor(sf::Color::White);

	text3.setFont(font);
	text3.setString("GAME OVER");
	text3.setCharacterSize(30);
	text3.setPosition(310, 320);
	text3.setFillColor(sf::Color::White);

	scoreText.setFont(font);
	scoreText.setCharacterSize(30);
	scoreText.setFillColor(sf::Color::White);
	//RectangleShape shape1(Vector2f(90, 50));
	//shape1.setPosition(310, 40);
	//shape1.setFillColor(Color::Blue);

	//RectangleShape shape2(Vector2f(90, 90));
	//shape2.setPosition(310, 180);
	//shape2.setFillColor(Color::Blue);

	Music music;
	music.openFromFile("backgroundmusic.mp3");
	music.setLoop(true);
	music.play();


	auto lastupdatetime = std::chrono::steady_clock::now();
	Grid grid ;

	Game game;


	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
	
		}
		if (!game.gameover)
		{
			auto now = std::chrono::steady_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(now - lastupdatetime).count();
			if (elapsed >= 600)
			{
				game.MoveblockDown();
				lastupdatetime = now;
			}
			game.handleinput();
		}
		window.clear();
		game.Draw(window);
		window.draw(text1);
		window.draw(text2);

		char scoretext[10];
		sprintf_s(scoretext, "%d", game.score);
		scoreText.setString(scoretext);
		//scoreText.setCharacterSize(30);
		scoreText.setPosition(320 + (170 - scoreText.getLocalBounds().width) / 2, 65);
		scoreText.setFillColor(Color::White);
		window.draw(scoreText);

		if (game.gameover)
		{
			window.draw(text3);
			music.stop();
		}
			//window.draw(scoreText);
		
		//window.draw(shape1);
		//window.draw(shape2);
		window.display();
	}
}

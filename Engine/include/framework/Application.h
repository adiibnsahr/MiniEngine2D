#pragma once
#include <SFML/Graphics.hpp>

namespace MiniEngine
{
	class Application
	{
	public:
		Application();
		void Run();
	private:
		sf::RenderWindow mWindow;
	};
}
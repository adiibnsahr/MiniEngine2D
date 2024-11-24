#include "framework/Application.h"

namespace MiniEngine
{
	Application::Application()
		: mWindow{ sf::VideoMode(1024, 1440), "Mini Engine" }
	{

	}
	void Application::Run()
	{
        while (mWindow.isOpen())
        {
            sf::Event windowEvent;
            while (mWindow.pollEvent(windowEvent))
            {
                if (windowEvent.type == sf::Event::EventType::Closed)
                {
                    mWindow.close();
                }
            }
        }
	}
}

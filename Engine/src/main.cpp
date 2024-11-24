#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>

#include "framework/Application.h"

int main()
{
    // Allocating on the heap
    std::unique_ptr<MiniEngine::Application> app = std::make_unique<MiniEngine::Application>();
    app->Run();
}
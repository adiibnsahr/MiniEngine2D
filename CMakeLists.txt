cmake_minimum_required(VERSION 3.31.0)

project(MiniEngine2D
	VERSION 1.0.0
	LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD			14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS	   OFF)

# Create a variable
set(MINI_ENGINE_GAME_TARGET_NAME Engine)

add_subdirectory(Engine)
cmake_minimum_required(VERSION 3.31.0)

project(MiniEngine2D
	VERSION 1.0.0
	LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD			14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS	   OFF)

include(FetchContent)
set(SFML_LIB_NAME SFML)

FetchContent_Declare(
	${SFML_LIB_NAME}
	GIT_REPOSITORY https://github.com/SFML/SFML
	GIT_TAG 2.6.2
	GIT_SHALLOW FALSE
)

FetchContent_MakeAvailable(${SFML_LIB_NAME})

# Create a variable
set(MINI_ENGINE_GAME_TARGET_NAME Engine)

add_subdirectory(Engine)


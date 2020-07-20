# Extended Snake Game

This is the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The project, based on/ forked from https://github.com/udacity/CppND-Capstone-Snake-Game, is extended by the following new features and coding criteria 


## New Features
* Pause/ resume button (esc)
* Score List (sorted scores are presented)
* Energy food (special food speeds up the snake for 5 sec) 

## Coding Criteria
* The project demonstrates an understanding of C++ functions and control structures.
  * A variety of control structures are used in the project. (e.g. scoreList.cpp. snake.cpp)
  * The project code is clearly organized into functions. (compare complete source code)
* The project reads data from a file and process the data, or the program writes data to a file.
  * The project reads data from an external file or writes data to a file as part of the necessary operation of the program.(e.g. scoreList.cpp)
* The project accepts user input and processes the input.
  * The project accepts input from a user as part of the necessary operation of the program. (e.g. player.cpp, controller.cpp: HandleInput())
* The project uses Object Oriented Programming techniques.
  * The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks. (e.g. scorelist.h, scorelist.cpp)
* Classes use appropriate access specifiers for class members.
  * All class data members are explicitly specified as public, protected, or private. (e.g. scorelist.h) 
* Class constructors utilize member initialization lists.
  * All class members that are set to argument values are initialized through member initialization lists. (many examples in code, e.g. Game constructor)
* Classes abstract implementation details from their interfaces.
  * All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways. (many examples in the code)
* The project makes use of references in function declarations.
  * At least two variables are defined as references, or two functions use pass-by-reference in the project code. (e.g. using speed in snake as reference, controller.cpp: HandleInput())
* The project uses multithreading
  * The project uses multiple threads in the execution. (e.g. every time the snake eats energy food, an energy thread is started -> the snake speeds up for 5 sec)


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

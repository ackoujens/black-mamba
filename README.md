# Black Mamba Gaming Engine ![alt tag](https://travis-ci.org/Makkura666/black-mamba.svg?branch=master)
A cross-platform OpenGL game engine, using `GLFW`, `Glew` and `glm` in C++. Different project configuration are generated with `cmake`.

I'm planning to build up a basic boilerplate, create something basic and add on features as soon as I need them.

Also I don't know what to call this engine and so I'll temporarily codename it [black-mamba](https://s-media-cache-ak0.pinimg.com/736x/24/b5/e6/24b5e61f6c7a88a828638d2769eaeb9b.jpg).

## Cloning
the `libs/` folder contain external dependencies and they are tracked using git submodules. In order to compile the program you must use the --recursive option.

```
git clone git@github.com:Makkura666/black-mamba.git --recursive
```

If you didn't use the --recursive option, you can also use these.

```
git submodule init
git submodule update
```

## Requirements
- C+11 compiler
- cmake (>= 2.8)
- OpenGL drivers (>=3.0)
- Some standard library depending on your platform

## Linux
To build, you could need to have the following library (not exhaustive) on ubuntu :
- libxi-dev
- libxinerama-dev
- libxcursor-dev
- libglew-dev
- libxrandr-dev

Open the directory into a terminal

```
mkdir build
cd build
cmake ..
./main
```

## Usage (Windows)
For instance :
- cmake-gui .
- Configure (Choose for example Visual Studio generator)
- Generate
- Launch the generated project in your favorite IDE and run it.

# Mac Os X
Using Xcode as default example

```
mkdir xcode && cd xcode
cmake -G 'Xcode' ..
```

# Tools used
- [ASCII text generator](http://patorjk.com/software/taag/) -
- Used for generating intro title for the terminal

# Resources
- [Grandmaster blog](http://www.grandmaster.nu/blog/?page_id=118) - Incomplete but very interesting game engine blog. Mainly I read about his opinion on what should be in an engine and what components you should think of using.
- [deWiTTERS Game Loop](http://www.koonsolo.com/news/dewitters-gameloop/) - Taught me how and when to use each game loop and the cons/pros of using each.
- [OGLdev Modern OpenGL Tutorials](http://ogldev.atspace.co.uk/) - OpenGL fundamental tutorials on a clean and to the point website.

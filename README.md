# Libraries
* GLFW
** GLFW is a multi-platform library that handles windows, contexts, inputs, etc
* GLM
** GLM is a optimized linear algebra library for OpenGL
* stb_image
** stb_image is a simple utility library that can load images in various popular formats
* glad
** OpenGL function loader; useful on platforms like Windows which only ship headers for OpenGL 1.1

# Instructions
## compile_commands.json generation
```cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..```
## Specify Release vs Debug
* ```cmake -DCMAKE_BUILD_TYPE=Debug ..```
* ```cmake -DCMAKE_BUILD_TYPE=Release ..```

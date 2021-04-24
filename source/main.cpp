#include <iostream>
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>
//
int main(int argc, char **argv)
{
	glfwInit();
	glm::vec3 myVector(1.0);
	std::cout << myVector.x << std::endl;
	return 0;
}

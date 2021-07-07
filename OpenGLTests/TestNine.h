#pragma once

#include "stb_image.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "UsefulMethods.h"
#include "Shader.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
using namespace std;

class TestNine
{
public:
	static void runTest();
private:
	static void mouse_callback(GLFWwindow* window, double xpos, double ypos);
};


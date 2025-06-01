#include "header.h"

int main(void)
{
    GLFWwindow* window;

    if (!glfwInit()){
        return -1;
    }
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

/*    if(!gladLoadGLLoader(glfwGetProcAddress)){
        glfwTerminate();
        return -1;
    }*/
    gladLoadGL();

    glClearColor(0.25f, 0.5f, 0.75f, 0.3f);
    while (!glfwWindowShouldClose(window)){
        glClear(GL_COLOR_BUFFER_BIT);
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}

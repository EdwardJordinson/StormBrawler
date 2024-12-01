#include <iostream>
#include <GLFW/glfw3.h>


void error_callback(int, const char* err_str)
{
    std::cout << "\nGLFW Error: " << err_str << std::endl;
}

int main(int arg_count, char *args[])
{

    glfwSetErrorCallback(error_callback);


    int major, minor, revision;
    glfwGetVersion(&major, &minor, &revision);
    
    printf("Running against GLFW %i.%i.%i\n", major, minor, revision);

    printf(glfwGetVersionString());

    GLFWwindow* window;

    if (!glfwInit())
    {
        std::cout << "Has failed" << std::endl;
    }

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;

}


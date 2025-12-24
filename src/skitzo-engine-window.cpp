#include "glad/glad.h"
#include <GLFW/glfw3.h>

namespace SkitzoNG {
    namespace Window {
        class Window : GLFWwindow {
        private:

        public:
            Window* CreateWindow(int width, int height, const char* title) {
                Window* w = new glfwCreateWindow(width, height, title, NULL, NULL);
                if (w = NULL) {
                    // continue here after implementing log
                }

            }

        };

    }

}

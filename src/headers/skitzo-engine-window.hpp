#ifndef SKITZO_ENGINE_WINDOW_HPP
#define SKITZO_ENGIEN_WINDOW_HPP

#include "glad/glad.h"
#include <GLFW/glfw3.h>


namespace SkitzoNG {
    namespace Window {
        class Window : GLFWwindow {
        public:
            Window* CreateWindow(int width, int height, const char* title);
        };
    }
}


#endif // SKITZO_ENGINE_WINDOW_HPP

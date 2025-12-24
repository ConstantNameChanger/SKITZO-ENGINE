// SKITZO-ENGINE.CPP : MAIN MODULE OF THE ENGINE:
// RESPONSIBLE FOR: INIT SYSTEM

#include "glad/glad.h"
#include <GLFW/glfw3.h>
#include <iostream>

namespace SkitzoNG {

    namespace System {
        void SkitzoNG_Init() {
            glfwInit();
            glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
            glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
            glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        }
        namespace Log {
            void PrintErr(const char* msg) {
                std::cout << "ERROR: " << msg << "\n";
            }

            // TODO: IMPLEMENT MORE INDEPTH LOG SYSTEM

        }

    }


}
